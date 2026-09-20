// FUN_0059fb10 @ 0059fb10

byte FUN_0059fb10(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_1a0;
  uint local_154;
  undefined *local_108;
  char *local_d0;
  char *local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  char *local_a0;
  char *local_98;
  byte local_89;
  undefined *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined4 local_64;
  undefined *local_60;
  long local_58;
  char *local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = "FavoritesUtil";
  _objc_getClass();
  lVar2 = local_30;
  local_40 = pcVar1;
  FUN_0059d260(local_30,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (lVar3 == 0x10) {
    local_108 = PTR_s_ConvertSightFavItem2VideoInfo__026a5968;
  }
  else {
    local_108 = PTR_s_ConvertVideoFavItem2VideoInfo__026a5970;
  }
  local_60 = local_108;
  local_58 = lVar3;
  if ((local_40 == (char *)0x0) ||
     (pcVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_108),
     ((ulong)pcVar1 & 1) == 0)) {
    local_21 = 0;
    local_64 = 1;
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,local_60,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    FUN_0059d260(pcVar1,&cf_video_path);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_70;
    FUN_0059d260(local_70,&cf_thumb_path);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_89 = 0;
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    local_154 = 1;
    if (pcVar1 != (char *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_154 = (uint)puVar5 ^ 1;
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_154 & 1) == 0) {
      pcVar1 = "SightDraft";
      _objc_getClass();
      pcVar4 = "WCNewCommitViewController";
      local_98 = pcVar1;
      _objc_getClass();
      local_a0 = pcVar4;
      if (((local_98 == (char *)0x0) || (pcVar4 == (char *)0x0)) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_instancesRespondToSelector__0269da90,
                     PTR_s_initWithSightDraft__026a4ce0), ((ulong)pcVar4 & 1) == 0)) {
        local_21 = 0;
        local_64 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 0;
        pcVar1 = local_80;
        local_a8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        if (pcVar1 == (char *)0x0) {
          local_1a0 = (undefined *)0x0;
        }
        else {
          local_1a0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_80);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_b8 = local_1a0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_1a0;
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        local_c8 = (char *)0x0;
        pcVar1 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_respondsToSelector__026ca818,
                   PTR_s_draftWithVideoURL_thumbImage__026a5978);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_draftWithVideoURL__026a5980);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar4 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_draftWithVideoURL__026a5980,local_a8);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_c8;
            local_c8 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
        }
        else {
          pcVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_draftWithVideoURL_thumbImage__026a5978,local_a8,local_b0);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_c8;
          local_c8 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        if (local_c8 == (char *)0x0) {
          local_21 = 0;
          local_64 = 1;
        }
        else {
          FUN_005befb0(local_c8);
          pcVar1 = local_a0;
          _objc_alloc();
          pcVar4 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithSightDraft__026a4ce0,local_c8);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          if (local_d0 == (char *)0x0) {
            local_21 = 0;
          }
          else {
            FUN_005bf0b8(local_d0);
            pcVar1 = local_d0;
            lVar2 = local_30;
            FUN_0059d260(local_30,&cf_desc);
            _objc_retainAutoreleasedReturnValue();
            FUN_0059ee6c(pcVar1);
            (*(code *)PTR__objc_release_02578630)(lVar2);
            uVar6 = local_38;
            FUN_0059f4cc(local_38,local_d0);
            local_21 = (byte)uVar6 & 1;
          }
          local_64 = 1;
          _objc_storeStrong(&local_d0,0);
        }
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_a8,0);
      }
    }
    else {
      local_21 = 0;
      local_64 = 1;
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

