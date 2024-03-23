export E1039_ROOT=/e906/app/software/osg/software/e1039
if [ ! -d $E1039_ROOT ] ; then 
    E1039_ROOT=/cvmfs/seaquest.opensciencegrid.org/seaquest/software/e1039
fi
source $E1039_ROOT/resource/this-resource.sh
source $E1039_ROOT/share/this-share.sh
source $(dirname $(readlink -f $BASH_SOURCE))/this-core.sh
