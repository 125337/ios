// updateCropBorderPath @ 01649148

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::updateCropBorderPath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  double dVar5;
  double in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined8 uVar8;
  uint local_184;
  undefined1 auStack_b8 [48];
  ID local_88;
  byte local_79;
  ID local_78;
  double local_70;
  double dStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropView_026b1b98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar1 = local_28;
  local_50 = in_d0;
  dStack_48 = in_d1;
  local_40 = in_d2;
  uStack_38 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropBorderLayer_026b1ba8);
  _objc_retainAutoreleasedReturnValue();
  dStack_68 = dStack_48;
  local_70 = local_50;
  uStack_58 = uStack_38;
  local_60 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropShape_026b1ea0);
  local_79 = 0;
  local_184 = 0;
  dVar4 = local_50;
  dVar5 = dStack_48;
  uVar7 = local_40;
  uVar8 = uStack_38;
  if (IVar1 == 2) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPath_026b1ee8);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_184 = 0;
    dVar4 = local_50;
    dVar5 = dStack_48;
    uVar7 = local_40;
    uVar8 = uStack_38;
    local_78 = IVar1;
    if (IVar1 != 0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformClosed_026b1ef0);
      local_184 = (uint)IVar1;
      dVar4 = local_50;
      dVar5 = dStack_48;
      uVar7 = local_40;
      uVar8 = uStack_38;
    }
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_184 & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropShape_026b1ea0);
    IVar1 = local_28;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    if (IVar2 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropView_026b1b98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar5,uVar7,uVar8,puVar3,PTR_s_bezierPathWithOvalInRect__026ca528);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGPath_026ca478);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropBorderLayer_026b1ba8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropView_026b1b98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar5,IVar1,PTR_s_effectiveCropCornerRadiusForRect_026b1f18);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      uVar6 = 0x3fe0000000000000;
      if (dVar4 <= 0.5) {
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropView_026b1b98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar4,uVar6,uVar7,uVar8,puVar3,PTR_s_bezierPathWithRect__026a03f8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGPath_026ca478);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropBorderLayer_026b1ba8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      else {
        IVar1 = local_28;
        dVar5 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropView_026b1b98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,uVar6,uVar7,uVar8,dVar4,puVar3,
                   PTR_s_bezierPathWithRoundedRect_corner_026ca530);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGPath_026ca478);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropBorderLayer_026b1ba8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
    }
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPath_026b1ee8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropRect_026b1ec0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropRect_026b1ec0);
    _CGAffineTransformMakeTranslation(-dVar4,-dVar5);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_applyTransform__026b1f20,auStack_b8);
    IVar1 = local_88;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_CGPath_026ca478);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropBorderLayer_026b1ba8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_88,0);
  }
  return;
}

