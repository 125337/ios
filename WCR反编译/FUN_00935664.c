// FUN_00935664 @ 00935664

void FUN_00935664(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_00933218(auStack_228,0x200,param_2,param_3);
  FUN_00935218(param_1,auStack_228);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

