# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\blackboard_projects\blackboard\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\blackboard_projects\blackboard\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {blackboard}\
-hw {C:\Xilinx\blackboard\blackboard.xsa}\
-out {C:/blackboard_projects}

platform write
domain create -name {standalone_ps7_cortexa9_0} -display-name {standalone_ps7_cortexa9_0} -os {standalone} -proc {ps7_cortexa9_0} -runtime {cpp} -arch {32-bit} -support-app {empty_application}
platform generate -domains 
platform active {blackboard}
domain active {zynq_fsbl}
domain active {standalone_ps7_cortexa9_0}
platform generate -quick
platform generate
