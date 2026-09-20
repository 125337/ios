// FUN_00210ab4 @ 00210ab4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00210ab4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint local_32c;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_298;
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [48];
  double local_230;
  double local_228;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double local_1e8;
  double local_1c0;
  double dStack_1b8;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  long local_f0;
  char local_e1;
  long local_e0;
  byte local_d1;
  double local_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_70;
  double local_68;
  byte local_5d;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  long local_38;
  double local_30;
  double dStack_28;
  
  local_38 = 0;
  local_30 = param_1;
  dStack_28 = param_2;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  if ((local_38 == 0) || (local_40 == 0)) {
    local_4c = 1;
  }
  else {
    FUN_0021310c(local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgBannerWidth_026a0698);
    local_5d = false;
    if (0.0 < param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgBannerHeight_026a06a0);
      local_5d = 0.0 < param_1;
    }
    local_68 = 0.0;
    local_70 = 0.0;
    if (((((bool)local_5d == false) &&
         (uVar3 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_msgBannerBgUseImageBackground_026a06a8), (uVar3 & 1) != 0)) &&
        (param_2 = 1.0, 1.0 < local_30)) && (param_2 = 1.0, 1.0 < dStack_28)) {
      dVar8 = local_30;
      dVar9 = dStack_28;
      FUN_0021350c(local_38);
      if ((1.0 < dVar8) && (1.0 < dVar9)) {
        local_70 = dVar9;
        local_68 = dVar8;
      }
      param_2 = 1.0;
    }
    dVar8 = local_68;
    if ((local_68 <= 0.0) ||
       (dVar9 = local_70, dVar8 = local_70, dVar7 = param_2, dVar11 = param_3, dVar12 = param_4,
       local_70 <= 0.0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      dVar9 = param_3;
      dVar7 = 1.0;
      dVar11 = param_2;
      dVar12 = dVar8;
      local_c0 = dVar8;
      local_b8 = param_2;
      local_b0 = param_3;
      dStack_a8 = param_4;
      if ((1.0 < param_3) && (dVar9 = param_4, dVar7 = 1.0, 1.0 < param_4)) {
        FUN_00213b6c();
        dVar9 = param_3;
        dVar7 = param_4;
        dVar11 = param_2;
        dVar12 = dVar8;
      }
    }
    local_32c = 1;
    if (DAT_028c9190 < 1) {
      lVar4 = local_38;
      FUN_00207570(DAT_028c9190);
      local_32c = (uint)lVar4;
    }
    local_d1 = (byte)local_32c & 1;
    local_e1 = '\0';
    bVar1 = false;
    if (((((local_32c & 1) == 0) && (bVar1 = false, (local_5d & 1) == 0)) &&
        (bVar1 = false, dVar9 = local_68, 0.0 < local_68)) &&
       (bVar1 = false, dVar9 = local_70, 0.0 < local_70)) {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = '\x01';
      bVar1 = lVar4 != 0;
      local_e0 = lVar4;
    }
    if (local_e1 != '\0') {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if (bVar1) {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_center_026ca560);
      local_100 = dVar9;
      local_f8 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      dVar8 = local_68;
      dVar10 = local_70;
      local_120 = dVar7;
      dStack_118 = dVar9;
      local_110 = dVar11;
      dStack_108 = dVar12;
      FUN_001ebe58();
      dStack_148 = dStack_118;
      local_150 = local_120;
      lVar4 = local_38;
      local_140 = dVar8;
      dStack_138 = dVar10;
      local_130 = dVar8;
      dStack_128 = dVar10;
      local_110 = dVar8;
      dStack_108 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      uVar2 = (uint)lVar4;
      local_170 = dVar8;
      local_168 = dVar10;
      local_160 = dVar9;
      local_158 = dVar7;
      FUN_00207ae0();
      dVar8 = local_150;
      dVar9 = dStack_148;
      dVar7 = local_140;
      dVar11 = dStack_138;
      if ((uVar2 & 1) == 0) {
        dStack_188 = dStack_118;
        local_190 = local_120;
        dStack_178 = dStack_108;
        local_180 = local_110;
        dVar8 = local_120;
        dVar9 = dStack_118;
        dVar7 = local_110;
        dVar11 = dStack_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
      _CGRectGetMidX(dVar8,dVar9,dVar7,dVar11);
      dVar7 = local_f8;
      FUN_001e6228();
      local_1c0 = dVar8;
      dStack_1b8 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_center_026ca560);
      dVar8 = ABS(dVar8 - local_1c0);
      dVar11 = 0.5;
      bVar1 = true;
      dVar9 = dVar8;
      local_1e8 = dVar7;
      if (dVar8 <= 0.5) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_center_026ca560);
        dVar9 = ABS(dVar11 - dStack_1b8);
        bVar1 = 0.5 < dVar9;
        local_200 = dVar8;
        local_1f8 = dVar11;
      }
      if (bVar1) {
        dStack_208 = dStack_1b8;
        local_210 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,dStack_1b8,local_38,PTR_s_setCenter__026ca8c0);
        dVar9 = local_1c0;
      }
      _objc_storeStrong(&local_f0,0);
    }
    if ((local_d1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgBannerWholeOffsetX_026a0770);
      local_228 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgBannerWholeOffsetY_026a0778);
      local_230 = dVar9;
      _CGAffineTransformMakeTranslation(local_228,-dVar9);
      lVar4 = local_38;
      _memcpy(auStack_290,auStack_260,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_setTransform__026caad0,auStack_290);
    }
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgBannerMaxTextLength_026a0780);
    uVar3 = local_48;
    local_298 = uVar5;
    if (0 < (long)uVar5) {
      puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
      uVar5 = local_48;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_2a0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        if (local_298 < uVar5) {
          uVar3 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a8,PTR_s_substringToIndex__0269d6c0,local_298);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_40;
          local_2b0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_msgBannerMaxTextOverflowSuffix_026a0788);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2b8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
          if (((uVar5 & 1) == 0) ||
             (uVar3 = local_2b8,
             (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0), uVar3 == 0)) {
            _objc_storeStrong(&local_2b8,&cf____);
          }
          uVar3 = local_2b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2b0,PTR_s_stringByAppendingString__0269d398,local_2b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_setText__026caa88);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          _objc_storeStrong(&local_2b8);
          _objc_storeStrong(&local_2b0,0);
        }
        _objc_storeStrong(&local_2a8);
        _objc_storeStrong(&local_2a0,0);
      }
    }
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

