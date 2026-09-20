// _WCRefineVoiceDataFromMediaPath @ 008de548

void _WCRefineVoiceDataFromMediaPath(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_008de5dc(local_18,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

