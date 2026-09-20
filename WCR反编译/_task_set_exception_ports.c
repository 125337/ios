// _task_set_exception_ports @ 0221fa80

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_task_set_exception_ports
          (task_t task,exception_mask_t exception_mask,mach_port_t new_port,
          exception_behavior_t behavior,thread_state_flavor_t new_flavor)

{
                    /* WARNING: Could not recover jumptable at 0x0221fa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__task_set_exception_ports_0264d650)
            (task,exception_mask,new_port,behavior,new_flavor);
  return task;
}

