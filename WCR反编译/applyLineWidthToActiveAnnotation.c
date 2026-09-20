// applyLineWidthToActiveAnnotation @ 0165046c

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyLineWidthToActiveAnnotation(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ulong uVar7;
  double dVar8;
  double local_148;
  ID local_108;
  double local_c0;
  ID local_88;
  ID local_80;
  uint local_78;
  undefined1 local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  ID local_58;
  double local_50;
  double local_48;
  double local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedTextOverlay_026b20a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_0164fd1c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    if (local_38 != 0) {
      dVar8 = 14.0;
      local_40 = 14.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAnnotateLineWidth_026b20d8);
      local_48 = dVar8 * 4.0;
      local_c0 = local_48;
      if (local_48 <= local_40) {
        local_c0 = local_40;
      }
      local_50 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,puVar6,
                 PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar4 = local_28;
      IVar3 = local_38;
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTextOverlay_026b20a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_layoutTextAnnotationLabel_inCard_026b20e0,IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar3 = local_28;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTextOverlay_026b20a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_resyncTextAnnotationSnapshot__026b20e8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    _objc_storeStrong(&local_38,0);
    return;
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentStrokeLayer_026b2078);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_108 = IVar3;
  if (IVar3 == 0) {
    local_108 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_108;
  }
  local_61 = IVar3 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_108;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((local_58 == 0) &&
     (IVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_annotateShapeTool_026b1e28), IVar3 != 9))
  {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_strokeLayers_026b2088);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_58;
    local_58 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_annotateStrokeLayerSupportsStyle_026b20f0,local_58);
  if ((IVar3 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_annotateShapeTool_026b1e28);
    uVar7 = IVar3 - 9;
    if (uVar7 == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastTextAnnotationOverlay_026b20b0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = IVar3;
      if (IVar3 == 0) {
        local_78 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectTextOverlay__026b20f8,IVar3);
        IVar3 = local_80;
        FUN_0164fd1c();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        local_88 = IVar3;
        if (IVar3 != 0) {
          local_148 = 14.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAnnotateLineWidth_026b20d8);
          local_148 = local_148 * 4.0;
          if (local_148 <= 14.0) {
            local_148 = 14.0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,puVar6,
                     PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setFont__026ca958);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_layoutTextAnnotationLabel_inCard_026b20e0,local_88,local_80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_resyncTextAnnotationSnapshot__026b20e8,local_80);
        }
        _objc_storeStrong(&local_88,0);
        local_78 = 0;
      }
      _objc_storeStrong(&local_80,0);
      uVar7 = (ulong)local_78;
      if (local_78 != 0) goto LAB_01650b5c;
    }
    local_78 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAnnotateLineWidth_026b20d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLineWidth__026ca9b0);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_58;
    local_71 = 0;
    bVar2 = false;
    uVar1 = IVar4 == 0;
    if ((bool)uVar1) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentStrokeLayer_026b2078);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar3 != IVar5;
      local_71 = uVar1;
      local_70 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar1 = local_71;
    }
    local_71 = uVar1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectStrokeLayer__026b20c0,local_58);
    }
    uVar7 = 1;
    local_78 = 1;
  }
LAB_01650b5c:
  _objc_storeStrong(uVar7,&local_58,0);
  return;
}

