// pathForAnnotateTool:from:to: @ 016542bc

/* Function Stack Size: 0x38 bytes */

ID WCRSuperFloatCropViewController::pathForAnnotateTool_from_to_
             (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  undefined *puVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_d1;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d2;
  double dVar9;
  double in_d3;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b0;
  double local_3a0;
  double local_368;
  double local_360;
  double local_2b8;
  double local_2b0;
  long local_1d8;
  undefined *local_b8;
  long_long local_b0;
  SEL local_a8;
  ID local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined *local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  dVar5 = DAT_023397b8;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_b0 = param_3;
  local_a8 = param_2;
  local_a0 = param_1;
  local_98 = in_d2;
  local_90 = in_d3;
  local_88 = in_d0;
  local_80 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8,param_3,
             param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,param_5.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = local_98 - local_88;
  local_3c0 = local_90 - local_80;
  dVar2 = local_88;
  dVar6 = local_80;
  local_b8 = puVar1;
  FUN_0163f5dc();
  _CGRectStandardize();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  if (local_b0 == 1) {
    dVar6 = local_90 - local_80;
    local_60 = local_98 - local_88;
    local_58 = dVar6;
    _atan2(0,dVar6,local_60);
    local_2b0 = local_98 - local_88;
    local_70 = local_90 - local_80;
    local_68 = local_2b0;
    _hypot(local_2b0,local_70);
    dVar2 = local_98;
    if (local_2b0 <= 1.0) {
      local_2b0 = 1.0;
    }
    local_2b8 = local_2b0 * DAT_02323ec8;
    if (local_2b8 <= 14.0) {
      local_2b8 = 14.0;
    }
    dVar9 = dVar6 - dVar5;
    local_40 = dVar9;
    _cos();
    dVar7 = local_90;
    dVar2 = dVar2 - dVar9 * local_2b8;
    dVar9 = dVar6 - dVar5;
    local_28 = dVar9;
    _sin();
    dVar7 = dVar7 - dVar9 * local_2b8;
    FUN_0164494c();
    dVar9 = local_98;
    dVar3 = dVar6 + dVar5;
    local_48 = dVar3;
    _cos();
    dVar8 = local_90;
    dVar9 = dVar9 - dVar3 * local_2b8;
    dVar6 = dVar6 + dVar5;
    local_30 = dVar6;
    _sin();
    dVar8 = dVar8 - dVar6 * local_2b8;
    FUN_0164494c();
    (*(code *)PTR__objc_msgSend_02578628)(local_88,local_80,local_b8,PTR_s_moveToPoint__026a01b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,local_90,local_b8,PTR_s_addLineToPoint__026a01b8)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(dVar2,dVar7,local_b8,PTR_s_moveToPoint__026a01b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,local_90,local_b8,PTR_s_addLineToPoint__026a01b8)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar8,local_b8,PTR_s_addLineToPoint__026a01b8);
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
  }
  else if (local_b0 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,local_80,local_b8,PTR_s_moveToPoint__026a01b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,local_90,local_b8,PTR_s_addLineToPoint__026a01b8)
    ;
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
  }
  else if (local_b0 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar2,dVar6,dVar9,local_3c0,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRect__026a03f8);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
  }
  else if (local_b0 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar2,dVar6,dVar9,local_3c0,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithOvalInRect__026ca528);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
  }
  else if (local_b0 == 5) {
    dVar5 = dVar2;
    _CGRectGetMidX(0,dVar2,dVar6,dVar9,local_3c0);
    dVar7 = dVar2;
    _CGRectGetMinY(dVar2,dVar6,dVar9,local_3c0);
    FUN_0164494c();
    dVar8 = dVar2;
    _CGRectGetMinX(dVar2,dVar6,dVar9,local_3c0);
    dVar3 = dVar2;
    _CGRectGetMaxY(dVar2,dVar6,dVar9,local_3c0);
    FUN_0164494c();
    dVar4 = dVar2;
    _CGRectGetMaxX(dVar2,dVar6,dVar9,local_3c0);
    _CGRectGetMaxY(dVar2,dVar6,dVar9,local_3c0);
    FUN_0164494c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar7,local_b8,PTR_s_moveToPoint__026a01b0);
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar2,local_b8,PTR_s_addLineToPoint__026a01b8);
    (*(code *)PTR__objc_msgSend_02578628)(dVar8,dVar3,local_b8,PTR_s_addLineToPoint__026a01b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_closePath_026a66f8);
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
  }
  else if (local_b0 == 6) {
    dVar5 = dVar2;
    _CGRectGetMidX(0,dVar2,dVar6,dVar9,local_3c0);
    _CGRectGetMidY(dVar2,dVar6,dVar9,local_3c0);
    FUN_0164494c();
    local_360 = local_3c0;
    if (dVar9 < local_3c0) {
      local_360 = dVar9;
    }
    dVar6 = local_360 * 0.5 * DAT_02323e80;
    for (local_1d8 = 0; local_1d8 < 10; local_1d8 = local_1d8 + 1) {
      dVar9 = DAT_02323e28 + ((double)local_1d8 * DAT_02323cb0) / 5.0;
      local_368 = dVar6;
      if (local_1d8 % 2 == 0) {
        local_368 = local_360 * 0.5;
      }
      dVar7 = dVar9;
      local_50 = dVar9;
      _cos();
      dVar7 = dVar5 + dVar7 * local_368;
      local_38 = dVar9;
      _sin();
      dVar9 = dVar2 + dVar9 * local_368;
      FUN_0164494c();
      if (local_1d8 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(dVar7,dVar9,local_b8,PTR_s_moveToPoint__026a01b0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(dVar7,dVar9,local_b8,PTR_s_addLineToPoint__026a01b8);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_closePath_026a66f8);
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
  }
  else if (local_b0 == 7) {
    local_3a0 = local_3c0;
    if (dVar9 < local_3c0) {
      local_3a0 = dVar9;
    }
    local_3b0 = local_3a0 * DAT_02323c70;
    if (local_3b0 <= 6.0) {
      local_3b0 = 6.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar2,dVar6,dVar9,local_3c0,local_3b0,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
  }
  else if (local_b0 == 8) {
    dVar5 = dVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_annotateHighlightCornerRadius_026b2150);
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar2,dVar6,dVar9,local_3c0,dVar5,puVar1,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
  }
  else if (local_b0 == 10) {
    if (dVar9 < local_3c0) {
      local_3c0 = dVar9;
    }
    if (local_3c0 <= 36.0) {
      local_3c8 = local_3c0;
    }
    else {
      local_3c8 = 36.0;
    }
    if (local_3c8 <= 18.0) {
      local_3d0 = 18.0;
    }
    else {
      local_3d0 = local_3c8;
    }
    dVar2 = local_98 - local_3d0 * 0.5;
    dVar6 = local_90 - local_3d0 * 0.5;
    dVar5 = local_3d0;
    FUN_0163f5dc();
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar2,dVar6,local_3d0,dVar5,PTR__OBJC_CLASS___UIBezierPath_026ce268,
               PTR_s_bezierPathWithOvalInRect__026ca528);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
  }
  else {
    local_78 = (undefined *)0x0;
  }
  _objc_storeStrong(&local_b8,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_78;
}

