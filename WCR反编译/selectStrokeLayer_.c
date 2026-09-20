// selectStrokeLayer: @ 0165cdf8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::selectStrokeLayer_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 != local_28;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectedStrokeLayer__026b22c8,local_28);
  if (local_28 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,0);
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,0x3feb333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78
               ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShadowColor__026caa38,puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(0x3f733333,local_28,PTR_s_setShadowOpacity__026caa48);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4010000000000000,local_28,PTR_s_setShadowRadius__026caa58);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,local_28,PTR_s_setShadowOffset__026caa40);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

