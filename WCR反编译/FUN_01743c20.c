// FUN_01743c20 @ 01743c20

ulong FUN_01743c20(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKey__0269e048,&cf_provider);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if ((uVar2 & 1) == 0) {
    local_40 = 0;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKey__0269e048,&cf_provider);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_0173835c();
  _objc_storeStrong(&local_18,0);
  return local_40;
}

