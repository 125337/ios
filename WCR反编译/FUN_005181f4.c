// FUN_005181f4 @ 005181f4

byte FUN_005181f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_44;
  undefined8 local_20;
  bool local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_0051890c();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028cb088 == (code *)0x0) {
      local_44 = 0;
    }
    else {
      uVar2 = local_20;
      (*DAT_028cb088)(local_20,param_2);
      local_44 = (int)uVar2;
    }
    local_11 = local_44 != 0;
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

