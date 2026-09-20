// FUN_00200b00 @ 00200b00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00200b00(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_188;
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_155;
  undefined4 local_154;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  char *local_128;
  char *local_120;
  cfstringStruct *local_118;
  char *local_110;
  undefined *local_108;
  undefined *local_100;
  char *local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_59;
  long local_58;
  long local_50;
  ulong local_48;
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
  lVar3 = local_50;
  local_88 = param_12;
  local_80 = param_11;
  local_78 = param_10;
  local_70 = param_9;
  local_68 = param_8;
  local_59 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((lVar3 == 0) || (local_58 == 0)) {
    local_28 = (char *)0x0;
    local_98 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___AVPlayerItem_026ce300;
    local_a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVPlayerItem_026ce300,PTR_s_playerItemWithURL__0269f260,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_28 = (char *)0x0;
      local_98 = 1;
    }
    else {
      local_b0 = (char *)0x0;
      pcVar6 = "WCPlayerPlayArgs";
      _objc_getClass();
      pcVar7 = "WCPlayerView";
      local_b8 = pcVar6;
      _objc_getClass();
      local_c0 = pcVar7;
      if ((local_b8 != (char *)0x0) && (pcVar7 != (char *)0x0)) {
        pcVar6 = local_b8;
        _objc_alloc_init();
        local_c8 = pcVar6;
        FUN_002003fc(pcVar6,&cf_playerItem,local_a8);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_bAutoPlay);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_mute);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_followSystemMute);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                   (local_59 ^ 1) & 1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_isRegisterAudioModule);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_bLoop);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_contentMode);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_bForceUseSystemPlayer);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_bForceUseThumbPlayer);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002003fc(pcVar6,&cf_isOpenBackgroundVideoRender);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar6 = local_c0;
        pcVar8 = &cf_generatePlayerWithFrame_PlayArgs_Controller_;
        _NSSelectorFromString();
        uStack_e8 = uStack_40;
        local_f0 = local_48;
        uStack_d8 = uStack_30;
        local_e0 = local_38;
        param_1 = local_48;
        param_2 = uStack_40;
        FUN_00202324(local_48,uStack_40,local_38,uStack_30,pcVar6,pcVar8,local_c8,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_b0;
        local_b0 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        pcVar6 = local_b0;
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar6 & 1) == 0) {
          _objc_storeStrong(&local_b0,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_setUserInteractionEnabled__026caad8,0);
          puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setClipsToBounds__026ca8c8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAutoresizingMask__026ca878,0);
          pcVar6 = local_b0;
          pcVar8 = &cf_setPlayerLoop_;
          _NSSelectorFromString();
          FUN_00200198(pcVar6,pcVar8,1);
          pcVar6 = local_b0;
          pcVar8 = &cf_setPlayerToMuted_;
          _NSSelectorFromString();
          FUN_00200198(pcVar6,pcVar8,local_59 & 1);
          pcVar6 = local_b0;
          pcVar8 = &cf_forceSetPlayerToMuted_;
          _NSSelectorFromString();
          FUN_00200198(pcVar6,pcVar8,local_59 & 1);
          pcVar6 = local_b0;
          pcVar8 = &cf_setNotifyOthersAudioModule_;
          _NSSelectorFromString();
          FUN_00200198(pcVar6,pcVar8,(local_59 ^ 1) & 1);
          pcVar6 = local_b0;
          pcVar8 = &cf_setVolume_;
          _NSSelectorFromString();
          uVar1 = 0;
          if ((local_59 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          FUN_002002cc(local_59 & 1,uVar1,pcVar6,pcVar8);
          pcVar6 = local_b0;
          pcVar8 = &cf_setVideoRenderInBackgroundEnable_;
          _NSSelectorFromString();
          FUN_00200198(pcVar6,pcVar8,1);
          pcVar6 = local_b0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          FUN_002003fc(pcVar6,&cf_bAutoPlayWhenReady);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar6 = local_b0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1
                    );
          _objc_retainAutoreleasedReturnValue();
          FUN_002003fc(pcVar6,&cf_mute);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar6 = local_b0;
          param_2 = 0x3f800000;
          uVar2 = 0;
          if ((local_59 & 1) == 0) {
            uVar2 = 0x3f800000;
          }
          param_1 = (ulong)uVar2;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
          _objc_retainAutoreleasedReturnValue();
          FUN_002003fc(pcVar6,&cf_volume);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar6 = local_b0;
          FUN_00202620(local_b0,&cf_displayView);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = &cf_setVideoGravity_;
          local_f8 = pcVar6;
          _NSSelectorFromString();
          FUN_002027a4(pcVar6,pcVar8,
                       *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
          pcVar6 = local_f8;
          pcVar8 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
          _NSSelectorFromString();
          FUN_002028fc(pcVar6,pcVar8,2);
          pcVar6 = local_b0;
          pcVar8 = &cf_prepare;
          _NSSelectorFromString();
          FUN_00200588(pcVar6,pcVar8);
          pcVar6 = local_b0;
          pcVar8 = &cf_startPlayer;
          _NSSelectorFromString();
          FUN_00200588(pcVar6,pcVar8);
          pcVar6 = local_b0;
          pcVar8 = &cf_startAutoPlay;
          _NSSelectorFromString();
          FUN_00200588(pcVar6,pcVar8);
          pcVar6 = local_b0;
          pcVar8 = &cf_playVideo;
          _NSSelectorFromString();
          FUN_00200588(pcVar6,pcVar8);
          _objc_storeStrong(&local_f8,0);
        }
        _objc_storeStrong(&local_c8,0);
      }
      if (local_b0 == (char *)0x0) {
        puVar4 = PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVQueuePlayer_026ce3f0,PTR_s_queuePlayerWithItems__026a0588,
                   *(undefined8 *)PTR____NSArray0___02578280);
        _objc_retainAutoreleasedReturnValue();
        local_108 = (undefined *)0x0;
        local_100 = puVar4;
        if (puVar4 != (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLooper_026ce3f8,
                     PTR_s_playerLooperWithPlayer_templateI_026a0590,puVar4,local_a8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_108;
          local_108 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        pcVar6 = "WCPlayerLayerView";
        _objc_getClass();
        local_110 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          pcVar8 = &cf_initWithFrame_taskId_isPipScene_;
          _NSSelectorFromString();
          pcVar6 = local_110;
          local_118 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_instancesRespondToSelector__0269da90,pcVar8);
          if (((ulong)pcVar6 & 1) != 0) {
            pcVar6 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_instanceMethodSignatureForSelect_026a0598,local_118);
            _objc_retainAutoreleasedReturnValue();
            local_120 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              pcVar6 = local_110;
              _objc_alloc();
              puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
              local_128 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSInvocation_026ce208,
                         PTR_s_invocationWithMethodSignature__0269e1a0,local_120);
              _objc_retainAutoreleasedReturnValue();
              local_130 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_128);
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSelector__0269e1b0,local_118)
              ;
              uStack_148 = uStack_40;
              local_150 = local_48;
              uStack_138 = uStack_30;
              local_140 = local_38;
              local_154 = 0;
              local_155 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_setArgument_atIndex__0269eae8,&local_150,2);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_setArgument_atIndex__0269eae8,&local_154,3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_setArgument_atIndex__0269eae8,&local_155,4);
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_invoke_0269e1b8);
              local_160 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_getReturnValue__0269e1c0,&local_160);
              _objc_storeStrong(&local_b0,local_160);
              _objc_storeStrong(&local_130);
              _objc_storeStrong(&local_128,0);
            }
            _objc_storeStrong(&local_120,0);
          }
        }
        pcVar6 = local_b0;
        if (local_b0 == (char *)0x0) {
          pcVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          uStack_178 = uStack_40;
          local_180 = local_48;
          uStack_168 = uStack_30;
          local_170 = local_38;
          uVar9 = local_48;
          uVar10 = uStack_40;
          uVar11 = local_38;
          uVar12 = uStack_30;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_initWithFrame__026ca6e8);
          pcVar6 = local_b0;
          local_b0 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          puVar4 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,PTR_s_playerLayerWithPlayer__026a05a0,
                     local_100);
          _objc_retainAutoreleasedReturnValue();
          local_188 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_setVideoGravity__0269f298,
                     *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,uVar10,uVar11,uVar12,local_188,PTR_s_setFrame__026ca960);
          pcVar6 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAutoresizingMask__026ca878,0);
          _objc_storeStrong(&local_188,0);
        }
        else {
          pcVar8 = &cf_setPlayer_;
          _NSSelectorFromString();
          FUN_002027a4(pcVar6,pcVar8,local_100);
          pcVar6 = local_b0;
          pcVar8 = &cf_setVideoGravity_;
          _NSSelectorFromString();
          FUN_002027a4(pcVar6,pcVar8,
                       *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
          pcVar6 = local_b0;
          pcVar8 = &cf_setPlayerVideoGravityWithPlayerContentMode_;
          _NSSelectorFromString();
          FUN_002028fc(pcVar6,pcVar8,2);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,0);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setClipsToBounds__026ca8c8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setMuted__0269f258,local_59 & 1);
        param_2 = 0x3f800000;
        uVar2 = 0;
        if ((local_59 & 1) == 0) {
          uVar2 = 0x3f800000;
        }
        param_1 = (ulong)uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setVolume__0269f280);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setActionAtItemEnd__026a05a8,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_play_0269f2b0);
        _objc_setAssociatedObject(local_58,local_70,local_100,1);
        _objc_setAssociatedObject(local_58,local_78,local_108,1);
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_100,0);
      }
      _objc_setAssociatedObject(local_58,local_68,local_50,3);
      lVar3 = local_58;
      uVar10 = local_80;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_59 & 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar3,uVar10,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar10 = local_88;
      pcVar6 = local_b0;
      puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      FUN_00202a2c(local_50);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,puVar4,PTR_s_valueWithCGSize__0269ec00);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(pcVar6,uVar10,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar6 = local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar6;
      local_98 = 1;
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

