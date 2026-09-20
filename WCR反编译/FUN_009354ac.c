// FUN_009354ac @ 009354ac

void FUN_009354ac(int param_1)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  ssize_t sVar4;
  ulong uVar5;
  long local_248;
  ulong local_238;
  undefined1 auStack_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if (((-1 < param_1) && (DAT_028cefb0 != '\0')) &&
     (uVar1 = _open(&DAT_028cefb0,0), -1 < (int)uVar1)) {
    FUN_00935218(param_1,"breadcrumbs:\n");
    local_238 = 0;
    do {
      while( true ) {
        uVar5 = local_238 - 0x2000;
        if (0x1fff < local_238) goto LAB_00935628;
        uVar2 = (ulong)uVar1;
        _read(uVar5,uVar2,auStack_228,0x200);
        if ((long)uVar2 < 0) break;
        if (uVar2 == 0) {
          uVar5 = 0;
          goto LAB_00935628;
        }
        local_248 = 0;
        do {
          while( true ) {
            if ((long)uVar2 <= local_248) goto LAB_00935614;
            sVar4 = _write(param_1,auStack_228 + local_248,uVar2 - local_248);
            if (sVar4 < 0) break;
            if (sVar4 == 0) goto LAB_00935614;
            local_248 = local_248 + sVar4;
          }
          piVar3 = ___error();
        } while (*piVar3 == 4);
LAB_00935614:
        local_238 = local_238 + uVar2;
      }
      piVar3 = ___error();
      uVar5 = (ulong)(*piVar3 - 4U);
    } while (*piVar3 - 4U == 0);
LAB_00935628:
    _close(uVar5,uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

