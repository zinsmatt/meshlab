# Custom version of meshlab

- Checkout the branch Custom_good_version of this repo
- Checkout the branch Custom_good_version of the [VCGLib fork](https://github.com/zinsmatt/vcglib)

The two folders must be at the same level. For example:

			--> Meshlab/meshlab
			--> Meshlab/vcglib


- Install Qt 5.9 (**WARNING** you need to install the deprecated script module of Qt 5.9)
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

This is the official repository for the source and the binaries of [MeshLab](https://www.MeshLab.net). 

MeshLab is an open source, portable, and extensible system for the processing and editing of unstructured large 3D triangular meshes. It is aimed to help the processing of the typical not-so-small unstructured models arising in 3D scanning, providing a set of tools for editing, cleaning, healing, inspecting, rendering and converting this kind of meshes. These tools include MeshLab proper, a versatile program with a graphical user interface, and [meshlabserver](https://github.com/cnr-isti-vclab/meshlab/blob/master/src/meshlabserver/README.md), a program that can perform mesh processing tasks in batch mode, without a GUI. 

Compiling instruction can be found in the [src](https://github.com/cnr-isti-vclab/meshlab/tree/master/src) folder.
 
# Copyright

```
   MeshLab
   http://www.meshlab.net
   All rights reserved.

   VCGLib  http://www.vcglib.net                                     o o
   Visual and Computer Graphics Library                            o     o
                                                                  _   O  _
   Paolo Cignoni                                                    \/)\/
   Visual Computing Lab  http://vcg.isti.cnr.it                    /\/|
   ISTI - Italian National Research Council                           |
   Copyright(C) 2005-2018                                             \
```

# References

Please, when using this tool, cite the references listed in the official web page https://www.meshlab.net/#references according to you needs, or if you are lazy just cite:

Meshlab: an open-source mesh processing tool. P. Cignoni, M. Callieri, M. Corsini, M. Dellepiane, F. Ganovelli, G. Ranzuglia
Proceedings of the 2008 Eurographics Italian Chapter Conference, ISBN: 978-3-905673-68-5, pp. 129-136, DOI: 10.2312/LocalChapterEvents/ItalChap/ItalianChapConf2008/129-136

BibTeX format:

```
@inproceedings {LocalChapterEvents:ItalChap:ItalianChapConf2008:129-136,
booktitle = {Eurographics Italian Chapter Conference},
editor = {Vittorio Scarano and Rosario De Chiara and Ugo Erra},
title = {{MeshLab: an Open-Source Mesh Processing Tool}},
author = {Cignoni, Paolo and Callieri, Marco and Corsini, Massimiliano and Dellepiane, Matteo and Ganovelli, Fabio and Ranzuglia, Guido},
year = {2008},
publisher = {The Eurographics Association},
ISBN = {978-3-905673-68-5},
DOI = {10.2312/LocalChapterEvents/ItalChap/ItalianChapConf2008/129-136}
}
```

# Contacts

 - Paolo Cignoni (paolo.cignoni (at) isti.cnr.it)
 - Alessandro Muntoni (alessandro.muntoni (at) isti.cnr.it)

# Feedback

For documented and repeatable bugs, feature requests, etc., please use the [GitHub issues](https://github.com/cnr-isti-vclab/meshlab/issues).

For general questions use [StackOverflow](http://stackoverflow.com/questions/tagged/meshlab).



