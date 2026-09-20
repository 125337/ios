// FUN_001316c4 @ 001316c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001316c4(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6,byte param_7)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  ulong *local_5e8;
  ulong *local_5e0;
  ulong *local_5d8;
  ulong local_1f8 [9];
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  byte local_169;
  double local_168;
  double local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  byte local_99;
  undefined1 *local_98;
  int local_8c;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  byte local_6a;
  byte local_69;
  undefined1 *local_68;
  undefined1 *local_50;
  double local_48;
  double local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  dVar8 = 0.0;
  local_40 = 0.0;
  local_48 = 0.0;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_31 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_chatTimePlacement_0269f080);
  local_69 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  local_6a = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  uVar5 = local_28;
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_contentView);
  _objc_retainAutoreleasedReturnValue();
  local_80 = 0;
  local_78 = uVar5;
  if ((local_6a & 1) == 0) {
    uVar5 = local_28;
    FUN_00132f98();
    uVar2 = (uint)uVar5;
    local_169 = (byte)uVar5;
    _WCRFrostedBubbleEnabled();
    if ((uVar2 & 1) == 0) {
      dStack_188 = *(double *)(PTR__CGRectZero_025782f0 + 8);
      local_190 = *(double *)PTR__CGRectZero_025782f0;
      dStack_178 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      local_180 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    }
    else {
      uVar5 = local_28;
      _WCRFrostedBubbleShapeRectInCell();
      uVar2 = (uint)uVar5;
      local_190 = dVar8;
      dStack_188 = param_2;
      local_180 = param_3;
      dStack_178 = param_4;
    }
    dStack_1a8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    local_1b0 = *(double *)PTR__CGRectZero_025782f0;
    dStack_198 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_1a0 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    dVar8 = local_190;
    dVar9 = dStack_188;
    dVar10 = local_180;
    dVar11 = dStack_178;
    _CGRectIsEmpty();
    if (((uVar2 & 1) == 0) &&
       (dVar8 = local_190, dVar9 = dStack_188, dVar10 = local_180, dVar11 = dStack_178,
       _CGRectIsNull(), (uVar2 & 1) == 0)) {
      dStack_1a8 = dStack_188;
      local_1b0 = local_190;
      dStack_198 = dStack_178;
      local_1a0 = local_180;
    }
    else {
      if ((((local_69 & 1) != 0) || (((local_169 & 1) != 0 || (local_78 == 0)))) &&
         (uVar5 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getBgImageView_0269f0e0),
         (uVar5 & 1) != 0)) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getBgImageView_0269f0e0);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_80;
        local_80 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      if (((local_69 & 1) == 0) && ((local_169 & 1) == 0)) {
        if (local_78 == 0) {
          local_5e8 = &local_80;
        }
        else {
          local_5e8 = &local_78;
        }
        local_5e0 = local_5e8;
      }
      else {
        if (local_80 == 0) {
          local_5d8 = &local_78;
        }
        else {
          local_5d8 = &local_80;
        }
        local_5e0 = local_5d8;
      }
      uVar5 = *local_5e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f8[0] = uVar5;
      FUN_001332d0(uVar5,local_28);
      puVar6 = local_1f8;
      local_1b0 = dVar8;
      dStack_1a8 = dVar9;
      local_1a0 = dVar10;
      dStack_198 = dVar11;
      _objc_storeStrong(puVar6,0);
      uVar2 = (uint)puVar6;
    }
    dVar8 = local_1b0;
    _CGRectIsEmpty(local_1b0,dStack_1a8,local_1a0,dStack_198);
    if (((uVar2 & 1) == 0) &&
       (dVar8 = local_1b0, _CGRectIsNull(local_1b0,dStack_1a8,local_1a0,dStack_198),
       (uVar2 & 1) == 0)) {
      if ((local_69 & 1) == 0) {
        if ((local_31 & 1) == 0) {
          dVar8 = local_1b0;
          dVar9 = local_1a0;
          _CGRectGetMaxX(local_1b0,dStack_1a8);
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          dVar8 = dVar8 + 1.0 + dVar9 / 2.0;
          local_40 = dVar8;
        }
        else {
          dVar8 = local_1b0;
          dVar9 = local_1a0;
          _CGRectGetMinX(local_1b0,dStack_1a8);
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          dVar8 = (dVar8 - 1.0) - dVar9 / 2.0;
          local_40 = dVar8;
        }
      }
      else {
        puVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatTimeBelowMessageAlignment_0269f0e8)
        ;
        bVar1 = 1;
        if ((puVar7 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) &&
           (((puVar7 != (undefined1 *)0x0 || (bVar1 = 1, (local_31 & 1) == 0)) &&
            (bVar1 = 0, puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1))))) {
          bVar1 = local_31 ^ 1;
        }
        if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
          dVar8 = local_1b0;
          _CGRectGetMidX(local_1b0,dStack_1a8,local_1a0,dStack_198);
          local_40 = dVar8;
        }
        else if ((bVar1 & 1) == 0) {
          dVar8 = local_1b0;
          dVar9 = local_1a0;
          _CGRectGetMaxX();
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          local_40 = dVar8 - dVar9 / 2.0;
        }
        else {
          dVar8 = local_1b0;
          dVar9 = local_1a0;
          _CGRectGetMinX();
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          local_40 = dVar8 + dVar9 / 2.0;
        }
        dVar8 = local_1b0;
        dVar9 = dStack_198;
        _CGRectGetMaxY(local_1b0,dStack_1a8);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        dVar8 = dVar8 + 1.0 + dVar9 / 2.0;
        local_48 = dVar8;
      }
      if ((local_69 & 1) == 0) {
        dVar8 = local_1b0;
        dVar9 = dStack_198;
        _CGRectGetMaxY();
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        dVar8 = dVar8 - dVar9 / 2.0;
        local_48 = dVar8;
      }
    }
  }
  else {
    uVar5 = local_28;
    FUN_0012f5e4();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_50;
    local_88 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatTimeCompatMergeEnabled_0269f090);
    if ((((ulong)puVar7 & 1) == 0) ||
       (uVar5 = local_28, FUN_0012fb18(local_28,local_88), (uVar5 & 1) != 0)) {
      if (local_88 == 0) {
        FUN_0012f148(local_30,1);
        local_8c = 1;
      }
      else {
        puVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatTimeBelowAvatarAlignment_0269f0d8);
        if (((puVar7 != (undefined1 *)0x0) || (bVar1 = 1, (local_31 & 1) == 0)) &&
           (bVar1 = 0, puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
          bVar1 = local_31 ^ 1;
        }
        local_99 = bVar1 & 1;
        local_98 = puVar7;
        if ((bVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_frame_026ca640);
          local_100 = dVar8;
          local_f8 = param_2;
          local_f0 = param_3;
          local_e8 = param_4;
          _CGRectGetMaxX();
          dVar9 = dVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          dVar10 = param_3 / 2.0;
          dVar8 = dVar8 - dVar10;
          local_120 = dVar9;
          local_118 = param_2;
          local_110 = param_3;
          local_108 = param_4;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_frame_026ca640);
          local_c0 = dVar8;
          local_b8 = param_2;
          local_b0 = param_3;
          local_a8 = param_4;
          _CGRectGetMinX();
          dVar9 = dVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          dVar10 = param_3 / 2.0;
          dVar8 = dVar8 + dVar10;
          local_e0 = dVar9;
          local_d8 = param_2;
          local_d0 = param_3;
          local_c8 = param_4;
        }
        uVar12 = 0x4000000000000000;
        local_40 = dVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_frame_026ca640);
        local_148 = dVar8;
        local_140 = dVar10;
        local_138 = uVar12;
        local_130 = param_2;
        _CGRectGetMaxY();
        dVar9 = dVar8;
        local_128 = dVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        dVar8 = (dVar8 + param_2 / 2.0) - 4.5;
        local_8c = 0;
        local_168 = dVar9;
        local_160 = dVar10;
        local_158 = uVar12;
        local_150 = param_2;
        local_48 = dVar8;
      }
    }
    else {
      FUN_0012f148(local_30,1);
      local_8c = 1;
    }
    _objc_storeStrong(&local_88,0);
    if (local_8c != 0) goto LAB_001325fc;
  }
  if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatTimeHorizontalOffset_0269f0f0);
    dVar8 = local_40 + dVar8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatTimeHorizontalOffset_0269f0f0);
    dVar8 = local_40 - dVar8;
  }
  local_40 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatTimeVerticalOffset_0269f0f8);
  dVar8 = local_48 - dVar8;
  dVar9 = local_40;
  local_48 = dVar8;
  FUN_001335d8();
  dVar10 = dVar8;
  dVar11 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_center_026ca560);
  if ((0.5 < ABS(dVar10 - dVar9)) || (0.5 < ABS(dVar11 - dVar8))) {
    (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar8,local_30,PTR_s_setCenter__026ca8c0);
  }
  local_8c = 0;
LAB_001325fc:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  if (local_8c == 0) {
    local_8c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

