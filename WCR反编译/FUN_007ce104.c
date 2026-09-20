// FUN_007ce104 @ 007ce104

uint FUN_007ce104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_007cdd54();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_007d06d0();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return (uint)uVar1 & 1;
}

