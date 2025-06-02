-- Function to read input from a file
local function read_input(filename)
    local lines = {}
    local file = io.open(filename, "r")
    if not file then
        -- Attempt to read from parent directory if default input.txt is not found
        -- This is useful if running from a build directory or specific day folder
        file = io.open("../" .. filename, "r")
        if not file then
            io.stderr:write("Unable to open file: " .. filename .. " or ../" .. filename .. "\n")
            return nil, "Unable to open file: " .. filename
        end
        print("Using input file: ../" .. filename)
    end

    for line in file:lines() do
        table.insert(lines, line)
    end
    file:close()
    return lines
end

-- Placeholder for Phase 1 solution
local function solve_phase1(input)
    -- TODO: Implement Phase 1 logic
    if input == nil or #input == 0 then
        return "Phase 1: No input data"
    end
    return "Phase 1: Result for '" .. input[1] .. "...'"
end

-- Placeholder for Phase 2 solution
local function solve_phase2(input)
    -- TODO: Implement Phase 2 logic
    if input == nil or #input == 0 then
        return "Phase 2: No input data"
    end
    return "Phase 2: Result for '" .. input[1] .. "...'"
end

-- Main script execution
local filename = "input.txt"
if arg and arg[1] then
    filename = arg[1] -- Allow specifying input file via command line
end

local input_data, err = read_input(filename)

if not input_data then
    io.stderr:write("Error reading input: " .. err .. "\n")
    if filename == "input.txt" and not string.match(err, "../input.txt") then
        -- Try parent directory if default and not already tried by read_input
        -- This logic is somewhat redundant due to read_input already trying ../
        -- but kept for explicit clarity if needed.
        -- For Lua, typically you run `lua template.lua` or `lua dayXX/main.lua`
        -- and paths are relative to CWD.
    end
    if not input_data then -- Still no data
        io.stderr:write("Failed to read input. Please ensure 'input.txt' exists or specify the path.\n")
        os.exit(1)
    end
end

if #input_data == 0 then
    print("Warning: Input file '" .. filename .. "' is empty.")
    -- Solvers should handle empty input
end

local result_phase1 = solve_phase1(input_data)
print("Phase 1: " .. tostring(result_phase1))

local result_phase2 = solve_phase2(input_data)
print("Phase 2: " .. tostring(result_phase2))
