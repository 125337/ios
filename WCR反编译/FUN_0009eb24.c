// FUN_0009eb24 @ 0009eb24

void FUN_0009eb24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarViewControllerForView();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  _WCRAvatarTrackedSceneNameForView(local_18,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

