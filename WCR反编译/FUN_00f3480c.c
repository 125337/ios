// FUN_00f3480c @ 00f3480c

void FUN_00f3480c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
             PTR_s_ephemeralSessionConfiguration_026aaf10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setURLCache__026ac040);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRequestCachePolicy__026ac048,1);
  puVar2 = PTR__OBJC_CLASS___NSURLSession_026ce498;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sessionWithConfiguration__026a5f58,
             local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2d40;
  DAT_028e2d40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

