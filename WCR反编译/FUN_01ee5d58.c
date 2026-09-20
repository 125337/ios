// FUN_01ee5d58 @ 01ee5d58

void FUN_01ee5d58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  uVar1 = local_18;
  FUN_01f0f4dc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileURLWithPath_isDirectory__026a8f30,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

