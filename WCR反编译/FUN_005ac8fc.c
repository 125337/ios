// FUN_005ac8fc @ 005ac8fc

void FUN_005ac8fc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38 [3];
  undefined8 local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_panGesture_026a5768);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_18;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_panGesture_026a5768);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeGestureRecognizer__026ca808);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWCRefine_panGesture__026a5770,0);
    }
  }
  else {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_panGesture_026a5768);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
                 PTR_s_WCRefine_handlePan__026a57b8);
      puVar1 = local_38[0];
      local_38[0] = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setMaximumNumberOfTouches__026ca9c0,1)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setMinimumNumberOfTouches__026a5b58,1)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setDelaysTouchesEnded__026a1af8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setDelegate__026ca910,local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_addGestureRecognizer__026ca4a8,local_38[0]);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setWCRefine_panGesture__026a5770,local_38[0]);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setEnabled__026ca938,1);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_feedbackGenerator_026a5788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setWCRefine_feedbackGenerator__026a5790,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

