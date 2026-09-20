// presentRecord:onTrack: @ 00ff8d1c

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAlertDanmakuPresenter::presentRecord_onTrack_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double in_d2;
  double dVar9;
  double local_320;
  double local_318;
  double local_280;
  double local_278;
  undefined *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  code *local_238;
  undefined *local_230;
  undefined *local_228;
  ID local_220;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  undefined *local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  code *local_128;
  ID local_120;
  ID local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined *local_f0;
  double local_e8;
  double local_e0;
  byte local_d1;
  undefined1 *local_d0;
  undefined1 local_c1;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  ID local_a0;
  double local_98;
  double local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureOverlayWindow_026ad770);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  if (IVar3 == 0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_ensureOverlayAttachedToWindow__026ad800,IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionNameForRecord__026ad7d8,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentForRecord__026ad7e0,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    uVar5 = local_38;
    local_60 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_trimmedString__0269ec98);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_70 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_maxTextAreaWidthForScreenWidth__026ad7d0);
    IVar3 = local_28;
    local_98 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d2,local_28,PTR_s_contentPagesForText_maxWidth_rec_026ad7e8,local_60,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_textAreaWidthForSessionName_cont_026ad7f0,local_58,IVar3);
    local_b0 = 0x4043000000000000;
    local_a8 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_capsuleWidthForTextAreaWidth__026ad7f8);
    local_b8 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_topInsetForWindow_record__026ad808,local_48,local_38);
    local_c0 = local_98 + (double)(long)local_40 * 44.0;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isMessageDanmakuRecord__026ad6c8,local_38);
    local_d1 = 0;
    bVar2 = false;
    if ((IVar3 & 1) != 0) {
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    if (bVar2) {
      local_278 = local_70;
    }
    else {
      local_278 = -local_b8;
    }
    local_e0 = local_278;
    if (bVar2) {
      local_280 = -local_b8;
    }
    else {
      local_280 = local_70;
    }
    local_e8 = local_280;
    puVar6 = PTR_WCRKeywordAlertDanmakuBubbleView_026cec60;
    local_c1 = bVar2;
    _objc_alloc();
    dVar7 = local_e0;
    dVar8 = local_c0;
    dVar9 = local_b8;
    uVar5 = local_b0;
    FUN_00ff086c();
    local_110 = dVar7;
    local_108 = dVar8;
    local_f8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar8,dVar9,uVar5,local_a8,puVar6,PTR_s_initWithFrame_textAreaWidth__026ad818);
    local_f0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTrackIndex__026ad820,local_40);
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setRecord__026ad828);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar6 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_sessionLabel_026ad630);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setContentPages__026ad830,local_a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_applyContentPageAtIndex__026ad678,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_startCarouselIfNeeded_026ad838);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarImageForUserName__026ad840,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_118 = IVar3;
    if (IVar3 != 0) {
      puVar6 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_avatarView_026ad640);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    puVar6 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_avatarView_026ad640);
    _objc_retainAutoreleasedReturnValue();
    FUN_00ff1248();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar3 = local_28;
    local_140 = &local_148;
    local_148 = 0;
    local_138 = 0x32000000;
    local_134 = 0x30;
    local_130 = FUN_00ff2768;
    local_128 = FUN_00ff27bc;
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = IVar3;
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_initWithTarget_action__026ca718,local_28,
               PTR_s_handleDanmakuBubbleTapped__026ad848);
    local_150 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setCancelsTouchesInView__026ca8b8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addGestureRecognizer__026ca4a8,local_150);
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_00ff980c;
    local_170 = &DAT_02583f80;
    local_168 = &local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setCompletionHandler__026ad850,&local_188);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overlayView_026ad778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeBubbles_026ad690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_speedPointsPerSecondForRecord__026ad858,local_38);
    local_1f8 = local_f0;
    puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_248 = PTR___NSConcreteStackBlock_02578660;
    local_198 = local_70 + local_b8;
    local_1b8 = 0x403e000000000000;
    local_318 = dVar7;
    if (dVar7 < 30.0) {
      local_318 = 30.0;
    }
    local_1c0 = local_318;
    local_1a8 = local_198 / local_318;
    local_1c8 = 0x4010000000000000;
    local_320 = local_1a8;
    if (local_1a8 < 4.0) {
      local_320 = 4.0;
    }
    local_1d0 = local_320;
    local_1a0 = local_320;
    local_218 = PTR___NSConcreteStackBlock_02578660;
    local_210 = 0xc2000000;
    local_20c = 0;
    local_208 = FUN_00ff98a0;
    local_200 = &DAT_02583fb0;
    local_1b0 = dVar7;
    local_190 = dVar7;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_f0;
    local_1f0 = local_e8;
    local_1e8 = local_c0;
    local_1e0 = local_b8;
    local_1d8 = local_b0;
    local_240 = 0xc2000000;
    local_23c = 0;
    local_238 = FUN_00ff992c;
    local_230 = &DAT_02583fe0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_28;
    local_228 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_320,0,puVar6,PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00030002,
               &local_218,&local_248);
    _objc_storeStrong(&local_220);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_150,0);
    __Block_object_dispose(&local_148,8);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

