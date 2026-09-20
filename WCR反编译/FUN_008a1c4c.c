// FUN_008a1c4c @ 008a1c4c

void FUN_008a1c4c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  byte local_58;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (DAT_028cdda0 != (code *)0x0) {
    FUN_008a1ebc();
    local_58 = param_3;
    if ((uVar1 & 1) != 0) {
      local_58 = 1;
    }
    (*DAT_028cdda0)(local_18,param_2,local_58 & 1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

