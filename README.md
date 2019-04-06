# Custom version of meshlab

- Checkout the branch Custom_good_version of this repo
- Checkout the branch Custom_good_version of the [VCGLib fork](https://github.com/zinsmatt/vcglib)

The two folders must be at the same level. For example:

			--> Meshlab/meshlab
			--> Meshlab/vcglib


- Install Qt 5.9
- Install Eigen 3

- Compile `meshlab/src/external/external.pro`:

			cd meshlab/src/external
			~/Qt/5.9/gcc_64/bin/qmake external.pro
			make

- Compile  `meshlab/src/meshlab_full.pro`:

			cd meshlab/src
			~/Qt/5.9/gcc_64/bin/qmake -recursive meshlab_full.pro
			make


- The executable is in `meshlab/src/distrib/`

- Add symlink to `/usr/bin`:

			ln -s /home/matt/lib/Meshlab/meshlab/src/distrib/meshlab /usr/bin/meshlab


- Copy `meshlab/src/distrib/Meshlab.desktop` to `/usr/share/applications/`


# ![MeshLab Logo](src/meshlab/images/eye64.png) MeshLab
This is the official repository for the sources and the binaries of MeshLab. 

MeshLab is an open source, portable, and extensible system for the processing and editing of unstructured large 3D triangular meshes. The source is released under the GPL license.
The system is aimed to help the processing of the typical not-so-small unstructured models arising in 3D scanning, providing a set of tools for editing, cleaning, healing, inspecting, rendering and converting this kind of meshes. 

MeshLab is mostly based on the open source c++ mesh processing library [VCGlib](http://www.vcglib.net) developed at the [Visual Computing Lab](http://vcg.isti.cnr.it) of [ISTI - CNR](http://www.isti.cnr.it), for all the core mesh processing tasks and it is available for Windows, MacOSX, and Linux. 

Compiling instruction can be found in the [src](https://github.com/cnr-isti-vclab/meshlab/tree/master/src) folder.
 
