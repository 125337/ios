// FUN_02208614 @ 02208614

ulong FUN_02208614(void)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x20;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  uVar1 = unaff_x20;
  FUN_022224c0();
  if ((uVar1 & 1) == 0) {
    local_58 = 0;
    uVar1 = unaff_x20;
    FUN_022224e0(unaff_x20,local_70,&local_58,&local_50);
    if ((uVar1 & 1) == 0) {
      FUN_02222120(0x3ff0000000000000,unaff_x20,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_68 = unaff_x20;
    }
    else {
      local_68 = 0;
      FUN_021c8144();
      FUN_0220ef04(local_58,0x3ff0000000000000);
    }
  }
  else {
    local_68 = 0;
    FUN_021c8144();
    FUN_021e432c(local_38,local_40,local_48,0x3ff0000000000000);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return local_68;
}

