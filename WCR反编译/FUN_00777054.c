// FUN_00777054 @ 00777054

void FUN_00777054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_18;
  uVar2 = local_20;
  uVar1 = local_28;
  uVar4 = local_28;
  FUN_00777630();
  _objc_retainAutoreleasedReturnValue();
  FUN_0077717c(uVar3,uVar2,uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

