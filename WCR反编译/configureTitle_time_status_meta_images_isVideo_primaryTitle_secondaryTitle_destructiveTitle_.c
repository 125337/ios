// configureTitle:time:status:meta:images:isVideo:primaryTitle:secondaryTitle:destructiveTitle: @ 01bea3b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x54 bytes */

void WCRMomentsDraftCardView::
     configureTitle_time_status_meta_images_isVideo_primaryTitle_secondaryTitle_destructiveTitle_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               bool param_8,ID param_9,ID param_10,ID param_11)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ID local_330;
  ulong local_328;
  ulong local_310;
  ulong local_2e0;
  undefined *local_1d0;
  undefined *local_1c0;
  undefined *local_1b0;
  bool local_151;
  ID local_150;
  ID local_148;
  bool local_139;
  ulong local_138;
  byte local_129;
  ID local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  byte local_f1;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  byte local_c9;
  undefined *local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_59;
  ulong local_58 [5];
  SEL local_30;
  ID local_28;
  
  uVar3 = DAT_02324040;
  local_58[4] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_58 + 4,param_3);
  local_58[3] = 0;
  _objc_storeStrong(local_58 + 3,param_4);
  local_58[2] = 0;
  _objc_storeStrong(local_58 + 2,param_5);
  local_58[1] = 0;
  _objc_storeStrong(local_58 + 1,param_6);
  local_58[0] = 0;
  _objc_storeStrong(local_58,param_7);
  local_59 = (byte)param_8;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  puVar4 = &local_78;
  local_78 = 0;
  _objc_storeStrong(puVar4,param_11);
  local_79 = (byte)puVar4;
  FUN_01be81d0();
  local_91 = 0;
  local_a1 = 0;
  local_1b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_79 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = local_1b0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,DAT_02323e70,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_1b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_1b0;
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  local_b9 = 0;
  local_c9 = 0;
  local_1c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_79 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_1c0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = local_1c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_1c0;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  local_e1 = 0;
  local_f1 = 0;
  local_1d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_79 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f80,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_1d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_1d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_1d0;
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_clipView_026c0a10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeLabel_026aa818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_metaLabel_026aa830);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[2],PTR_s_length_0269cca0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusLabel_026c09a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusLabel_026c09a0);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_wcr_applyStatusStyle__026c09d0);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeLabel_026aa818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[4],PTR_s_length_0269cca0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_metaLabel_026aa830);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  uVar9 = local_58[0];
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar8);
  if ((uVar9 & 1) == 0) {
    local_2e0 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_2e0 = local_58[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = local_2e0;
  local_108 = 0;
  while( true ) {
    uVar9 = local_108;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaViews_026c0a18);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    uVar10 = local_100;
    local_110 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    local_310 = uVar10;
    if (uVar10 <= local_110) {
      local_310 = local_110;
    }
    local_120 = local_310;
    local_118 = uVar10;
    if (local_310 <= uVar9) break;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_mediaViewAtIndex__026c0a50,local_108);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_108;
    uVar10 = local_100;
    local_128 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    local_129 = uVar9 < uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setHidden__026ca970,!(bool)local_129);
    local_139 = false;
    bVar1 = (local_129 & 1) == 0;
    if (bVar1) {
      local_328 = 0;
    }
    else {
      local_328 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_objectAtIndexedSubscript__0269cc78,local_108);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_328;
    }
    local_139 = !bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setImage__026ca978,local_328);
    if ((local_139 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    local_151 = local_108 != 0;
    if (local_151) {
      local_330 = 0;
    }
    else {
      local_330 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_viewWithTag__026cabe0,0x24f6df);
      _objc_retainAutoreleasedReturnValue();
      local_150 = local_330;
    }
    local_151 = !local_151;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = local_330;
    if (local_151) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    IVar5 = local_148;
    puVar8 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar8);
    if ((IVar5 & 1) != 0) {
      bVar2 = 0;
      if ((local_129 & 1) != 0) {
        bVar2 = local_59;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setHidden__026ca970,(bVar2 ^ 1) & 1);
    }
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_128,0);
    local_108 = local_108 + 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaView_026c0a20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_primaryButton_026c0a30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_primaryButton_026c0a30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_primaryButton_026c0a30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_wcr_styleButton_destructive_prim_026c0a58,IVar6,0,1);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secondaryButton_026c0a38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secondaryButton_026c0a38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secondaryButton_026c0a38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_wcr_styleButton_destructive_prim_026c0a58,IVar6,0,0);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_destructiveButton_026c0a40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_destructiveButton_026c0a40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_destructiveButton_026c0a40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_wcr_styleButton_destructive_prim_026c0a58,IVar6,1,0);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(local_58 + 1,0);
  _objc_storeStrong(local_58 + 2,0);
  _objc_storeStrong(local_58 + 3,0);
  _objc_storeStrong(local_58 + 4,0);
  return;
}

