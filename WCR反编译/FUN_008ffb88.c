// FUN_008ffb88 @ 008ffb88

byte FUN_008ffb88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_semaphore_t pdVar3;
  dispatch_time_t timeout;
  long lVar4;
  undefined1 *puVar5;
  uint local_1dc;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  dispatch_semaphore_t local_120;
  dispatch_semaphore_t local_118;
  byte local_109;
  undefined1 *local_108;
  undefined1 *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a4 [51];
  undefined1 local_71;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar4 == 0) ||
     (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330, lVar4 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_tracksWithMediaType__0269f568,
               *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_58 == (undefined *)0x0) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___AVMutableComposition_026cea48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVMutableComposition_026cea48,PTR_s_composition_026a9ec0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_addMutableTrackWithMediaType_pre_026a9ec8,
                 *(undefined8 *)PTR__AVMediaTypeAudio_02578580,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_21 = 0;
        local_48 = 1;
      }
      else {
        local_70 = 0;
        uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
        local_c0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
        local_b0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
        if (local_50 == (undefined *)0x0) {
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(&local_d8,local_50,PTR_s_duration_0269dd70);
        }
        _CMTimeRangeMake(auStack_a4,&local_c0,&local_d8);
        uStack_e8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
        local_f0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
        local_e0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
        local_f8 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_insertTimeRange_ofTrack_atTime_e_026a9ed0,auStack_a4,local_58,
                   &local_f0,&local_f8);
        _objc_storeStrong(&local_70,local_f8);
        local_71 = SUB81(puVar2,0);
        if ((((ulong)puVar2 & 1) == 0) || (local_70 != 0)) {
          local_21 = 0;
          local_48 = 1;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_initWithAsset_presetName__026a7150,local_60,
                     *(undefined8 *)PTR__AVAssetExportPresetPassthrough_025784b0);
          local_109 = 0;
          local_1dc = 1;
          local_100 = puVar2;
          if (puVar2 != (undefined1 *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_supportedFileTypes_026a71b0);
            _objc_retainAutoreleasedReturnValue();
            local_109 = 1;
            local_108 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1dc = (uint)puVar2 ^ 1;
          }
          if ((local_109 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_108);
          }
          if ((local_1dc & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setOutputURL__026a1820);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_setOutputFileType__026a1828,
                       *(undefined8 *)PTR__AVFileTypeAppleM4A_02578520);
            pdVar3 = _dispatch_semaphore_create(0);
            puVar5 = local_100;
            local_140 = PTR___NSConcreteStackBlock_02578660;
            local_138 = 0xc2000000;
            local_134 = 0;
            local_130 = FUN_0090053c;
            local_128 = &DAT_02578c20;
            local_118 = pdVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_120 = pdVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_140);
            pdVar3 = local_118;
            timeout = _dispatch_time(0,90000000000);
            lVar4 = _dispatch_semaphore_wait(pdVar3,timeout);
            local_21 = false;
            if (lVar4 == 0) {
              puVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_status_026a1830);
              local_21 = false;
              if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
                lVar4 = local_38;
                FUN_008f8130();
                local_21 = lVar4 != 0;
              }
            }
            local_48 = 1;
            _objc_storeStrong(&local_120);
            _objc_storeStrong(&local_118,0);
          }
          else {
            local_21 = 0;
            local_48 = 1;
          }
          _objc_storeStrong(&local_100,0);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

