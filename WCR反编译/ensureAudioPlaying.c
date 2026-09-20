// ensureAudioPlaying @ 00eb8320

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::ensureAudioPlaying(ID param_1,SEL param_2)

{
  long lVar1;
  bool bVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint local_ec;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_69;
  ID local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_49;
  ulong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  FUN_00eb6ed8();
  if ((param_1 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_yieldedForHostCall_026ab3d0);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setYieldedForHostCall__026ab330,0);
    }
    local_38 = 0;
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_category_026ab3d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = false;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_categoryOptions_026ab3e0);
      bVar2 = ((ulong)puVar5 & local_48) == local_48;
    }
    (*(code *)PTR__objc_release_02578630)();
    local_49 = bVar2;
    if (!bVar2) {
      puVar4 = &local_38;
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setCategory_withOptions_error__026a8eb8,
                 *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_025784b8,local_48,&local_58);
      _objc_storeStrong(puVar4,local_58);
    }
    FUN_00eb7158();
    if (((ulong)puVar4 & 1) == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_yieldedForOtherAudio_026ab3e8);
      if ((IVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setYieldedForOtherAudio__026ab3f0,0);
      }
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      local_ec = 0;
      if (IVar3 != 0) {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_ec = (uint)IVar6;
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((local_ec & 1) == 0) {
        local_78 = 0;
        local_80 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setActive_error__026a8ec0,1,&local_80);
        _objc_storeStrong(&local_78,local_80);
        puVar7 = PTR__OBJC_CLASS___NSBundle_026ce418;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_88 = puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (local_88 == (undefined *)0x0) {
          local_5c = 1;
        }
        else {
          local_90 = 0;
          puVar7 = PTR__OBJC_CLASS___AVAudioPlayer_026ceb18;
          _objc_alloc();
          lVar1 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_storeStrong(&local_90,lVar1);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentPlayer__026ab410,puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          bVar2 = true;
          if (local_90 == 0) {
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = IVar3 == 0;
            (*(code *)PTR__objc_release_02578630)(IVar3);
          }
          if (bVar2) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentPlayer__026ab410,0);
            local_5c = 1;
          }
          else {
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(0);
            (*(code *)PTR__objc_release_02578630)(IVar3);
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            if ((IVar6 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentPlayer__026ab410,0);
              local_5c = 1;
            }
            else {
              local_5c = 0;
            }
          }
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_78,0);
      }
      else {
        local_5c = 1;
      }
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
      _objc_retainAutoreleasedReturnValue();
      if (IVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_yieldedForOtherAudio_026ab3e8);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setYieldedForOtherAudio__026ab3f0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stopAudio_026ab338);
      local_5c = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silentPlayer_026ab3c8);
    _objc_retainAutoreleasedReturnValue();
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_yieldedForHostCall_026ab3d0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setYieldedForHostCall__026ab330,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stopAudio_026ab338);
  }
  return;
}

