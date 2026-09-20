// _vm_read_overwrite @ 0221fad4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_vm_read_overwrite(vm_map_t target_task,vm_address_t address,vm_size_t size,vm_address_t data,
                  vm_size_t *outsize)

{
                    /* WARNING: Could not recover jumptable at 0x0221fadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_read_overwrite_0264d688)();
  return target_task;
}

