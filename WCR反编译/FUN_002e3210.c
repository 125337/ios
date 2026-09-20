// FUN_002e3210 @ 002e3210

void FUN_002e3210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_48 = 0;
  local_40 = param_6;
  _objc_storeStrong(&local_48,param_7);
  FUN_002e6bac(local_48);
  uVar1 = local_38;
  (*DAT_028c9918)(local_30,uStack_28,local_20,uStack_18,local_38,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = uVar1;
  FUN_002e71b4(uVar1,1);
  uVar1 = local_60[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

