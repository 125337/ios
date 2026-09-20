// FUN_001a7460 @ 001a7460

void FUN_001a7460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  uVar3 = local_18;
  uVar2 = local_20;
  pcVar1 = DAT_028c8a28;
  uVar4 = local_28;
  FUN_001b02e8();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(uVar3,uVar2,uVar4,local_30);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

