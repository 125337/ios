// _vm_protect @ 0221fac8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_vm_protect(vm_map_t target_task,vm_address_t address,vm_size_t size,boolean_t set_maximum,
           vm_prot_t new_protection)

{
                    /* WARNING: Could not recover jumptable at 0x0221fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_protect_0264d680)();
  return target_task;
}

