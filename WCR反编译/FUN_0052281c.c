// FUN_0052281c @ 0052281c

void FUN_0052281c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar5 = local_18;
  uVar4 = local_20;
  uVar3 = local_28;
  uVar2 = local_30;
  pcVar1 = DAT_028cb0f8;
  uVar6 = local_30;
  FUN_00528d0c(local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(uVar5,uVar4,uVar3,uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

