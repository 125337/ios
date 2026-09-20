// FUN_00573004 @ 00573004

byte FUN_00573004(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00573bb4();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028cb570 == (code *)0x0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_20;
      (*DAT_028cb570)(local_20,param_2);
      local_11 = (byte)uVar2 & 1;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

