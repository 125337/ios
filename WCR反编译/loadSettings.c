// loadSettings @ 01c551c8

/* WARNING: Removing unreachable block (ram,0x01c563b0) */
/* WARNING: Removing unreachable block (ram,0x01c5706c) */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineNavigationAvatarViewController::loadSettings
          (WCRefineNavigationAvatarViewController *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  double in_d0;
  cfstringStruct *local_268;
  cfstringStruct *local_248;
  double local_238;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  double local_1a8;
  double local_190;
  cfstringStruct *local_178;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_110;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  double local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [2];
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_navigationHomeOnlineMode_026a60d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHomeOnlineMode__026c1d20,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowAvatar_026a0ac0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowAvatar__026c1d28,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowAvatarTQQ_026a0ac8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowAvatarTQQ__026c1d30,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarOnlineMode_026c1d38);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarOnlineMode__026c1d40,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQAvatarMode_026a6038);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarMode__026c1d48,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQSeparatorOnlineText_026c1d50);
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_110 = &cf__W_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setTqqSeparatorOnlineText__026c1d58,local_110);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQSeparatorOnlineText_026a6098);
  _objc_retainAutoreleasedReturnValue();
  local_120 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_120 = &cf__W_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setTqqSeparatorOnlineTextPrivate_026c1d60,local_120);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQSeparatorOnlineText_026a6090);
  _objc_retainAutoreleasedReturnValue();
  local_130 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_130 = &cf__W_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setTqqSeparatorOnlineTextGroup__026c1d68,local_130);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowTypingIndicator_026a5f70);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowTypingIndicator__026c1d70,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTypingIndicatorText_026a5f78);
  _objc_retainAutoreleasedReturnValue();
  local_140 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_140 = &cf__eck_WeQ_N_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTypingIndicatorText__026c1d78,local_140);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowPopoverWhenTapAvat_026c1d80);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowPopoverWhenTapAvatar__026c1d88,pcVar1)
  ;
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationJumpToTimelineWhenTapA_026c1d90);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setJumpToTimelineWhenTapAvatar__026c1d98,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationJumpToContactInfoWhenT_026c1da0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setJumpToContactInfoWhenTapAvata_026c1da8,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowSelfAvatar_026a5eb0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowSelfAvatar__026c1db0,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowOtherAvatar_026a5eb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowOtherAvatar__026c1db8,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarSize_026a5ea8);
  local_148 = in_d0;
  if (in_d0 < 0.0) {
    local_148 = 35.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarSize__026b1540);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarRadius_026a5f18);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarRadius__026c1dc0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarSpacing_026a5ea0);
  if (local_148 <= 0.0) {
    local_150 = 6.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarSpacing_026a5ea0);
    local_150 = local_148;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarSpacing__026c1dc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarHorizontalOffset_026a5f00);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarHorizontalOffset__026c1dd0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationAvatarVerticalOffset_026a5f08);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarVerticalOffset__026c1dd8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQAvatarHorizontalOff_026a6040);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarHorizontalOffset__026c1de0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQAvatarVerticalOffse_026a6048);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarVerticalOffset__026c1de8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQAvatarSpacing_026a6050);
  if (local_150 <= 0.0) {
    local_158 = 3.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQAvatarSpacing_026a6050);
    local_158 = local_150;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarSpacing__026c1df0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconSize_026a6060);
  if (local_158 <= 0.0) {
    local_160 = 10.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconSize_026a6060);
    local_160 = local_158;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconSize__026c1df8);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconType_026a6068);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconType__026c1e00,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconColorLigh_026a6080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconColorLight__026c1e08);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconColorDark_026a6088);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconColorDark__026c1e10);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeOnlineModeContext_026c1d10);
  local_51 = 0;
  local_61 = 0;
  local_178 = local_38;
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconFolderPat_026a6070);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_178;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconFolderPa_026a6158);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_178;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_178;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_48[0] == (cfstringStruct *)0x0) ||
     (pcVar1 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0)
     , pcVar1 == (cfstringStruct *)0x0)) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getTQQOnlineIconBasePath_026c1e18);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf__W_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48[0];
    local_48[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(&local_70,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setTqqOnlineIconFolderPath__026c1e20,local_48[0]);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineIconRadius_026a6078);
  local_78 = local_160;
  if (local_160 <= 0.0) {
    local_78 = 1.0;
  }
  local_190 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconRadius__026c1e28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextSize_026a60a8);
  if (local_190 <= 0.0) {
    local_190 = 10.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextSize_026a60a8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextSize__026c1e30);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextBoldFont_026a60b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextBoldFont__026c1e38,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextColorLigh_026a60b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextColorLight__026c1e40);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextColorDark_026a60c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextColorDark__026c1e48);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextHorizonta_026a60c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextHorizontalOffset_026c1e50);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTQQOnlineTextVerticalO_026a60d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextVerticalOffset__026c1e58);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowNickname_026c1e60);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowNickname__026c1e68,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameDisplayMode_026a5ee8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameDisplayMode__026c1e70,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameDisplayPositio_026a5f48);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameDisplayPosition__026c1e78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameFontSize_026a5ef0);
  if (local_190 <= 0.0) {
    local_1a8 = 12.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameFontSize_026a5ef0);
    local_1a8 = local_190;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameFontSize__026c1e80);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameBoldFont_026a5ef8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameBoldFont__026c1e88,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowGroupMemberCount_026a5f68);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowGroupMemberCount__026c1e90,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameTextColorLight_026a5f20);
  _objc_retainAutoreleasedReturnValue();
  local_81 = 0;
  local_1b8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_1a8 = 0.0;
    local_1b8 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_1b8;
  }
  local_81 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setNicknameTextColorLight__026c1e98,local_1b8);
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameTextColorDark_026a5f28);
  _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_1c8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_1a8 = 1.0;
    local_1c8 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323d00,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_1c8;
  }
  local_91 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColorDark__026c1ea0,local_1c8)
  ;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameTextColor_026a5f30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  pcVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_01c571f0;
    local_b8 = &DAT_0258bcc0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_colorWithDynamicProvider__0269e538,&local_d0)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColor__026c1ea8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_b0,0);
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameTextColor_026a5f30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,
               PTR_s_traitCollectionWithUserInterface_026ba1c0,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_resolvedColorWithTraitCollection_0269fc58);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_a0 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setNicknameTextColorLight__026c1e98,local_a0);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameTextColor_026a5f30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,
               PTR_s_traitCollectionWithUserInterface_026ba1c0,2);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_resolvedColorWithTraitCollection_0269fc58);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_a8 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setNicknameTextColorDark__026c1ea0,local_a8);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameTextColor_026a5f30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColor__026c1ea8);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameHorizontalOffs_026a5f38);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameHorizontalOffset__026c1ec0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationNicknameVerticalOffset_026a5f40);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameVerticalOffset__026c1ec8);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showNickname_026c1ed0);
  if ((((ulong)pcVar1 & 1) != 0) &&
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nicknameDisplayMode_026c1ed8),
     pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameDisplayMode__026c1e70,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationSeparatorSize_026a5ee0);
  if (local_1a8 <= 0.0) {
    local_238 = 22.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationSeparatorSize_026a5ee0);
    local_238 = local_1a8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_238,local_28,PTR_s_setSeparatorSize__026c1ee0);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationSeparatorType_026a5ec0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSeparatorType__026c1ee8,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowInPrivate_026a0ad0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowInPrivate__026c1ef0,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowInGroup_026a5fd0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowInGroup__026c1ef8,pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationShowInOfficial_026c1f00);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowInOfficial__026c1f08,pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showInPrivate_026c1f10);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showInGroup_026c1f18),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showInPrivate_026c1f10);
    if ((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showInGroup_026c1f18),
       ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayScene__026c1f20,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayScene__026c1f20,2);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayScene__026c1f20,0);
  }
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showOtherAvatar_026c1f28);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showSelfAvatar_026c1f30),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showOtherAvatar_026c1f28);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayMode__026c1f38,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayMode__026c1f38,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayMode__026c1f38,2);
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationTapAction_026a5f88);
  local_d8 = pcVar1;
  if (((pcVar1 == (cfstringStruct *)0x0) ||
      (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1))) ||
     (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTapAction__026c1f40,pcVar1);
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jumpToTimelineWhenTapAvatar_026c1f48);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showPopoverWhenTapAvatar_026c1f50);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTapAction__026c1f40,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTapAction__026c1f40,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTapAction__026c1f40,1);
    }
  }
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeOnlineModeContext_026c1d10);
  if (((ulong)pcVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarMode__026c1d48,0);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineSeparatorOnl_026a6178);
    _objc_retainAutoreleasedReturnValue();
    local_248 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_248 = &cf__W_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setTqqSeparatorOnlineText__026c1d58,local_248);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowTypingIndicator__026c1d70,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setTypingIndicatorText__026c1d78,&cf__eck_WeQ_N_);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineAvatarSize_026a60e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarSize__026b1540);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineAvatarRadius_026a60f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarRadius__026c1dc0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineAvatarHorizo_026a60f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarHorizontalOffset__026c1de0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineAvatarVertic_026a6100);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarVerticalOffset__026c1de8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineAvatarSpacin_026a6108);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqAvatarSpacing__026c1df0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconSize_026a6148);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconSize__026c1df8);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconType_026a6150);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconType__026c1e00,pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconColorLig_026a6168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconColorLight__026c1e08);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconColorDar_026a6170);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconColorDark__026c1e10);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconFolderPa_026a6158);
    _objc_retainAutoreleasedReturnValue();
    local_268 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_268 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setTqqOnlineIconFolderPath__026c1e20,local_268);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineIconRadius_026a6160);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineIconRadius__026c1e28);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineTextSize_026a6180);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextSize__026c1e30);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineTextBoldFont_026a6188);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextBoldFont__026c1e38,pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineTextColorLig_026a6190);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextColorLight__026c1e40);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineTextColorDar_026a6198);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextColorDark__026c1e48);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineTextHorizont_026a61a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextHorizontalOffset_026c1e50);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineTextVertical_026a61a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTqqOnlineTextVerticalOffset__026c1e58);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameDisplayMode__026c1e70,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameDisplayPosition__026c1e78,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameFont_026a6110);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameFontSize__026c1e80);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameBold_026a6118);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameBoldFont__026c1e88,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowGroupMemberCount__026c1e90,0);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameText_026a6120);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColorLight__026c1e98);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameText_026a6128);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColorDark__026c1ea0);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameText_026a6130);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColor__026c1ea8);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nicknameTextColor_026c1f58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    pcVar1 = local_28;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_100 = PTR___NSConcreteStackBlock_02578660;
      local_f8 = 0xc2000000;
      local_f4 = 0;
      local_f0 = FUN_01c572c0;
      local_e8 = &DAT_0258bcc0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_colorWithDynamicProvider__0269e538,&local_100);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameTextColor__026c1ea8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_e0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameHori_026a6138);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameHorizontalOffset__026c1ec0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationHomeOnlineNicknameVert_026a6140);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNicknameVerticalOffset__026c1ec8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowInPrivate__026c1ef0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowInGroup__026c1ef8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShowInOfficial__026c1f08,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayScene__026c1f20,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTapAction__026c1f40,0);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

