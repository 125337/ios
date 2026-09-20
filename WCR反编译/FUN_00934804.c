// FUN_00934804 @ 00934804

void FUN_00934804(void)

{
  char *pcVar1;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if (DAT_028ce3b0 != '\0') {
    pcVar1 = acStack_428;
    _snprintf(pcVar1,0x400,"%s");
    FUN_009348ec(pcVar1,0x2f);
    if ((pcVar1 != (char *)0x0) && (pcVar1 != acStack_428)) {
      *pcVar1 = '\0';
      _mkdir(acStack_428,0x1ed);
    }
    _mkdir(&DAT_028ce3b0,0x1ed);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

