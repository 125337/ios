// FUN_007beb2c @ 007beb2c

byte FUN_007beb2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_44;
  undefined8 local_20;
  bool local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_007bebf8();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028ccca8 == (code *)0x0) {
      local_44 = 0;
    }
    else {
      uVar2 = local_20;
      (*DAT_028ccca8)(local_20,param_2);
      local_44 = (int)uVar2;
    }
    local_11 = local_44 != 0;
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

