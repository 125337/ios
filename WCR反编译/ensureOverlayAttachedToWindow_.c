// ensureOverlayAttachedToWindow: @ 00ff5b3c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertDanmakuPresenter::ensureOverlayAttachedToWindow_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  double in_d0;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_d2;
  double dVar9;
  double local_150;
  ID local_48;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureOverlayWindow_026ad770);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_48 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateOverlayWindowFrame_026ad768);
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayStripHeight_026ad750);
    if (in_d0 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_overlayStripHeightForWindow__026ad740,local_40[0]);
      local_150 = in_d0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayStripHeight_026ad750);
      local_150 = in_d0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_bounds_026ca548);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if (IVar2 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar4 != local_48;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR_WCRKeywordAlertDanmakuPassThroughView_026cec80;
      _objc_alloc();
      uVar8 = 0;
      uVar6 = 0;
      uVar7 = in_d2;
      dVar9 = local_150;
      FUN_00ff086c();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar8,uVar7,dVar9,puVar5,PTR_s_initWithFrame__026ca6e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverlayView__026ad780);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_48;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    uVar6 = 0;
    uVar7 = 0;
    FUN_00ff086c();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar6,in_d2,local_150);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

