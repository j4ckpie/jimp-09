# PW JIMP-09

## Project Structure
```
repository/
├── bin/
│   └── gauss       # Compiled file
├── dane/           # Data tests
├── src/
│   └── backsubst.c # Implementation of back substrate
│   └── backsubst.h # Header file for back substrate
│   └── gauss.c     # Implementation of Gauss
│   └── gauss.h     # Header file for Gauss
│   └── main.c      # Entry point for the program
│   └── mat_io.c    # Essential logic for matrix processing
│   └── mat_io.h    # Header file for matrix processing
├── Makefile        # Build instructions
└── README.md       # Project documentation
```

## Building the Project
This project includes a `Makefile` for building and running the program.

Build the program using `make`:
   ```bash
   make
   ```
   The compiled executable will be located in the bin directory as `gauss`.

## Usage
To execute the program manually, run:
```bash
./bin/gauss <directory_to_matrix> <directory_to_vector>
```
- **Input:** Provide matrix and vector as the input data.
- **Output:** The program will calculate the desired matrix.

## Authors
Enchanced by Jakub Pietrala & Bartosz Starzyński.
