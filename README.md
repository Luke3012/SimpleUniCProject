This academic project, created for the Programming I and Lab course at the University of Naples Parthenope, includes two separate C-based simulators:

🧬 Cell Simulation
• 	Represents a population of 1000 cells on an 80x80 grid.
• 	Each cell is either “white” (‘ ’) or “black” (‘*’) based on occupancy.
• 	Evolution follows custom rules based on the number of surrounding black cells (in all 9 adjacent positions).
• 	Uses two arrays to compute state changes without interference between steps.
• 	The grid behaves as toroidal—top and bottom, left and right edges loop.
• 	The simulation displays results at various time steps: 1, 2, 3... up to 800.

📞 Call Archive Simulation
• 	Models a monthly call log (up to 10 calls/day), storing caller, receiver, and duration.
• 	Call cost is calculated at €0.10/min.
• 	User functions include:
• 	Searching by phone number for call details on specific days.
• 	Calculating total cost for a phone number over the month.
• 	Identifying the most expensive call on a given date using an incremental recursive algorithm.
• 	Archive can be initialized with random entries.
• 	Multiple tests executed to validate each functionality.

Both programs include:
• 	✍️ Structured comments for functions and logic blocks
• 	📸 Screenshots and textual descriptions for test result interpretation
• 	📁 Organized project folders with source files, outputs, images, and an HTML multimedia report
