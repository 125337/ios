// applyStrokeColorToActiveAnnotation @ 01650b78

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyStrokeColorToActiveAnnotation(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  ID local_a0;
  ID local_70;
  ID local_68;
  undefined1 local_59;
  ID local_58;
  byte local_49;
  ID local_48;
  ID local_40;
  uint local_34;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAnnotateStrokeColor_026b20d0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar3 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_0164fd1c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_30 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextColor__026caa98,local_28);
      IVar3 = local_18;
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_resyncTextAnnotationSnapshot__026b20e8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    local_34 = 1;
    _objc_storeStrong(&local_30,0);
    goto LAB_016510c8;
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentStrokeLayer_026b2078);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_a0 = IVar3;
  if (IVar3 == 0) {
    local_a0 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  local_49 = IVar3 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((local_40 == 0) &&
     (IVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28), IVar3 != 9))
  {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokeLayers_026b2088);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_40;
    local_40 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_annotateStrokeLayerSupportsStyle_026b20f0,local_40);
  IVar3 = local_28;
  if ((IVar4 & 1) == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28);
    uVar6 = IVar3 - 9;
    if (uVar6 == 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastTextAnnotationOverlay_026b20b0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar3;
      if (IVar3 == 0) {
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,IVar3);
        IVar3 = local_68;
        FUN_0164fd1c();
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar3;
        if (IVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setTextColor__026caa98,local_28);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_resyncTextAnnotationSnapshot__026b20e8,local_68);
        }
        _objc_storeStrong(&local_70,0);
        local_34 = 0;
      }
      _objc_storeStrong(&local_68,0);
      uVar6 = (ulong)local_34;
      if (local_34 != 0) goto LAB_016510b8;
    }
    local_34 = 0;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setStrokeColor__026caa78,IVar3);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_40;
    local_59 = 0;
    bVar2 = false;
    uVar1 = IVar4 == 0;
    if ((bool)uVar1) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentStrokeLayer_026b2078);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar3 != IVar5;
      local_59 = uVar1;
      local_58 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar1 = local_59;
    }
    local_59 = uVar1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectStrokeLayer__026b20c0,local_40);
    }
    uVar6 = 1;
    local_34 = 1;
  }
LAB_016510b8:
  _objc_storeStrong(uVar6,&local_40,0);
LAB_016510c8:
  _objc_storeStrong(&local_28,0);
  return;
}

