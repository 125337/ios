// updateOverlayWindowFrame @ 00ff52a4

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertDanmakuPresenter::updateOverlayWindowFrame(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d2;
  double local_38;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayWindow_026ad6a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar3 = in_d2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_38 = in_d2;
    if (in_d2 <= 0.0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_38 = dVar3;
    }
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayStripHeightForWindow__026ad740);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOverlayStripHeight__026ad748);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    dVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayStripHeight_026ad750);
    uVar5 = 0;
    uVar4 = 0;
    FUN_00ff086c();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overlayWindow_026ad6a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,local_38,dVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

