// onAnnotateSizeChanged: @ 01667020

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onAnnotateSizeChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  float in_s0;
  double dVar5;
  double dVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  uint local_68;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28);
  if (IVar1 == 8) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    dVar5 = (double)in_s0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateHighlightCornerRadius_026b1c20);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeAnnotateStrokeLayer_026b23f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_path_0269d4d8);
    local_68 = 0;
    if (IVar1 != 0) {
      IVar1 = local_30;
      _objc_getAssociatedObject(local_30,DAT_028c6008);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = (uint)IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    if ((local_68 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_path_0269d4d8);
      _CGPathGetBoundingBox();
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      dVar6 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateHighlightCornerRadius_026b2150);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,in_d1,in_d2,in_d3,dVar6,puVar3,
                 PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPath__026caa08,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildSpotlightLayer_026b1e70);
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    (*(code *)PTR__objc_msgSend_02578628)
              ((double)in_s0,local_18,PTR_s_setAnnotateLineWidth__026b1c18);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyLineWidthToActiveAnnotation_026b2400);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

