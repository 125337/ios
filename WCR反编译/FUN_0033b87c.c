// FUN_0033b87c @ 0033b87c

undefined8 FUN_0033b87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_60;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_0033ee78();
  if ((uVar1 & 1) == 0) {
    if (DAT_028c9ef0 == (code *)0x0) {
      local_60 = 0x3ff0000000000000;
    }
    else {
      (*DAT_028c9ef0)(local_20,param_3);
      local_60 = param_1;
    }
    local_18 = local_60;
  }
  else {
    local_18 = 0x3ff0000000000000;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

