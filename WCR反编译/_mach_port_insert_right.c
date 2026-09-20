// _mach_port_insert_right @ 0221f360

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_insert_right
          (ipc_space_t task,mach_port_name_t name,mach_port_t poly,mach_msg_type_name_t polyPoly)

{
                    /* WARNING: Could not recover jumptable at 0x0221f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_insert_right_0264d190)(task,name,poly,polyPoly);
  return task;
}

