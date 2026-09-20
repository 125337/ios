// FUN_00400aa8 @ 00400aa8

void FUN_00400aa8(void)

{
  bool bVar1;
  int iVar2;
  utsname uStack_528;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _bzero(&uStack_528,0x500);
  iVar2 = _uname(&uStack_528);
  bVar1 = false;
  if (iVar2 == 0) {
    iVar2 = _strncmp(uStack_528.machine,"iPad",4);
    bVar1 = iVar2 == 0;
  }
  DAT_028ca680 = bVar1;
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

