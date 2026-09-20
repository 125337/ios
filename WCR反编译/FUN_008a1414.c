// FUN_008a1414 @ 008a1414

byte FUN_008a1414(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte local_58;
  undefined8 local_28;
  code *local_20;
  byte local_11;
  
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong();
  FUN_008a1538();
  if (puVar1 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
    local_11 = 1;
  }
  else if (puVar1 == (undefined8 *)((long)&MACH_HEADER.magic + 2)) {
    local_11 = 0;
  }
  else {
    if (local_20 == (code *)0x0) {
      local_58 = 0;
    }
    else {
      uVar2 = local_28;
      (*local_20)(local_28,param_3);
      local_58 = (byte)uVar2;
    }
    local_11 = local_58 & 1;
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

