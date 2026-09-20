// ensureOverlayWindow @ 00ff5510

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertDanmakuPresenter::ensureOverlayWindow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  undefined *local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_40;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayWindow_026ad6a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = in_d2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRKeywordAlertDanmakuOverlayWindow_026cec68;
    _objc_alloc();
    uVar6 = 0;
    uVar4 = 0;
    uVar7 = 0x405e000000000000;
    FUN_00ff086c();
    local_70 = uVar4;
    local_68 = uVar6;
    local_58 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverlayWindow__026ad758);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar4 = 0x4000000000000000;
    dVar5 = *(double *)PTR__UIWindowLevelStatusBar_02578240 + 2.0;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR_WCRKeywordAlertDanmakuHostView_026cec70;
    _objc_alloc();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_98 = dVar5;
    local_90 = uVar4;
    local_80 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar5,uVar4,local_40,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_78 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAutoresizingMask__026ca878,0x12);
    puVar1 = PTR_WCRKeywordAlertDanmakuHostViewController_026cec78;
    _objc_alloc_init();
    local_a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setView__026aa750,local_78);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_78,0);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeWindowScene_026ad760);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateOverlayWindowFrame_026ad768);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
  return local_28;
}

