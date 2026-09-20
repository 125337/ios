// _WCRSuperFloatPreviewBallSize @ 01639b64

void _WCRSuperFloatPreviewBallSize(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_40 = PTR___NSConcreteStackBlock_02578660;
    local_38 = 0xc0000000;
    local_34 = 0;
    local_30 = FUN_01639c94;
    local_28 = &DAT_02578c00;
    local_20 = local_18;
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    FUN_01639cc4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_previewBallSize_;
    local_48 = puVar1;
    _NSSelectorFromString();
    if (local_48 != (undefined *)0x0) {
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,local_48,pcVar2);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  return;
}

