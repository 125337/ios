// trimVideoAtPath:maxSeconds:completion: @ 00f441a8

/* WARNING: Removing unreachable block (ram,0x00f443d0) */
/* WARNING: Removing unreachable block (ram,0x00f443e4) */
/* WARNING: Removing unreachable block (ram,0x00f443e8) */
/* WARNING: Removing unreachable block (ram,0x00f443f0) */
/* WARNING: Removing unreachable block (ram,0x00f44404) */
/* WARNING: Removing unreachable block (ram,0x00f44408) */
/* WARNING: Removing unreachable block (ram,0x00f44414) */
/* WARNING: Removing unreachable block (ram,0x00f4441c) */
/* WARNING: Removing unreachable block (ram,0x00f4431c) */
/* WARNING: Removing unreachable block (ram,0x00f44338) */
/* WARNING: Removing unreachable block (ram,0x00f4433c) */
/* WARNING: Removing unreachable block (ram,0x00f44344) */
/* WARNING: Removing unreachable block (ram,0x00f44358) */
/* WARNING: Removing unreachable block (ram,0x00f4435c) */
/* WARNING: Removing unreachable block (ram,0x00f44368) */
/* WARNING: Removing unreachable block (ram,0x00f44370) */
/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::trimVideoAtPath_maxSeconds_completion_
               (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  long local_140;
  ID local_138;
  undefined1 auStack_130 [48];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [48];
  undefined *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  undefined *local_70;
  uint local_64;
  long local_60;
  double local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  double local_30;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3,param_3,param_5,param_6);
  local_60 = 0;
  local_58 = param_4;
  _objc_storeStrong(&local_60,param_5);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fileExistsWithBytesAtPath__026ac1d8,local_50)
  ;
  puVar5 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if (((IVar3 & 1) == 0) || (local_60 == 0)) {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,local_50);
    }
    local_64 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_URLAssetWithURL_options__026a1748,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_70 == (undefined *)0x0) {
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_90,local_70,PTR_s_duration_0269dd70);
    }
    puVar6 = &local_90;
    _CMTimeGetSeconds();
    local_78 = param_4;
    local_30 = param_4;
    if ((ABS(param_4) == INFINITY) || (param_4 <= local_58 + 0.15)) {
      (**(code **)(local_60 + 0x10))(local_60,local_50);
      local_64 = 1;
    }
    else {
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_wcr_video_emoticon____mp4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0,
                 PTR_s_exportSessionWithAsset_presetNam_026a1818,local_70,
                 *(undefined8 *)PTR__AVAssetExportPresetMediumQuality_025784a8);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar5;
      if (puVar5 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setOutputURL__026a1820);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setOutputFileType__026a1828,
                   *(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setShouldOptimizeForNetworkUse__026a71a8,1);
        _CMTimeMakeWithSeconds(local_58,600);
        uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
        local_100 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
        local_f0 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
        _CMTimeRangeMake(&local_100,auStack_e8);
        puVar4 = local_a0;
        _memcpy(auStack_130,auStack_d0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTimeRange__026a71a0,auStack_130);
        puVar4 = local_a0;
        local_178 = PTR___NSConcreteStackBlock_02578660;
        local_170 = 0xc2000000;
        local_16c = 0;
        local_168 = FUN_00f44874;
        local_160 = &DAT_02581fc0;
        (*(code *)PTR__objc_retain_02578638)();
        puVar6 = local_98;
        local_158 = puVar4;
        local_138 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_60;
        local_150 = puVar6;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_50;
        local_140 = lVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_178);
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_140,0);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_158,0);
      }
      else {
        (**(code **)(local_60 + 0x10))(local_60,local_50);
      }
      local_64 = (uint)(puVar5 == (undefined *)0x0);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  return;
}

