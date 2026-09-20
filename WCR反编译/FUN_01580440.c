// FUN_01580440 @ 01580440

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01580440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined *local_108;
  undefined8 local_100;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  char *local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_60;
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
    local_60 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___AVPlayerItem_026ce300;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVPlayerItem_026ce300,PTR_s_playerItemWithURL__0269f260,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_28 = (char *)0x0;
      local_60 = 1;
    }
    else {
      local_78 = (char *)0x0;
      pcVar5 = "WCPlayerPlayArgs";
      _objc_getClass();
      pcVar6 = "WCPlayerView";
      local_80 = pcVar5;
      _objc_getClass();
      local_88 = pcVar6;
      if ((local_80 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        pcVar5 = local_80;
        _objc_alloc_init();
        local_90 = pcVar5;
        FUN_01581498(pcVar5,&cf_playerItem,local_70);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_bAutoPlay);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_mute);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_followSystemMute);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
                   (local_59 ^ 1) & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_isRegisterAudioModule);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_bLoop);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_contentMode);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_bForceUseSystemPlayer);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_bForceUseThumbPlayer);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01581498(pcVar5,&cf_isOpenBackgroundVideoRender);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar5 = local_88;
        pcVar7 = &cf_generatePlayerWithFrame_PlayArgs_Controller_;
        _NSSelectorFromString(&cf_generatePlayerWithFrame_PlayArgs_Controller_);
        FUN_015815dc(local_48,uStack_40,local_38,uStack_30,pcVar5,pcVar7,local_90,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_78;
        local_78 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar5 = local_78;
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar5 & 1) == 0) {
          _objc_storeStrong(&local_78,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setUserInteractionEnabled__026caad8,0);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setClipsToBounds__026ca8c8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAutoresizingMask__026ca878,0x12);
          pcVar5 = local_78;
          pcVar7 = &cf_setPlayerLoop_;
          _NSSelectorFromString(&cf_setPlayerLoop_);
          FUN_01581838(pcVar5,pcVar7,1);
          pcVar5 = local_78;
          pcVar7 = &cf_setPlayerToMuted_;
          _NSSelectorFromString(&cf_setPlayerToMuted_);
          FUN_01581838(pcVar5,pcVar7,local_59 & 1);
          pcVar5 = local_78;
          pcVar7 = &cf_forceSetPlayerToMuted_;
          _NSSelectorFromString(&cf_forceSetPlayerToMuted_);
          FUN_01581838(pcVar5,pcVar7,local_59 & 1);
          pcVar5 = local_78;
          pcVar7 = &cf_setNotifyOthersAudioModule_;
          _NSSelectorFromString(&cf_setNotifyOthersAudioModule_);
          FUN_01581838(pcVar5,pcVar7,(local_59 ^ 1) & 1);
          pcVar5 = local_78;
          pcVar7 = &cf_setVolume_;
          _NSSelectorFromString(&cf_setVolume_);
          uVar1 = 0;
          if ((local_59 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          FUN_0158192c(local_59 & 1,uVar1,pcVar5,pcVar7);
          pcVar5 = local_78;
          pcVar7 = &cf_setVideoRenderInBackgroundEnable_;
          _NSSelectorFromString(&cf_setVideoRenderInBackgroundEnable_);
          FUN_01581838(pcVar5,pcVar7,1);
          pcVar5 = local_78;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          FUN_01581498(pcVar5,&cf_bAutoPlayWhenReady);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar5 = local_78;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1
                    );
          _objc_retainAutoreleasedReturnValue();
          FUN_01581498(pcVar5,&cf_mute);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar5 = local_78;
          uVar1 = 0;
          if ((local_59 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
          _objc_retainAutoreleasedReturnValue();
          FUN_01581498(pcVar5,&cf_volume);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar5 = local_78;
          FUN_01581a1c(local_78,&cf_displayView);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = &cf_setVideoGravity_;
          local_98 = pcVar5;
          _NSSelectorFromString(&cf_setVideoGravity_);
          FUN_01581b64(pcVar5,pcVar7,
                       *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
          pcVar5 = local_98;
          pcVar7 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
          _NSSelectorFromString(&cf_setPlayerVideoGravityWithPlayerContentMode_);
          FUN_01581c6c(pcVar5,pcVar7,2);
          pcVar5 = local_78;
          pcVar7 = &cf_prepare;
          _NSSelectorFromString(&cf_prepare);
          FUN_01581d5c(pcVar5,pcVar7);
          pcVar5 = local_78;
          pcVar7 = &cf_startPlayer;
          _NSSelectorFromString(&cf_startPlayer);
          FUN_01581d5c(pcVar5,pcVar7);
          pcVar5 = local_78;
          pcVar7 = &cf_startAutoPlay;
          _NSSelectorFromString(&cf_startAutoPlay);
          FUN_01581d5c(pcVar5,pcVar7);
          pcVar5 = local_78;
          pcVar7 = &cf_playVideo;
          _NSSelectorFromString(&cf_playVideo);
          FUN_01581d5c(pcVar5,pcVar7);
          _objc_storeStrong(&local_98,0);
        }
        _objc_storeStrong(&local_90,0);
      }
      if (local_78 == (char *)0x0) {
        puVar3 = PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0,PTR_s_queuePlayerWithItems__026a0588,
                   *(undefined8 *)PTR____NSArray0___02578280);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = (undefined *)0x0;
        local_a0 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8,
                     PTR_s_playerLooperWithPlayer_templateI_026a0590,puVar3,local_70);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_a8;
          local_a8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        pcVar5 = "WCPlayerLayerView";
        _objc_getClass();
        local_b0 = pcVar5;
        if (pcVar5 != (char *)0x0) {
          pcVar7 = &cf_initWithFrame_taskId_isPipScene_;
          _NSSelectorFromString();
          pcVar5 = local_b0;
          local_b8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_instancesRespondToSelector__0269da90,pcVar7);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_instanceMethodSignatureForSelect_026a0598,local_b8);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = pcVar5;
            if (pcVar5 != (char *)0x0) {
              pcVar5 = local_b0;
              _objc_alloc();
              puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_c8 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,local_c0);
              _objc_retainAutoreleasedReturnValue();
              local_d0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_c8);
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setSelector__0269e1b0,local_b8);
              uStack_e8 = uStack_40;
              local_f0 = local_48;
              uStack_d8 = uStack_30;
              local_e0 = local_38;
              local_f4 = 0;
              local_f5 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_setArgument_atIndex__0269eae8,&local_f0,2);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_setArgument_atIndex__0269eae8,&local_f4,3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_setArgument_atIndex__0269eae8,&local_f5,4);
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_invoke_0269e1b8);
              local_100 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_getReturnValue__0269e1c0,&local_100);
              _objc_storeStrong(&local_78,local_100);
              _objc_storeStrong(&local_d0,0);
              _objc_storeStrong(&local_c8,0);
            }
            _objc_storeStrong(&local_c0,0);
          }
        }
        pcVar5 = local_78;
        if (local_78 == (char *)0x0) {
          pcVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          uVar8 = local_48;
          uVar9 = uStack_40;
          uVar10 = local_38;
          uVar11 = uStack_30;
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar5 = local_78;
          local_78 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_playerLayerWithPlayer__026a05a0,
                     local_a0);
          _objc_retainAutoreleasedReturnValue();
          local_108 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_setVideoGravity__0269f298,
                     *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,uVar9,uVar10,uVar11,local_108,PTR_s_setFrame__026ca960);
          pcVar5 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAutoresizingMask__026ca878,0x12);
          _objc_setAssociatedObject(local_58,DAT_028c5fc0,local_108,1);
          _objc_storeStrong(&local_108,0);
        }
        else {
          pcVar7 = &cf_setPlayer_;
          _NSSelectorFromString(&cf_setPlayer_);
          FUN_01581b64(pcVar5,pcVar7,local_a0);
          pcVar5 = local_78;
          pcVar7 = &cf_setVideoGravity_;
          _NSSelectorFromString(&cf_setVideoGravity_);
          FUN_01581b64(pcVar5,pcVar7,
                       *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
          pcVar5 = local_78;
          pcVar7 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
          _NSSelectorFromString(&cf_setPlayerVideoGravityWithPlayerContentMode_);
          FUN_01581c6c(pcVar5,pcVar7,2);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setUserInteractionEnabled__026caad8,0);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setClipsToBounds__026ca8c8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setMuted__0269f258,local_59 & 1);
        uVar1 = 0;
        if ((local_59 & 1) == 0) {
          uVar1 = 0x3f800000;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,local_a0,PTR_s_setVolume__0269f280);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setActionAtItemEnd__026a05a8,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_play_0269f2b0);
        _objc_setAssociatedObject(local_58,DAT_028c5fc8,local_a0);
        _objc_setAssociatedObject(local_58,DAT_028c5fd0,local_a8,1);
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_a0,0);
      }
      FUN_01581e3c((local_59 ^ 1) & 1);
      pcVar5 = local_78;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar5;
      local_60 = 1;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

