// FUN_00517d08 @ 00517d08

undefined4 FUN_00517d08(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_44;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_0051890c();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028cb060 == (code *)0x0) {
      local_44 = 0;
    }
    else {
      uVar2 = local_20;
      (*DAT_028cb060)(local_20,param_2);
      local_44 = (undefined4)uVar2;
    }
    local_14 = local_44;
  }
  else {
    local_14 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

