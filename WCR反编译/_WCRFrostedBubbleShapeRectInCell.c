// _WCRFrostedBubbleShapeRectInCell @ 00f861a4

double _WCRFrostedBubbleShapeRectInCell
                 (double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_16c;
  ulong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  undefined1 local_61;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar4 = local_48;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    local_40 = *(double *)PTR__CGRectZero_025782f0;
    dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    local_4c = 1;
    goto LAB_00f8681c;
  }
  uVar4 = local_48;
  _objc_getAssociatedObject(local_48,&DAT_028e2e79);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_58 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_61 = 0;
  bVar2 = true;
  uVar1 = (uVar4 & 1) != 0;
  if ((bool)uVar1) {
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar4 == 0;
    local_61 = uVar1;
    local_60 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_61;
  }
  local_61 = uVar1;
  if (bVar2) {
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,0x24f721);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_58;
    local_58 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = local_48;
      FUN_00f833a4();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      local_58 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      _objc_storeStrong(&local_70,0);
    }
  }
  uVar4 = local_58;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_79 = 0;
  local_16c = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_16c = 0;
    local_78 = uVar4;
    if (uVar4 != 0) {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isHidden_026ca768);
      local_16c = 0;
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_alpha_026ca4d8);
        local_16c = 0;
        param_2 = DAT_02323d38;
        if (DAT_02323d38 <= param_1) {
          uVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
          local_16c = (uint)uVar4;
          local_a0 = param_1;
          local_98 = param_2;
          local_90 = param_3;
          local_88 = param_4;
          _CGRectIsEmpty();
          local_16c = local_16c ^ 1;
        }
      }
    }
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  uVar4 = local_58;
  if ((local_16c & 1) == 0) {
LAB_00f866b4:
    uVar4 = local_48;
    FUN_00f833a4();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar4;
    if (uVar4 == 0) {
LAB_00f8675c:
      dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
      local_40 = *(double *)PTR__CGRectZero_025782f0;
      dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_bounds_026ca548);
      _CGRectIsEmpty();
      if ((uVar4 & 1) != 0) goto LAB_00f8675c;
      uVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
      _CGRectIsNull();
      uVar4 = local_c8;
      if ((uVar5 & 1) != 0) goto LAB_00f8675c;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_convertRect_toView__0269ded8,local_48);
      local_40 = param_1;
      dStack_38 = param_2;
      local_30 = param_3;
      dStack_28 = param_4;
    }
    local_4c = 1;
    _objc_storeStrong(&local_c8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    local_c0 = param_1;
    local_b8 = param_2;
    local_b0 = param_3;
    local_a8 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_convertRect_toView__0269ded8,local_48);
    local_40 = param_1;
    dStack_38 = param_2;
    local_30 = param_3;
    dStack_28 = param_4;
    _CGRectIsEmpty();
    if (((((uVar4 & 1) != 0) ||
         (param_1 = local_40, param_2 = dStack_38, param_3 = local_30, param_4 = dStack_28,
         _CGRectIsNull(), (uVar4 & 1) != 0)) || (param_2 = 1.0, param_1 = local_30, local_30 <= 1.0)
        ) || (param_2 = 1.0, param_1 = dStack_28, dStack_28 <= 1.0)) goto LAB_00f866b4;
    local_4c = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_00f8681c:
  _objc_storeStrong(&local_48,0);
  return local_40;
}

