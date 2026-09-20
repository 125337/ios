// FUN_008fe96c @ 008fe96c

byte FUN_008fe96c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  byte local_81;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  long *local_48;
  undefined8 *local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_48 = param_4;
  local_40 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_40 = &cf___;
  }
  if (local_48 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_48 = (long)&cf___;
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     puVar4 = PTR__OBJC_CLASS___AVURLAsset_026ce330, lVar2 == 0)) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLAssetWithURL_options__026a1748,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_tracksWithMediaType__0269f568,
               *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar3 == (undefined *)0x0) {
      local_21 = 0;
      local_58 = 1;
    }
    else {
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      FUN_008ee758();
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        _objc_storeStrong(&local_70,&cf_video_audio);
      }
      lVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_stringByAppendingPathExtension__026a4580,&cf_m4a);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_68;
      local_78 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_stringByAppendingPathComponent__026cab30,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_80 = puVar4;
      FUN_008ffb88(local_30,puVar4);
      local_81 = (byte)uVar1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        FUN_008f5fc8(local_30,local_80,*(undefined8 *)PTR__AVFileTypeAppleM4A_02578520,
                     *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_02578498);
        local_81 = (byte)uVar1;
      }
      if (((local_81 & 1) == 0) ||
         (puVar3 = local_80, FUN_008f8130(), puVar4 = local_80, puVar3 == (undefined *)0x0)) {
        local_21 = 0;
      }
      else {
        if (local_40 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_40 = puVar4;
        }
        lVar2 = local_78;
        if (local_48 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_48 = lVar2;
        }
        local_21 = 1;
      }
      local_58 = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

