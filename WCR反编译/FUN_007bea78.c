// FUN_007bea78 @ 007bea78

undefined8 FUN_007bea78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_007bebf8();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028ccca0 == (code *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = local_20;
      (*DAT_028ccca0)(local_20,param_2);
    }
    local_18 = local_48;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

