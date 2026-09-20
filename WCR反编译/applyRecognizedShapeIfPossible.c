// applyRecognizedShapeIfPossible @ 016559fc

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyRecognizedShapeIfPossible(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_44;
  ID local_40;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentStrokeLayer_026b2078);
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  bVar1 = true;
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokePoints_026b2160);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar2 < 10;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_18;
  if (!bVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokePoints_026b2160);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_recognizeShapeKindFromPoints__026b2168);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_40 = local_18;
    if (0 < (long)IVar2) {
      IVar3 = local_18;
      local_38 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokePoints_026b2160);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_regularPathForShapeKind_points__026b2170,IVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (local_40 == 0) {
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDrawPath__026b2178,local_40);
        IVar2 = local_40;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_CGPath_026ca478);
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentStrokeLayer_026b2078);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((((local_38 == 3) || (local_38 == 4)) || (local_38 == 5)) ||
           ((local_38 == 6 || (local_38 == 7)))) {
          puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
          IVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentStrokeLayer_026b2078);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_50 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_impactOccurred_026ca6a0);
        _objc_storeStrong(&local_50,0);
        local_44 = 0;
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  return;
}

