// FUN_0044d618 @ 0044d618

void FUN_0044d618(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_1f8;
  double local_188;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  undefined4 local_54;
  ulong local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (uVar2 = local_28, FUN_0045f078(), (uVar2 & 1) == 0)) {
    (*DAT_028caac8)(local_28,local_30,local_38);
    local_54 = 0;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_50[0];
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isHidden_026ca768), (uVar2 & 1) != 0)
       ) {
      uVar2 = local_28;
      FUN_0045fe90();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_relativePathResolvingWrap__026a3d80,
                 uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_Rh_);
        local_54 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_023241c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTitle_forState__026caab8,&cf_nxRd,0)
        ;
        puVar1 = local_70;
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fee666666666666,DAT_02323c78,DAT_02323f80,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        dVar11 = 10.0;
        uVar5 = 0x4024000000000000;
        dVar12 = 22.0;
        dVar9 = 22.0;
        FUN_00460194();
        local_b0 = uVar5;
        dStack_a8 = dVar9;
        local_a0 = dVar11;
        dStack_98 = dVar12;
        local_90 = uVar5;
        dStack_88 = dVar9;
        local_80 = dVar11;
        dStack_78 = dVar12;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,local_70,PTR_s_setContentEdgeInsets__0269ebd0);
        puVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
                   PTR_s_WCRLE_confirmPreviewDelete__026a3c48,0x40);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_sizeToFit_0269ec08);
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = 0;
        uVar3 = local_28;
        local_b8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_deleteButton_026a0f28);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_c0;
        local_c0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_c0;
        dStack_e8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
        local_f0 = *(double *)PTR__CGRectZero_025782f0;
        dStack_d8 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
        local_e0 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        dVar6 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar3 = local_c0;
        dVar7 = dVar6;
        dVar8 = dVar9;
        dVar10 = dVar12;
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
          dVar7 = dVar11;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8,local_b8);
          dVar8 = dVar7;
          dVar11 = dVar9;
          dVar10 = dVar6;
          local_f0 = dVar6;
          dStack_e8 = dVar9;
          local_e0 = dVar7;
          dStack_d8 = dVar12;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
        _CGRectGetWidth();
        dVar6 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
        _CGRectGetHeight(dVar6,dVar8,dVar11,dVar10);
        dVar8 = local_f0;
        dVar11 = dStack_d8;
        _CGRectGetMidX(local_f0,dStack_e8,local_e0);
        local_188 = dVar8 - dVar7 * 0.5;
        if (local_188 < 12.0) {
          local_188 = 12.0;
        }
        dVar12 = local_188 + dVar7;
        dVar10 = dVar12;
        dVar9 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
        _CGRectGetWidth(dVar10,dVar9,dVar8);
        uVar5 = 0x4028000000000000;
        dVar10 = dVar10 - 12.0;
        if (dVar10 < dVar12) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
          _CGRectGetWidth(dVar12,dVar10,uVar5,dVar11);
          local_188 = (dVar12 - 12.0) - dVar7;
        }
        dVar8 = local_e0;
        _CGRectGetMaxY(local_f0,dStack_e8);
        local_1f8 = local_f0 + 10.0;
        uVar5 = 0x3ff0000000000000;
        if (local_e0 < 1.0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
          _CGRectGetWidth(local_e0,uVar5);
          uVar5 = 0x3fe0000000000000;
          local_188 = (local_e0 - dVar7) * 0.5;
          local_1f8 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
          _CGRectGetHeight(local_1f8,uVar5,dVar8,dStack_d8);
          local_1f8 = local_1f8 * DAT_02323d60;
        }
        FUN_004593d4();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,local_1f8,dVar7,dVar6,local_70,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSubview__026ca4c0,local_70);
        local_54 = 1;
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRLE_confirmPreviewDelete__026a3c48,local_50[0]);
      local_54 = 1;
    }
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

