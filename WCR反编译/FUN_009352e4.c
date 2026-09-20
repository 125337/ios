// FUN_009352e4 @ 009352e4

void FUN_009352e4(undefined4 param_1)

{
  int iVar1;
  char acStack_38 [32];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  iVar1 = _snprintf(acStack_38,0x20,"%lld");
  if (0 < iVar1) {
    FUN_00935218(iVar1,param_1,acStack_38);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

