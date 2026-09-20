// FUN_00eb6ed8 @ 00eb6ed8

byte FUN_00eb6ed8(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_38;
  char *local_30;
  undefined4 local_24;
  char *local_20;
  byte local_11;
  
  pcVar1 = "VoipUIManager";
  FUN_00ebaa94();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_isVoipWorking;
  local_20 = pcVar1;
  _NSSelectorFromString(&cf_isVoipWorking);
  FUN_00ebadf4(pcVar1,pcVar2);
  pcVar3 = local_20;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar2 = &cf_isTalking;
    _NSSelectorFromString(&cf_isTalking);
    FUN_00ebadf4(pcVar3,pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar1 = "MultiTalkMgr";
      FUN_00ebaa94();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_isMultiTalkActive;
      local_30 = pcVar1;
      _NSSelectorFromString(&cf_isMultiTalkActive);
      FUN_00ebadf4(pcVar1,pcVar2);
      pcVar3 = local_30;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar2 = &cf_isMultiTalkCalling;
        _NSSelectorFromString(&cf_isMultiTalkCalling);
        FUN_00ebadf4(pcVar3,pcVar2);
        pcVar1 = local_30;
        if (((ulong)pcVar3 & 1) != 0) goto LAB_00eb6ff4;
        pcVar2 = &cf_isMultiTalkConnected;
        _NSSelectorFromString(&cf_isMultiTalkConnected);
        FUN_00ebadf4(pcVar1,pcVar2);
        if (((ulong)pcVar1 & 1) != 0) goto LAB_00eb6ff4;
        puVar4 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_38 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,
                   *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_025784d8);
        if ((((ulong)puVar4 & 1) == 0) &&
           (puVar4 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_isEqualToString__0269ccc8,
                      *(undefined8 *)PTR__AVAudioSessionModeVideoChat_025784d0),
           ((ulong)puVar4 & 1) == 0)) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_38,0);
      }
      else {
LAB_00eb6ff4:
        local_11 = 1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_30,0);
      goto LAB_00eb7114;
    }
  }
  local_11 = 1;
  local_24 = 1;
LAB_00eb7114:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

