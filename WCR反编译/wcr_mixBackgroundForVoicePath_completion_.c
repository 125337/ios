// wcr_mixBackgroundForVoicePath:completion: @ 015a26ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneHelper::wcr_mixBackgroundForVoicePath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ID IVar7;
  ID IVar8;
  double dVar9;
  uint local_324;
  undefined *local_320;
  undefined4 local_318;
  undefined4 local_314;
  code *local_310;
  undefined *local_308;
  undefined *local_300;
  ID local_2f8;
  long local_2f0;
  undefined *local_2e8;
  ID local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  long local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 auStack_230 [48];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [48];
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  uint local_78;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3,param_3,param_4,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_voiceCloneBackgroundPath_026b0b20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_60;
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voiceCloneBackgroundEnabled_026b0b28);
  local_71 = 0;
  local_324 = 1;
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    local_324 = 1;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_324 = (uint)puVar3 ^ 1;
    }
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if ((local_324 & 1) != 0) {
    (**(code **)(local_58 + 0x10))(local_58,local_50,0);
    local_78 = 1;
    goto LAB_015a3454;
  }
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLAssetWithURL_options__026a1748);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLAssetWithURL_options__026a1748,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__AVMediaTypeAudio_02578580;
  puVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_tracksWithMediaType__0269f568,
             *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_tracksWithMediaType__0269f568,*(undefined8 *)puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_90 == (undefined *)0x0) || (local_98 == (undefined *)0x0)) {
LAB_015a2b5c:
    (**(code **)(local_58 + 0x10))(local_58,0,&cf_of<h_NS_ec);
    local_78 = 1;
  }
  else {
    if (local_80 == (undefined *)0x0) {
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_b0,local_80,PTR_s_duration_0269dd70);
    }
    if ((local_a8 & 0x100000000) == 0) goto LAB_015a2b5c;
    if (local_80 == (undefined *)0x0) {
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_c8,local_80,PTR_s_duration_0269dd70);
    }
    uStack_d8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
    local_e0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
    local_d0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
    puVar6 = &local_c8;
    _CMTimeCompare(puVar6,&local_e0);
    if ((int)puVar6 < 1) goto LAB_015a2b5c;
    puVar4 = PTR__OBJC_CLASS___AVMutableComposition_026cea48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVMutableComposition_026cea48,PTR_s_composition_026a9ec0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__AVMediaTypeAudio_02578580;
    local_e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_addMutableTrackWithMediaType_pre_026a9ec8,
               *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_e8;
    local_f0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_addMutableTrackWithMediaType_pre_026a9ec8,*(undefined8 *)puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_f0;
    local_100 = 0;
    local_f8 = puVar5;
    if (local_80 == (undefined *)0x0) {
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_148,local_80,PTR_s_duration_0269dd70);
    }
    puVar4 = PTR__kCMTimeZero_02578bf8;
    uStack_158 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
    local_160 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
    local_150 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
    _CMTimeRangeMake(&local_160,&local_148);
    local_168 = local_100;
    uStack_178 = *(undefined8 *)(puVar4 + 8);
    local_180 = *(undefined8 *)puVar4;
    local_170 = *(undefined8 *)(puVar4 + 0x10);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_insertTimeRange_ofTrack_atTime_e_026a9ed0,auStack_130,local_90,
               &local_180,&local_168);
    _objc_storeStrong(&local_100,local_168);
    if (local_88 == (undefined *)0x0) {
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_1b0,local_88,PTR_s_duration_0269dd70);
    }
    if (local_80 == (undefined *)0x0) {
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_1c8,local_80,PTR_s_duration_0269dd70);
    }
    puVar6 = &local_1b0;
    _CMTimeCompare(puVar6,&local_1c8);
    if ((int)puVar6 < 0) {
      if (local_88 == (undefined *)0x0) {
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_198,local_88,PTR_s_duration_0269dd70);
      }
    }
    else if (local_80 == (undefined *)0x0) {
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_198,local_80,PTR_s_duration_0269dd70);
    }
    uStack_1d8 = uStack_190;
    local_1e0 = local_198;
    puVar6 = &local_1e0;
    local_1d0 = local_188;
    uStack_1f8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
    local_200 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
    local_1f0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
    _CMTimeCompare(puVar6,&local_200);
    puVar4 = local_f8;
    puVar3 = PTR__kCMTimeZero_02578bf8;
    if (0 < (int)puVar6) {
      uStack_248 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
      local_250 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
      local_240 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
      uStack_268 = uStack_190;
      local_270 = local_198;
      local_260 = local_188;
      _CMTimeRangeMake(&local_250,&local_270);
      local_278 = local_100;
      uStack_288 = *(undefined8 *)(puVar3 + 8);
      local_290 = *(undefined8 *)puVar3;
      local_280 = *(undefined8 *)(puVar3 + 0x10);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_insertTimeRange_ofTrack_atTime_e_026a9ed0,auStack_230,local_98,
                 &local_290,&local_278);
      _objc_storeStrong(&local_100,local_278);
    }
    bVar1 = local_100 == 0;
    if (bVar1) {
      puVar4 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_026cedc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_026cedc8,
                 PTR_s_audioMixInputParametersWithTrack_026b0b30,local_f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__kCMTimeZero_02578bf8;
      uStack_2a8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
      local_2b0 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
      local_2a0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
      dVar9 = 5.26354424712089e-315;
      local_298 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3f800000,puVar4,PTR_s_setVolume_atTime__026b0b38,&local_2b0);
      puVar4 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_026cedc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_026cedc8,
                 PTR_s_audioMixInputParametersWithTrack_026b0b30,local_f8);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voiceCloneBackgroundVolume_026b0b40);
      uStack_2c8 = *(undefined8 *)(puVar3 + 8);
      local_2d0 = *(undefined8 *)puVar3;
      local_2c0 = *(undefined8 *)(puVar3 + 0x10);
      (*(code *)PTR__objc_msgSend_02578628)
                ((float)dVar9,puVar4,PTR_s_setVolume_atTime__026b0b38,&local_2d0);
      puVar3 = PTR__OBJC_CLASS___AVMutableAudioMix_026cedd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVMutableAudioMix_026cedd0,PTR_s_audioMix_026b0b48);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_298;
      local_30 = local_2b8;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_2d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setInputParameters__026b0b50);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_voiceAssetsDirectory__026b0a08,&cf_Cache)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = IVar8;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      puVar3 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
      local_2e8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_2e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_setOutputURL__026a1820);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2e8,PTR_s_setOutputFileType__026a1828,
                 *(undefined8 *)PTR__AVFileTypeAppleM4A_02578520);
      (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_setAudioMix__026a7198,local_2d8);
      puVar3 = local_2e8;
      local_320 = PTR___NSConcreteStackBlock_02578660;
      local_318 = 0xc2000000;
      local_314 = 0;
      local_310 = FUN_015a34b8;
      local_308 = &DAT_0257cb48;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_58;
      local_300 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      IVar7 = local_2e0;
      local_2f0 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_2f8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_320);
      _objc_storeStrong(&local_2f8);
      _objc_storeStrong(&local_2f0,0);
      _objc_storeStrong(&local_300,0);
      _objc_storeStrong(&local_2e8,0);
      _objc_storeStrong(&local_2e0,0);
      _objc_storeStrong(&local_2d8,0);
      _objc_storeStrong(&local_2b8,0);
      _objc_storeStrong(&local_298,0);
    }
    else {
      (**(code **)(local_58 + 0x10))(local_58,0,&cf_ofmT1Y_);
    }
    local_78 = (uint)!bVar1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
LAB_015a3454:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

