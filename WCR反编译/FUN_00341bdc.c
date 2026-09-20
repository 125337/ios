// FUN_00341bdc @ 00341bdc

void FUN_00341bdc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double local_650;
  byte local_554;
  undefined *local_4b0;
  undefined *local_490;
  double local_390;
  double local_2e0;
  double local_2d8;
  double local_260;
  undefined *local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  byte local_131;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  byte local_d9;
  undefined *local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  byte local_49;
  double local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  puVar2 = local_28;
  FUN_003431b0();
  if (((ulong)puVar2 & 1) == 0) {
    local_40 = 1;
    goto LAB_003430ac;
  }
  _CFAbsoluteTimeGetCurrent();
  uVar7 = 0x3ff0000000000000;
  local_49 = 1.0 < param_1 - DAT_028c9fe8;
  dVar6 = param_1 - DAT_028c9fe8;
  if ((bool)local_49) {
    dVar6 = param_1;
    DAT_028c9fe8 = param_1;
  }
  puVar2 = local_28;
  local_48 = param_1;
  FUN_00343268(local_28,"m_originImageCheck");
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = local_28;
    FUN_00343268(local_28,"_originImageCheck");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_58;
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_28;
  FUN_00343268(local_28,"m_userActionCheck");
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = local_28;
    FUN_00343268(local_28,"_userActionCheck");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_60;
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_28;
  FUN_00343268(local_28,"_templateComposingButton");
  _objc_retainAutoreleasedReturnValue();
  local_70 = (undefined *)0x0;
  puVar3 = local_28;
  local_68 = puVar2;
  FUN_0033d258(local_28,&cf_bottomBar);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_78 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = local_28;
    FUN_00343268(local_28,"_bottomBar");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_78;
    local_78 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_78;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = local_28;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_70;
      local_70 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    _objc_storeStrong(&local_70,local_78);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar2;
  if (local_70 != (undefined *)0x0) {
    FUN_00343434(local_70,puVar2,0);
  }
  local_91 = 0;
  bVar1 = local_58 == (undefined *)0x0;
  if (bVar1) {
    local_490 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_origin);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_490;
  }
  else {
    local_490 = local_58;
  }
  local_91 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_490;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  local_a9 = 0;
  bVar1 = local_60 == (undefined *)0x0;
  if (bVar1) {
    local_4b0 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_makeVideo);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_4b0;
  }
  else {
    local_4b0 = local_60;
  }
  local_a9 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_4b0;
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  puVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_finish)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_80;
  local_b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  if (((local_49 & 1) != 0) && (local_70 != (undefined *)0x0)) {
    FUN_00343d34(local_70,0,4);
  }
  local_c9 = 0;
  bVar1 = true;
  if (local_88 != (undefined *)0x0) {
    puVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isHidden_026ca768);
    bVar1 = true;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      bVar1 = puVar2 == (undefined *)0x0;
      local_c8 = puVar2;
    }
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if (bVar1) {
    local_40 = 1;
  }
  else {
    local_d9 = 0;
    bVar1 = true;
    if (local_a0 != (undefined *)0x0) {
      puVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isHidden_026ca768);
      bVar1 = true;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 1;
        bVar1 = puVar2 == (undefined *)0x0;
        local_d8 = puVar2;
      }
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if (bVar1) {
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_center_026ca560);
      dVar5 = dVar6;
      dVar11 = dVar6;
      local_f8 = dVar6;
      local_f0 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_center_026ca560);
      dVar4 = ABS(dVar6 - dVar5);
      local_108 = dVar5;
      local_100 = dVar11;
      local_e8 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_center_026ca560);
      dVar6 = dVar5;
      local_120 = dVar4;
      local_118 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_center_026ca560);
      dVar5 = ABS(dVar5 - dVar4);
      dVar8 = 56.0;
      dVar11 = local_e8;
      local_130 = dVar6;
      local_128 = dVar4;
      local_110 = dVar5;
      if (56.0 <= local_e8) {
LAB_003425e4:
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_frame_026ca640);
        puVar2 = local_a0;
        dVar10 = dVar8;
        local_158 = dVar11;
        local_150 = dVar8;
        local_148 = dVar6;
        local_140 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_frame_026ca640);
        local_554 = (byte)puVar2;
        dVar5 = local_158;
        dVar8 = local_150;
        dVar4 = local_148;
        uVar7 = local_140;
        local_178 = param_4;
        local_170 = dVar6;
        local_168 = dVar10;
        local_160 = dVar11;
        _CGRectIntersectsRect();
      }
      else {
        dVar8 = 40.0;
        local_554 = 1;
        dVar11 = dVar5;
        dVar4 = dVar6;
        uVar7 = param_4;
        if (40.0 <= dVar5) goto LAB_003425e4;
      }
      local_131 = local_554 & 1;
      puVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_180 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_40 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_center_026ca560);
        local_260 = dVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_frame_026ca640);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_frame_026ca640);
        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_bounds_026ca548);
        _CGRectGetWidth(local_260,dVar5);
        uVar9 = 0x3ff0000000000000;
        if (1.0 <= local_260) {
          local_650 = 14.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
          _CGRectGetWidth(local_650,uVar9);
          if (local_650 < 55.0) {
            local_650 = 55.0;
          }
          dVar6 = local_650;
          FUN_00344114(local_a0);
          uVar9 = 0x4030000000000000;
          local_260 = local_260 - 16.0;
          bVar1 = false;
          dVar5 = local_260;
          if (local_b8 != (undefined *)0x0) {
            puVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = puVar2 != (undefined *)0x0;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if (bVar1) {
            puVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_frame_026ca640);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_convertRect_toView__0269ded8,local_180);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _CGRectGetMinX(dVar5,uVar9,dVar4);
            local_260 = dVar5;
          }
          dVar11 = local_260 - 20.0;
          uVar9 = 0x3fe0000000000000;
          local_2d8 = dVar11 - local_650 * 0.5;
          dVar5 = 16.0;
          local_2e0 = 16.0;
          bVar1 = false;
          if (local_c0 != (undefined *)0x0) {
            puVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = puVar2 != (undefined *)0x0;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if (bVar1) {
            puVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_frame_026ca640);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_convertRect_toView__0269ded8,local_180);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _CGRectGetMaxX(dVar5,uVar9,dVar11,uVar7);
            local_2e0 = dVar5;
          }
          dVar5 = local_2e0 + 14.0 + dVar6 + 14.0 + local_650 * 0.5;
          if (local_2d8 < dVar5) {
            local_2d8 = dVar5;
          }
          dVar5 = (local_260 - 20.0) - local_650 * 0.5;
          if (dVar5 < local_2d8) {
            local_2d8 = dVar5;
          }
          dVar5 = local_2d8;
          FUN_00344750();
          (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar8,local_88,PTR_s_setCenter__026ca8c0);
          local_2d8 = local_2d8 - local_650 * 0.5;
          local_390 = (local_2d8 - 14.0) - dVar6 * 0.5;
          dVar5 = local_2e0 + 14.0 + dVar6 * 0.5;
          if (local_390 < dVar5) {
            local_390 = dVar5;
          }
          dVar6 = (local_2d8 - 14.0) - dVar6 * 0.5;
          if (dVar6 < local_390) {
            local_390 = dVar6;
          }
          puVar2 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_center_026ca560);
            FUN_00344750();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_390,dVar6,local_a0,PTR_s_setCenter__026ca8c0);
            FUN_0034477c(local_180,local_a0);
          }
          local_40 = 0;
        }
        else {
          local_40 = 1;
        }
      }
      _objc_storeStrong(&local_180,0);
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
LAB_003430ac:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

