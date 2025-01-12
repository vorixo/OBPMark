### OBPMark (On Board Processing Benchmark) --- PUBLIC BETA
Contact: OBPMark@esa.int
Website: OBPMark.org
  
## What is OBPMark?
OBPMark (On-Board Processing Benchmarks) is a set of computational performance benchmarks developed specifically for spacecraft on-board data processing applications, such as: image and radar processing, data and image compressions, signal processing and machine learning.

The development of OBPMark was driven by the lack of openly available and representative benchmarks for space applications.

OBPMark consists of three main components:

- A technical note describing the benchmarks, their implementation and result reporting.
- Reference implementations in C (sequential) and standard parallelisation schemes, such as OpenMP, OpenCL and CUDA.
- A list of known published performance benchmark results.

OBPMark has been developed in cooperation by the European Space Agency (ESA) and Barcelona Supercomputing Center (BSC).
The OBPMark definition and implementation has been made available partially through funding from the ESA “General Studies Programme (GSP)”.

OBPMark is openly available, and contributions from the community are warmly welcome.

# Contributors 
Authors/Chairs:  
- David Steenari, European Space Agency (ESA)  
- Dr. Leonidas Kosmidis, Barcelona Supercomputing Center (BSC)  
  
Contributors:  
- Alvaro Jover-Alvarez, Universitat Politècnica de Catalunya and Barcelona Supercomputing Center (UPC/BSC):
	- Implementation of OpenMP versions. 
- Ivan Rodriguez Ferrandez, Universitat Politècnica de Catalunya and Barcelona Supercomputing Center (UPC/BSC):
	- Implementation of OpenCL / CUDA versions.  

## PUBLIC BETA VERSION NOTICE
Please note that OBPMark is currently in "Public Beta" while the implementations and verifications of the benchmarks are being completed.

Expect features and data to be missing. For an overview of the main current issues and missing features, see the "Issues" tab at the top. 

In the meanwhile, users are invited to test out the existing implementations (see list below) and report bugs and issues via the github interface.

## Description
This repository contains a set of reference implementations for performing benchmarks on devices and systems on-board spacecraft. 

The following folders are in the repository: 

	docs/	The TeX files for building the OBPMark specification. 
	src/	Source files for each of the benchmarks. 

The benchmarks are organised in the following structure ("Public Beta" current status also shown): 

	src/1.1-image/				-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/1.2-radar/				-- Not available yet.
	src/2.1-data_compression/		-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/2.2-image_compression/		-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/2.3-hyperspectral_compression/	-- Not available yet.
	src/3.1-aes_encryption/			-- Not available yet.
	src/4.1-fir_filter/			-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/4.2-fft/				-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/4.3-convolution/			-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/4.4-matrix_multiplication/		-- Available in C (sequential), OpenMP, OpenCL and CUDA.
	src/5.1-object_detection/		-- Not available yet. 
	src/5.2-cloud_screening/		-- Not available yet.
	src/common/

The entire set of benchmarks can be built by invoking the Makefile in the top src/ directory, or by invoking the individual Makefiles in each of the src sub-directories. 


