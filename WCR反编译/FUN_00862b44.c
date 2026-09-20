// FUN_00862b44 @ 00862b44

void FUN_00862b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong local_2d0;
  ulong local_2c8;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  ulong local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0 [3];
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
    if (uVar2 == 0x24f6dc) {
      uVar2 = local_b0;
      _objc_getAssociatedObject(0,local_b0,&DAT_028cd4b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_d0[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
        local_110 = param_1;
        uStack_108 = param_2;
        local_100 = param_3;
        uStack_f8 = param_4;
        local_f0 = param_1;
        uStack_e8 = param_2;
        local_e0 = param_3;
        uStack_d8 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,local_d0[0],PTR_s_setFrame__026ca960);
        FUN_0085a484((DAT_026f4880 ^ 1) & 1);
        uVar2 = local_d0[0];
        pcVar4 = &cf_setPlayerToMuted_;
        _NSSelectorFromString();
        FUN_0085bd60(uVar2,pcVar4,DAT_026f4880 & 1);
        uVar2 = local_d0[0];
        pcVar4 = &cf_forceSetPlayerToMuted_;
        _NSSelectorFromString();
        FUN_0085bd60(uVar2,pcVar4,DAT_026f4880 & 1);
        uVar2 = local_d0[0];
        pcVar4 = &cf_setNotifyOthersAudioModule_;
        _NSSelectorFromString();
        FUN_0085bd60(uVar2,pcVar4,(DAT_026f4880 ^ 1) & 1);
        uVar2 = local_d0[0];
        pcVar4 = &cf_setVolume_;
        _NSSelectorFromString();
        uVar1 = 0;
        if ((DAT_026f4880 & 1) == 0) {
          uVar1 = 0x3f800000;
        }
        FUN_0085be94(DAT_026f4880 & 1,uVar1,uVar2,pcVar4);
        uVar2 = local_d0[0];
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                   DAT_026f4880 & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(uVar2,&cf_mute);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar2 = local_d0[0];
        uVar1 = 0;
        if ((DAT_026f4880 & 1) == 0) {
          uVar1 = 0x3f800000;
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(uVar2,&cf_volume);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar2 = local_d0[0];
        FUN_0085c150(local_d0[0],&cf_displayView);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_setVideoGravity_;
        local_118 = uVar2;
        _NSSelectorFromString();
        pcVar5 = pcVar4;
        FUN_0085c42c();
        _objc_retainAutoreleasedReturnValue();
        FUN_0085c2d4(uVar2,pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        uVar2 = local_118;
        pcVar4 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
        _NSSelectorFromString();
        pcVar5 = pcVar4;
        FUN_0085c618();
        FUN_0085c4e8(uVar2,pcVar4,pcVar5);
        uVar2 = local_d0[0];
        pcVar4 = &cf_startPlayer;
        _NSSelectorFromString();
        FUN_008570cc(uVar2,pcVar4);
        uVar2 = local_d0[0];
        pcVar4 = &cf_startAutoPlay;
        _NSSelectorFromString();
        FUN_008570cc(uVar2,pcVar4);
        uVar2 = local_d0[0];
        pcVar4 = &cf_playVideo;
        _NSSelectorFromString();
        FUN_008570cc(uVar2,pcVar4);
        _objc_storeStrong(&local_118,0);
      }
      uVar2 = local_b0;
      _objc_getAssociatedObject(local_b0,&DAT_028cd4b1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___AVPlayer_026ce308;
      local_120 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        FUN_0085a484((DAT_026f4880 ^ 1) & 1);
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setMuted__0269f258,DAT_026f4880 & 1);
        uVar1 = 0;
        if ((DAT_026f4880 & 1) == 0) {
          uVar1 = 0x3f800000;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,local_120,PTR_s_setVolume__0269f280);
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_play_0269f2b0);
      }
      FUN_0085ec00(local_b0,1);
      FUN_0085c670(local_b0);
      _objc_storeStrong(&local_120);
      _objc_storeStrong(local_d0,0);
    }
    _memset(auStack_168,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c8 != 0) {
      lVar6 = *local_158;
      local_2d0 = 0;
      do {
        do {
          if (*local_158 - lVar6 != 0) {
            _objc_enumerationMutation(*local_158 - lVar6,uVar2);
          }
          local_128 = *(undefined8 *)(local_160 + local_2d0 * 8);
          FUN_00862b44(local_128);
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10
                  );
        local_2d0 = 0;
      } while (local_2c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

