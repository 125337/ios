// updatePointSelection @ 01d502d0

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::updatePointSelection(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID local_30;
  int local_24;
  SEL local_20;
  ID local_18;
  
  local_24 = 0;
  local_20 = param_2;
  local_18 = param_1;
  while( true ) {
    uVar3 = (ulong)local_24;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pointViews_026c4800);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar4 <= uVar3) break;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pointViews_026c4800);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar4 = (ID)local_24;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedPointIndex_026c4918);
    if (IVar4 == IVar1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02339ae8,DAT_02323f00,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    _objc_storeStrong(&local_30,0);
    local_24 = local_24 + 1;
  }
  return;
}

