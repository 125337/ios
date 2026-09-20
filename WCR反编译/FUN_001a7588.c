// FUN_001a7588 @ 001a7588

void FUN_001a7588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  uVar5 = local_18;
  uVar3 = local_20;
  uVar2 = local_28;
  pcVar1 = DAT_028c8a30;
  uVar4 = local_30;
  FUN_001b02e8();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(uVar5,uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

