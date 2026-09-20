// FUN_001bc164 @ 001bc164

void FUN_001bc164(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  local_29 = param_4;
  (*DAT_028c8b30)(local_18,local_20,local_28,param_4 & 1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_38 = uVar1;
  FUN_001eb484(*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,local_28,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

