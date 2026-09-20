// FUN_0085a5d0 @ 0085a5d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0085a5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_135;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  char *local_108;
  char *local_100;
  cfstringStruct *local_f8;
  char *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  byte local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char *local_28;
  
  local_50 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  lVar2 = local_50;
  local_59 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_58 == 0)) {
    local_28 = (char *)0x0;
    local_70 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___AVPlayerItem_026ce300;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVPlayerItem_026ce300,PTR_s_playerItemWithURL__0269f260,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_28 = (char *)0x0;
      local_70 = 1;
    }
    else {
      FUN_0085c618();
      local_88 = puVar4;
      FUN_0085c42c();
      _objc_retainAutoreleasedReturnValue();
      local_98 = (char *)0x0;
      pcVar5 = "WCPlayerPlayArgs";
      local_90 = puVar4;
      _objc_getClass();
      pcVar6 = "WCPlayerView";
      local_a0 = pcVar5;
      _objc_getClass();
      local_a8 = pcVar6;
      if ((local_a0 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        pcVar5 = local_a0;
        _objc_alloc_init();
        local_b0 = pcVar5;
        FUN_0085bfc4(pcVar5,&cf_playerItem,local_80);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_bAutoPlay);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_mute);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_followSystemMute);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                   (local_59 ^ 1) & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_isRegisterAudioModule);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_bLoop);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_88);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_contentMode);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_bForceUseSystemPlayer);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_bForceUseThumbPlayer);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_0085bfc4(pcVar5,&cf_isOpenBackgroundVideoRender);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_a8;
        pcVar7 = &cf_generatePlayerWithFrame_PlayArgs_Controller_;
        _NSSelectorFromString();
        uStack_c8 = uStack_40;
        local_d0 = local_48;
        uStack_b8 = uStack_30;
        local_c0 = local_38;
        FUN_0085edb4(local_48,uStack_40,local_38,uStack_30,pcVar5,pcVar7,local_b0,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_98;
        local_98 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar5 = local_98;
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar5 & 1) == 0) {
          _objc_storeStrong(&local_98,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setClipsToBounds__026ca8c8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setAutoresizingMask__026ca878,0);
          pcVar5 = local_98;
          pcVar7 = &cf_setPlayerLoop_;
          _NSSelectorFromString();
          FUN_0085bd60(pcVar5,pcVar7,1);
          pcVar5 = local_98;
          pcVar7 = &cf_setPlayerToMuted_;
          _NSSelectorFromString();
          FUN_0085bd60(pcVar5,pcVar7,local_59 & 1);
          pcVar5 = local_98;
          pcVar7 = &cf_forceSetPlayerToMuted_;
          _NSSelectorFromString();
          FUN_0085bd60(pcVar5,pcVar7,local_59 & 1);
          pcVar5 = local_98;
          pcVar7 = &cf_setNotifyOthersAudioModule_;
          _NSSelectorFromString();
          FUN_0085bd60(pcVar5,pcVar7,(local_59 ^ 1) & 1);
          pcVar5 = local_98;
          pcVar7 = &cf_setVolume_;
          _NSSelectorFromString();
          uVar1 = 0;
          if ((local_59 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          FUN_0085be94(local_59 & 1,uVar1,pcVar5,pcVar7);
          pcVar5 = local_98;
          pcVar7 = &cf_setVideoRenderInBackgroundEnable_;
          _NSSelectorFromString();
          FUN_0085bd60(pcVar5,pcVar7,1);
          pcVar5 = local_98;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          FUN_0085bfc4(pcVar5,&cf_bAutoPlayWhenReady);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar5 = local_98;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1
                    );
          _objc_retainAutoreleasedReturnValue();
          FUN_0085bfc4(pcVar5,&cf_mute);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar5 = local_98;
          uVar1 = 0;
          if ((local_59 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
          _objc_retainAutoreleasedReturnValue();
          FUN_0085bfc4(pcVar5,&cf_volume);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar5 = local_98;
          FUN_0085c150(local_98,&cf_displayView);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = &cf_setVideoGravity_;
          local_d8 = pcVar5;
          _NSSelectorFromString();
          FUN_0085c2d4(pcVar5,pcVar7,local_90);
          pcVar5 = local_d8;
          pcVar7 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
          _NSSelectorFromString();
          FUN_0085c4e8(pcVar5,pcVar7,local_88);
          pcVar5 = local_98;
          pcVar7 = &cf_prepare;
          _NSSelectorFromString();
          FUN_008570cc(pcVar5,pcVar7);
          pcVar5 = local_98;
          pcVar7 = &cf_startPlayer;
          _NSSelectorFromString();
          FUN_008570cc(pcVar5,pcVar7);
          pcVar5 = local_98;
          pcVar7 = &cf_startAutoPlay;
          _NSSelectorFromString();
          FUN_008570cc(pcVar5,pcVar7);
          pcVar5 = local_98;
          pcVar7 = &cf_playVideo;
          _NSSelectorFromString();
          FUN_008570cc(pcVar5,pcVar7);
          _objc_storeStrong(&local_d8,0);
        }
        _objc_storeStrong(&local_b0,0);
      }
      if (local_98 == (char *)0x0) {
        puVar3 = PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0,PTR_s_queuePlayerWithItems__026a0588,
                   *(undefined8 *)PTR____NSArray0___02578280);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = (undefined *)0x0;
        local_e0 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8,
                     PTR_s_playerLooperWithPlayer_templateI_026a0590,puVar3,local_80);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_e8;
          local_e8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        pcVar5 = "WCPlayerLayerView";
        _objc_getClass();
        local_f0 = pcVar5;
        if (pcVar5 != (char *)0x0) {
          pcVar7 = &cf_initWithFrame_taskId_isPipScene_;
          _NSSelectorFromString();
          pcVar5 = local_f0;
          local_f8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_instancesRespondToSelector__0269da90,pcVar7);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar5 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_instanceMethodSignatureForSelect_026a0598,local_f8);
            _objc_retainAutoreleasedReturnValue();
            local_100 = pcVar5;
            if (pcVar5 != (char *)0x0) {
              pcVar5 = local_f0;
              _objc_alloc();
              puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_108 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,local_100);
              _objc_retainAutoreleasedReturnValue();
              local_110 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_108);
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setSelector__0269e1b0,local_f8);
              uStack_128 = uStack_40;
              local_130 = local_48;
              uStack_118 = uStack_30;
              local_120 = local_38;
              local_134 = 0;
              local_135 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_setArgument_atIndex__0269eae8,&local_130,2);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_setArgument_atIndex__0269eae8,&local_134,3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_setArgument_atIndex__0269eae8,&local_135,4);
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_invoke_0269e1b8);
              local_140 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_getReturnValue__0269e1c0,&local_140);
              _objc_storeStrong(&local_98,local_140);
              _objc_storeStrong(&local_110);
              _objc_storeStrong(&local_108,0);
            }
            _objc_storeStrong(&local_100,0);
          }
        }
        pcVar5 = local_98;
        if (local_98 == (char *)0x0) {
          pcVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          uStack_158 = uStack_40;
          local_160 = local_48;
          uStack_148 = uStack_30;
          local_150 = local_38;
          uVar8 = local_48;
          uVar9 = uStack_40;
          uVar10 = local_38;
          uVar11 = uStack_30;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithFrame__026ca6e8);
          pcVar5 = local_98;
          local_98 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_playerLayerWithPlayer__026a05a0,
                     local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_168 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,uVar9,uVar10,uVar11,local_168,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setVideoGravity__0269f298,local_90);
          pcVar5 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setAutoresizingMask__026ca878,0);
          _objc_storeStrong(&local_168,0);
        }
        else {
          pcVar7 = &cf_setPlayer_;
          _NSSelectorFromString();
          FUN_0085c2d4(pcVar5,pcVar7,local_e0);
          pcVar5 = local_98;
          pcVar7 = &cf_setVideoGravity_;
          _NSSelectorFromString();
          FUN_0085c2d4(pcVar5,pcVar7,local_90);
          pcVar5 = local_98;
          pcVar7 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
          _NSSelectorFromString();
          FUN_0085c4e8(pcVar5,pcVar7,local_88);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setClipsToBounds__026ca8c8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setMuted__0269f258,local_59 & 1);
        uVar1 = 0;
        if ((local_59 & 1) == 0) {
          uVar1 = 0x3f800000;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,local_e0,PTR_s_setVolume__0269f280);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setActionAtItemEnd__026a05a8,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_play_0269f2b0);
        _objc_setAssociatedObject(local_58,&DAT_028cd4b1,local_e0,1);
        _objc_setAssociatedObject(local_58,&DAT_028cd4b4,local_e8,1);
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_e0,0);
      }
      _objc_setAssociatedObject(local_58,&DAT_028cd4b0,local_98,1);
      _objc_setAssociatedObject(local_58,&DAT_028cd0d1,local_50,3);
      lVar2 = local_58;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar2,&DAT_028cd4b5,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar5 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar5;
      local_70 = 1;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

