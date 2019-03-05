# How to build OpenSees on mahuika

## Installing easybuild

Follow the instructions at https://easybuild.readthedocs.io/en/latest/Installation.html. 

```
wget https://raw.githubusercontent.com/easybuilders/easybuild-framework/develop/easybuild/scripts/bootstrap_eb.py
export EASYBUILD_PREFIX=$PWD
python bootstrap_eb.py $EASYBUILD_PREFIX
```

Note: make sure you don't have modules loaded beyond:
```
ml

Currently Loaded Modules:
  1) slurm/17.11.7   2) NeSI   3) craype-broadwell   4) craype-network-infiniband
```

Upon successful installation you should see:
```
ls modules/all/
EasyBuild
```

## Setting up the environment

```
source eb.sh
```

The `eb` command should now be found:
```
which eb
```

## Building and installing OpenSees and dependencies

### Building a dependency

The build recipes are stored under `easyconfigs`. To build a recipe type `eb <recipe>`. For instance,
```
cd easyconfigs
eb M4-1.4.17-intel-2018b.eb
```
Note: you may get `/bin/bash: ./configure: Permission denied` if you build under /nesi/nobackup. This is due to a file system stetting leading to executable scripts not getting the right permissions. The solution is to build in your `$HOME`. 

You should now be able to load the module
```
ml spider M4
ml M4/1.4.17-intel-2018b
```

### Build OpenSees with with dependencies

Use `--robot` to build a software with its dependencies, e.g.
```
eb OpenSees-3.0.2-gimkl-2017a.eb --robot 
```
## Running a test

TO DO 

