// FUN_008a1a44 @ 008a1a44

byte FUN_008a1a44(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar3;
  byte local_58;
  undefined8 local_20;
  byte local_11;
  undefined8 *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_008a1ebc();
  if ((uVar1 & 1) == 0) {
    if (DAT_028cdd90 == (code *)0x0) {
      local_58 = 0;
    }
    else {
      uVar3 = local_20;
      (*DAT_028cdd90)(local_20,param_2);
      local_58 = (byte)uVar3;
    }
    local_11 = local_58 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

