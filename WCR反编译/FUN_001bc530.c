// FUN_001bc530 @ 001bc530

void FUN_001bc530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  local_31 = param_5;
  (*DAT_028c8b48)(local_18,local_20,local_28,local_30,param_5 & 1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_40 = uVar1;
  FUN_001eb484(*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,local_28,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

