// FUN_0093136c @ 0093136c

void FUN_0093136c(ulong param_1)

{
  kern_return_t kVar1;
  int iVar2;
  ulong uVar3;
  pthread_t p_Stack_68;
  mach_port_name_t local_5c;
  pthread_attr_t pStack_58;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_00934ab4();
  if ((param_1 & 1) != 0) goto LAB_00931514;
  if (DAT_028e2768 == 0) {
    local_5c = 0;
    kVar1 = _mach_port_allocate(*(ipc_space_t *)PTR__mach_task_self__025786a8,1,&local_5c);
    if (kVar1 != 0) goto LAB_00931514;
    kVar1 = _mach_port_insert_right
                      (*(ipc_space_t *)PTR__mach_task_self__025786a8,local_5c,local_5c,0x14);
    if (kVar1 != 0) {
      _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__025786a8,local_5c);
      goto LAB_00931514;
    }
    DAT_028e2768 = local_5c;
  }
  if (DAT_028e276c == 0) {
    uVar3 = 0;
    _OSAtomicCompareAndSwap32(0,1,&DAT_028e276c);
    if ((uVar3 & 1) != 0) {
      _pthread_attr_init(&pStack_58);
      _pthread_attr_setdetachstate(&pStack_58,2);
      iVar2 = _pthread_create(&p_Stack_68,&pStack_58,(void **)FUN_00935758,(void *)0x0);
      if (iVar2 != 0) {
        _OSAtomicCompareAndSwap32(1,0,&DAT_028e276c);
      }
      _pthread_attr_destroy(&pStack_58);
    }
  }
  kVar1 = _task_set_exception_ports
                    (*(task_t *)PTR__mach_task_self__025786a8,0x6e,DAT_028e2768,-0x7fffffff,5);
  if (kVar1 != 0) {
    _task_set_exception_ports(*(task_t *)PTR__mach_task_self__025786a8,0x6e,DAT_028e2768,1,5);
  }
LAB_00931514:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

