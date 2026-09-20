// FUN_000b2fb8 @ 000b2fb8

undefined8 FUN_000b2fb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  FUN_000b37a8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_000b3cb8(uVar1,local_20);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return uVar1;
}

