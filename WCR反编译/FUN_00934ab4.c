// FUN_00934ab4 @ 00934ab4

bool FUN_00934ab4(void)

{
  int iVar1;
  size_t local_2d0;
  bool local_2c1;
  int local_2c0 [3];
  pid_t local_2b4;
  undefined1 auStack_2b0 [32];
  uint local_290;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _bzero(auStack_2b0,0x288);
  local_2c0[0] = 1;
  local_2c0[1] = 0xe;
  local_2c0[2] = 1;
  local_2b4 = _getpid();
  local_2d0 = 0x288;
  iVar1 = _sysctl(local_2c0,4,auStack_2b0,&local_2d0,(void *)0x0,0);
  local_2c1 = iVar1 == 0 && (local_290 & 0x800) != 0;
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_2c1;
}

