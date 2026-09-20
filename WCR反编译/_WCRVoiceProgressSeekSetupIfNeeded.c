// _WCRVoiceProgressSeekSetupIfNeeded @ 015c50cc

void _WCRVoiceProgressSeekSetupIfNeeded(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_1c = 1;
  }
  else {
    puVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b2d);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    _WCRVoiceProgressSeekEnabled();
    if (((ulong)puVar2 & 1) == 0) {
      if (local_28 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEnabled__026ca938,0);
      }
      _WCRVoiceProgressSeekHideOverlay(local_18);
      local_1c = 1;
    }
    else {
      if (local_28 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar2 = local_28;
        local_28 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMaximumNumberOfTouches__026ca9c0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMinimumNumberOfTouches__026a5b58,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCancelsTouchesInView__026ca8b8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelaysTouchesBegan__026a1af0,0);
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelaysTouchesEnded__026a1af8,0);
        FUN_015c5398();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_addGestureRecognizer__026ca4a8,local_28);
        _objc_setAssociatedObject(local_18,&DAT_028e3b2d,local_28,1);
      }
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setEnabled__026ca938,puVar2 != (undefined *)0x0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _WCRVoiceProgressSeekLayoutOverlayIfNeeded(local_18);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

