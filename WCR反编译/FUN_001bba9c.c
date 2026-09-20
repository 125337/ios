// FUN_001bba9c @ 001bba9c

void FUN_001bba9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_001e9fdc();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8b10)(local_18,local_20,local_28,param_4);
  }
  else {
    (*DAT_028c8b10)(local_18,local_20,0,param_4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

