// configureCard:atIndex: @ 01b1157c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAlertHistoryCardViewController::configureCard_atIndex_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *local_238;
  undefined *local_228;
  undefined *local_218;
  undefined *local_208;
  undefined *local_1f8;
  undefined *local_1e8;
  ID local_1d8;
  undefined *local_168;
  ID local_160;
  undefined8 local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  unsigned_long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  uVar1 = DAT_02339ca0;
  uVar4 = DAT_02323c78;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayedRecords_026be900);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (param_4 < IVar3) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayedRecords_026be900);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = IVar3;
    if (IVar3 == 0) {
      local_1d8 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_1d8;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)();
    local_59 = (byte)IVar2;
    FUN_01b08450();
    local_71 = 0;
    local_81 = 0;
    local_1e8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_59 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02323e10,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_1e8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c70,DAT_02323d60,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_1e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_1e8;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_99 = 0;
    local_a9 = 0;
    local_1f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_59 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_1f8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324040,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_1f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_1f8;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    local_c1 = 0;
    local_d1 = 0;
    local_208 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_59 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d58,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = local_208;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3feb333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      local_c0 = local_208;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_208;
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    local_e9 = 0;
    local_f9 = 0;
    local_218 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_59 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d40,DAT_02324050,DAT_02332e48,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_218;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,0x3feb333333333333,DAT_02323db8,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = local_218;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_218;
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    local_111 = 0;
    local_121 = 0;
    local_228 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_59 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c60,uVar4,DAT_02323c68,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_121 = 1;
      local_120 = local_228;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02324258,0x3fd6666666666666,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_110 = local_228;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_228;
    if ((local_121 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_120);
    }
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    local_139 = 0;
    local_149 = 0;
    local_238 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_59 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = local_238;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c98,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_138 = local_238;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_238;
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cardView_026a5340);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBackgroundColor__026ca888,local_68);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_groupLabel_026beb40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_groupLabel_026beb40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_highlightedContentForRecord_colo_026beb50,local_58,local_b8,local_108)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setContentSourceAttr__026be7d8);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSourceAttr_026be7f8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentLabel_026ad638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_160 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordLabel_026beb60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    IVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      local_168 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_sQ__);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordLabel_026beb60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (IVar2 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_timeLabel_026aa818);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_timeLabel_026aa818);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_avatarView_026ad640);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_loadAvatarForCell_record__026beb70,local_38,local_58);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_duplicateCountForRecord__026beb78,local_58)
    ;
    if (IVar2 < 2) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dupBadgeLabel_026be7f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dupBadgeLabel_026be7f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dupBadgeLabel_026be7f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndexes_026b2a08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_multiSelectMode_026be908);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_checkmarkView_026be7e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_multiSelectMode_026be908);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectionOverlay_026be7e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectionOverlay_026be7e0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,uVar1,0x3ff0000000000000,DAT_02323c90,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectionOverlay_026be7e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

