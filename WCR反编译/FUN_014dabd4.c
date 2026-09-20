// FUN_014dabd4 @ 014dabd4

void FUN_014dabd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  uVar1 = local_18;
  _object_getClass();
  _class_getSuperclass();
  local_30 = uVar1;
  _objc_msgSendSuper(&local_38,local_20,local_28);
  uVar1 = local_28;
  uVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3690);
  _objc_retainAutoreleasedReturnValue();
  FUN_014dacc0(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

