// ___isPlatformVersionAtLeast @0xc6328

void ___isPlatformVersionAtLeast(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_50;
  uint uStack_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00110518;
  _dispatch_once_f((dispatch_once_t *)&DAT_0012c6b8,(void *)0x0,_initializeAvailabilityCheck);
  if (DAT_0012c6c0 != 0) {
    uStack_4c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    local_50 = param_1;
    uVar1 = __availability_version_check(1,&local_50);
    if (*(long *)PTR____stack_chk_guard_00110518 == local_48) {
      return;
    }
    goto LAB_000c6474;
  }
  _dispatch_once_f((dispatch_once_t *)&DAT_0012c6b0,(void *)0x0,
                   _compatibilityInitializeAvailabilityCheck);
  if (param_2 < __MergedGlobals) {
LAB_000c63e0:
    uVar1 = 1;
    lVar2 = *(long *)PTR____stack_chk_guard_00110518;
  }
  else if (__MergedGlobals < param_2) {
LAB_000c6404:
    uVar1 = 0;
    lVar2 = *(long *)PTR____stack_chk_guard_00110518;
  }
  else {
    if ((int)param_3 < DAT_0012c6a4) goto LAB_000c63e0;
    if (DAT_0012c6a4 < (int)param_3) goto LAB_000c6404;
    uVar1 = (ulong)((int)param_4 <= DAT_0012c6a8);
    lVar2 = *(long *)PTR____stack_chk_guard_00110518;
  }
  if (lVar2 == local_48) {
    return;
  }
LAB_000c6474:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}

