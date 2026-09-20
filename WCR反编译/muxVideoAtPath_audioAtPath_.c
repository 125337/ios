// muxVideoAtPath:audioAtPath: @ 01003ab8

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkMediaSender::muxVideoAtPath_audioAtPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ID IVar4;
  dispatch_semaphore_t pdVar5;
  dispatch_time_t timeout;
  long lVar6;
  undefined1 *puVar7;
  ID local_3e0;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  dispatch_semaphore_t local_260;
  dispatch_semaphore_t local_258;
  undefined1 *local_250;
  ID local_248;
  undefined1 auStack_240 [48];
  undefined1 auStack_210 [48];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 auStack_188 [48];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [48];
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_tracksWithMediaType__0269f568,
             *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_tracksWithMediaType__0269f568,
             *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_60 == (undefined *)0x0) || (local_68 == (undefined *)0x0)) {
    local_28 = 0;
    local_6c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___AVMutableComposition_026cea48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVMutableComposition_026cea48,PTR_s_composition_026a9ec0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addMutableTrackWithMediaType_pre_026a9ec8,
               *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_78;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addMutableTrackWithMediaType_pre_026a9ec8,
               *(undefined8 *)PTR__AVMediaTypeAudio_02578580,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_80;
    local_90 = 0;
    local_88 = puVar1;
    if (local_50 == (undefined *)0x0) {
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_d8,local_50,PTR_s_duration_0269dd70);
    }
    puVar1 = PTR__kCMTimeZero_02578bf8;
    uStack_e8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
    local_f0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
    local_e0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
    _CMTimeRangeMake(&local_f0,&local_d8);
    local_f8 = local_90;
    uStack_108 = *(undefined8 *)(puVar1 + 8);
    local_110 = *(undefined8 *)puVar1;
    local_100 = *(undefined8 *)(puVar1 + 0x10);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_insertTimeRange_ofTrack_atTime_e_026a9ed0,auStack_c0,local_60,&local_110
               ,&local_f8);
    _objc_storeStrong(&local_90,local_f8);
    if (((ulong)puVar2 & 1) == 0) {
      local_28 = 0;
      local_6c = 1;
    }
    else {
      if (local_58 == (undefined *)0x0) {
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_140,local_58,PTR_s_duration_0269dd70);
      }
      if (local_50 == (undefined *)0x0) {
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_158,local_50,PTR_s_duration_0269dd70);
      }
      puVar3 = &local_140;
      _CMTimeCompare(puVar3,&local_158);
      if ((int)puVar3 < 0) {
        if (local_58 == (undefined *)0x0) {
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(&local_128,local_58,PTR_s_duration_0269dd70);
        }
      }
      else if (local_50 == (undefined *)0x0) {
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_128,local_50,PTR_s_duration_0269dd70);
      }
      puVar1 = local_88;
      puVar2 = PTR__kCMTimeZero_02578bf8;
      uStack_198 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
      local_1a0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
      local_190 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
      uStack_1b8 = uStack_120;
      local_1c0 = local_128;
      local_1b0 = local_118;
      _CMTimeRangeMake(&local_1a0,&local_1c0);
      local_1c8 = local_90;
      uStack_1d8 = *(undefined8 *)(puVar2 + 8);
      local_1e0 = *(undefined8 *)puVar2;
      local_1d0 = *(undefined8 *)(puVar2 + 0x10);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_insertTimeRange_ofTrack_atTime_e_026a9ed0,auStack_188,local_68,
                 &local_1e0,&local_1c8);
      _objc_storeStrong(&local_90,local_1c8);
      if (((ulong)puVar1 & 1) == 0) {
        local_28 = 0;
        local_6c = 1;
      }
      else {
        if (local_60 == (undefined *)0x0) {
          _memset(auStack_210,0,0x30);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (auStack_210,local_60,PTR_s_preferredTransform_0269f578);
        }
        puVar2 = local_80;
        _memcpy(auStack_240,auStack_210,0x30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setPreferredTransform__026ad940,auStack_240);
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tempPathWithExt__026ad948,&cf_mp4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
        local_248 = IVar4;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
        local_250 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_248);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_setOutputURL__026a1820);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_250,PTR_s_setOutputFileType__026a1828,
                   *(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_250,PTR_s_setShouldOptimizeForNetworkUse__026a71a8,1);
        pdVar5 = _dispatch_semaphore_create(0);
        puVar7 = local_250;
        local_280 = PTR___NSConcreteStackBlock_02578660;
        local_278 = 0xc2000000;
        local_274 = 0;
        local_270 = FUN_010043f4;
        local_268 = &DAT_0257a800;
        local_258 = pdVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_260 = pdVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_280);
        pdVar5 = local_258;
        timeout = _dispatch_time(0,600000000000);
        lVar6 = _dispatch_semaphore_wait(pdVar5,timeout);
        if ((lVar6 == 0) &&
           (puVar7 = local_250,
           (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_status_026a1830),
           puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 3))) {
          local_3e0 = local_248;
        }
        else {
          local_3e0 = 0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_3e0;
        local_6c = 1;
        _objc_storeStrong(&local_260);
        _objc_storeStrong(&local_258,0);
        _objc_storeStrong(&local_250,0);
        _objc_storeStrong(&local_248,0);
      }
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

