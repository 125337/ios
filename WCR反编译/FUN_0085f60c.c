// FUN_0085f60c @ 0085f60c

void FUN_0085f60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_40 = 1;
  }
  else {
    puVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cd4c9);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineProfileBgHTMLEdgePress_026ce9e8;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineProfileBgHTMLEdgePress_026ce9e8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR_WCRefineProfileBgHTMLEdgePress_026ce9e8;
      _objc_alloc_init();
      puVar2 = local_48;
      local_48 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_48,
                 PTR_s_handleHTMLEdgeLongPress__026a8f10);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setGesture__026a8f18,puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(DAT_02324020);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4034000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_28,&DAT_028cd4c9,local_48,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setProfileCardView__026a8ed8,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setWebView__026a8f28,local_28);
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar3 != puVar2) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeGestureRecognizer__026ca808);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_28;
      puVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_gesture_026a8f20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addGestureRecognizer__026ca4a8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

