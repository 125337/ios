// _WCRSuperFloatImageForAction @ 0161bc70

void _WCRSuperFloatImageForAction(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  puVar1 = &local_18;
  _objc_storeStrong(&local_18,param_2);
  uVar2 = local_18;
  _WCRSuperFloatMenuIconTintColor();
  _objc_retainAutoreleasedReturnValue();
  _WCRSuperFloatImageForActionWithTint(param_1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

