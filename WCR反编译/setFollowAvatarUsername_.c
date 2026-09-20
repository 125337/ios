// setFollowAvatarUsername: @ 015ee120

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::setFollowAvatarUsername_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong uVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  double dVar9;
  double in_d2;
  undefined8 in_d3;
  ulong local_498;
  ulong local_490;
  ulong local_368;
  ulong local_360;
  byte local_31c;
  uint local_314;
  ulong local_2b8;
  double local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  undefined8 uStack_298;
  double local_290;
  undefined8 uStack_288;
  double local_280;
  undefined8 uStack_278;
  double local_268;
  double local_260;
  undefined8 uStack_258;
  double local_240;
  undefined8 local_238;
  double local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined4 local_188;
  byte local_181;
  ID local_180;
  byte local_171;
  ID local_170;
  byte local_161;
  ID local_160;
  byte local_152;
  byte local_151;
  undefined *local_150;
  byte local_141;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  local_151 = 0;
  local_314 = 0;
  if (uVar1 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_314 = (uint)puVar2;
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  local_141 = (byte)local_314 & 1;
  local_161 = 0;
  local_171 = 0;
  local_181 = 0;
  local_31c = 0;
  if ((local_314 & 1) != 0) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 1;
    local_160 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_31c = 0;
    if ((IVar3 & 1) == 0) {
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_170 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_181 = 1;
      local_180 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_31c = 0;
      if (IVar3 != 0) {
        uVar4 = *(undefined8 *)(local_130 + (long)_followAvatarUsername);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,local_140);
        local_31c = (byte)uVar4;
      }
    }
  }
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  local_152 = local_31c & 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_cancelAvatarRestore_026b12a8);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
  uVar5 = *(ulong *)(local_130 + (long)_followAvatarUsername);
  *(ulong *)(local_130 + (long)_followAvatarUsername) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if ((local_152 & 1) == 0) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_141 & 1) == 0) {
      _memset(auStack_1d0,0,0x40);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_360 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
      if (local_360 != 0) {
        lVar8 = *local_1c0;
        local_368 = 0;
        do {
          do {
            if (*local_1c0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar8,IVar6);
            }
            local_190 = *(undefined8 *)(local_1c8 + local_368 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_removeFromSuperview_026ca800);
            local_368 = local_368 + 1;
          } while (local_368 < local_360);
          local_360 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                     0x10);
          local_368 = 0;
        } while (local_360 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar6);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadBallIcon_026b1110);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_idleSnapped_026b1350);
      if ((IVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_scheduleIdleSnap_026b12d0);
      }
      local_188 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballDisc_026b1300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballDisc_026b1300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      dVar9 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _memset(auStack_218,0,0x40);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_490 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10)
      ;
      if (local_490 != 0) {
        lVar8 = *local_208;
        local_498 = 0;
        do {
          do {
            if (*local_208 - lVar8 != 0) {
              _objc_enumerationMutation(*local_208 - lVar8,IVar6);
            }
            local_1d8 = *(undefined8 *)(local_210 + local_498 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_removeFromSuperview_026ca800);
            local_498 = local_498 + 1;
          } while (local_498 < local_490);
          local_490 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                     0x10);
          local_498 = 0;
        } while (local_490 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar6);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar4 = 0x3ff0000000000000;
      local_220 = dVar9;
      if (dVar9 < 1.0) {
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_240 = dVar9;
        local_238 = uVar4;
        local_220 = in_d2;
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      dVar9 = local_220;
      FUN_015e8030();
      IVar3 = local_130;
      local_290 = dVar9;
      uStack_288 = uVar4;
      local_280 = in_d2;
      uStack_278 = in_d3;
      local_268 = in_d2;
      local_260 = dVar9;
      uStack_258 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      uStack_2a8 = uStack_288;
      local_2b0 = local_290;
      uStack_298 = uStack_278;
      local_2a0 = local_280;
      uVar4 = uStack_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_290);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_bringSubviewToFront__026ca550);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      uVar1 = local_140;
      dVar9 = local_268;
      _WCRQuickChatHeadViewForUsername();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_130;
      local_2b8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar9,uVar4,local_280,uStack_278,local_2b8,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_setClipsToBounds__026ca8c8,0);
      uVar1 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      dVar9 = local_268 * 0.5;
      uVar1 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_2b8;
      pcVar7 = &cf_setImageSize_;
      _NSSelectorFromString(&cf_setImageSize_);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,pcVar7);
      uVar5 = local_2b8;
      if ((uVar1 & 1) != 0) {
        pcVar7 = &cf_setImageSize_;
        _NSSelectorFromString();
        dVar9 = local_268;
        FUN_015dffd0();
        (*(code *)PTR__objc_msgSend_02578628)(local_268,dVar9,uVar5,pcVar7);
      }
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ballAvatarHost_026b12f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_applyActiveBallAlpha_026b1290);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_scheduleAvatarRestoreForToken__026b1470,local_140);
      _objc_storeStrong(&local_2b8,0);
      local_188 = 0;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_scheduleAvatarRestoreForToken__026b1470,local_140);
    local_188 = 1;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

