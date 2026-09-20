// wcr_legacyExportFrameFromAsset:audioMix:templateInfo:completion: @ 006f4820

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void WCRefineScreenRecordingFrameProcessor::
     wcr_legacyExportFrameFromAsset_audioMix_templateInfo_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  ID IVar8;
  double dVar9;
  double dVar10;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  undefined *local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  code *local_2f0;
  undefined *local_2e8;
  undefined *local_2e0;
  ID local_2d8;
  long local_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [48];
  undefined *local_290;
  ID local_288;
  undefined1 local_280 [16];
  undefined8 local_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  undefined *local_230;
  undefined4 local_228;
  undefined4 local_224;
  code *local_220;
  undefined *local_218;
  long local_210;
  undefined1 auStack_208 [8];
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  double local_1f0;
  double dStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [48];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  double local_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_74;
  long local_70 [3];
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  dVar10 = DAT_02323da8;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_tracksWithMediaType__0269f568,
             *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_70[0] = lVar3;
  if ((lVar3 == 0) || (local_48 == 0)) {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))(local_50,0,&cf_U_O_ehS);
    }
    local_74 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    if (local_38 == 0) {
      local_98 = 0.0;
      uStack_90 = 0;
      local_88 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_98,local_38,PTR_s_duration_0269dd70);
    }
    uStack_b8 = uStack_90;
    local_c0 = local_98;
    uVar5 = 0;
    local_b0 = local_88;
    dVar9 = local_98;
    _CMTimeGetSeconds();
    local_a0 = dVar9;
    FUN_00224fa4(dVar9);
    if (((uVar5 & 1) == 0) || (local_a0 <= dVar10)) {
      local_a0 = dVar10;
    }
    dVar9 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_screenRecordingFrameTrimStartSec_026a70e0);
    local_c8 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_screenRecordingFrameTrimEndSecon_026a70e8);
    local_d8 = 0;
    local_e8 = local_c8;
    local_f8 = 0;
    local_100 = local_a0 - 0.3;
    local_368 = local_100;
    if (local_100 <= 0.0) {
      local_368 = 0.0;
    }
    local_108 = local_368;
    local_f0 = local_368;
    if (local_368 <= local_c8) {
      local_370 = local_368;
    }
    else {
      local_370 = local_c8;
    }
    local_110 = local_370;
    local_e0 = local_370;
    if (local_370 <= 0.0) {
      local_378 = 0.0;
    }
    else {
      local_378 = local_370;
    }
    local_118 = local_378;
    local_c8 = local_378;
    local_120 = 0;
    local_140 = 0;
    local_148 = (local_a0 - local_378) - 0.3;
    local_380 = local_148;
    if (local_148 <= 0.0) {
      local_380 = 0.0;
    }
    local_150 = local_380;
    local_138 = local_380;
    local_388 = dVar9;
    if (local_380 <= dVar9) {
      local_388 = local_380;
    }
    local_158 = local_388;
    local_128 = local_388;
    if (local_388 <= 0.0) {
      local_390 = 0.0;
    }
    else {
      local_390 = local_388;
    }
    local_160 = local_390;
    local_d0 = local_390;
    local_170 = dVar10;
    local_390 = (local_a0 - local_378) - local_390;
    local_398 = local_390;
    if (local_390 <= dVar10) {
      local_398 = dVar10;
    }
    local_180 = local_398;
    local_168 = local_398;
    local_178 = local_390;
    local_130 = dVar9;
    _CMTimeMakeWithSeconds(auStack_1c8,local_378,600);
    dVar10 = local_168;
    _CMTimeMakeWithSeconds(auStack_1e0,600);
    _CMTimeRangeMake(auStack_1b0,auStack_1c8,auStack_1e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_templateSize_026a70d0);
    local_1f0 = dVar10;
    dStack_1e8 = local_390;
    if ((dVar10 < 16.0) || (local_390 < 16.0)) {
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(local_50,0,&cf_WYX_j_g___eHe);
      }
      local_74 = 1;
    }
    else {
      _objc_initWeak(auStack_1f8,local_28);
      lVar2 = local_38;
      puVar4 = PTR__OBJC_CLASS___AVMutableVideoComposition_026ce888;
      local_230 = PTR___NSConcreteStackBlock_02578660;
      local_228 = 0xc2000000;
      local_224 = 0;
      local_220 = FUN_006f539c;
      local_218 = &DAT_0257f178;
      _objc_copyWeak(auStack_208,auStack_1f8);
      lVar3 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_210 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_videoCompositionWithAsset_applyi_026a7128,lVar2,&local_230);
      _objc_retainAutoreleasedReturnValue();
      dStack_238 = dStack_1e8;
      local_240 = local_1f0;
      dStack_248 = dStack_1e8;
      local_250 = local_1f0;
      local_200 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,dStack_1e8,puVar4,PTR_s_setRenderSize__026a7130);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_268,local_28,PTR_s_wcr_frameDurationForTrack__026a7138,local_70[0]);
      local_270 = local_258;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setFrameDuration__026a7140,local_280);
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_tempVideoURLWithPrefix__026a7148,&cf_wcr_recording_frame);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
      local_288 = IVar6;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_initWithAsset_presetName__026a7150,local_38,
                 *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_025784a0);
      IVar8 = local_28;
      uVar1 = local_40;
      puVar4 = local_200;
      IVar6 = local_288;
      local_290 = puVar7;
      _memcpy(auStack_2c0,auStack_1b0,0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar8,PTR_s_wcr_legacyConfigureExportSession_026a71c0,puVar7,IVar6,puVar4,uVar1,
                 auStack_2c0);
      if ((IVar8 & 1) == 0) {
        if (local_50 != 0) {
          (**(code **)(local_50 + 0x10))(local_50,0,&cf_R_WYX_QNR1Y_);
        }
        local_74 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_startTrackingExportSession_s_026a7160,local_290,&cf_WYX_);
        puVar4 = local_290;
        local_300 = PTR___NSConcreteStackBlock_02578660;
        local_2f8 = 0xc2000000;
        local_2f4 = 0;
        local_2f0 = FUN_006f5664;
        local_2e8 = &DAT_0257f148;
        _objc_copyWeak(auStack_2c8,auStack_1f8);
        puVar7 = local_290;
        (*(code *)PTR__objc_retain_02578638)();
        IVar6 = local_288;
        local_2e0 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_50;
        local_2d8 = IVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_2d0 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_300);
        _objc_storeStrong(&local_2d0);
        _objc_storeStrong(&local_2d8,0);
        _objc_storeStrong(&local_2e0,0);
        _objc_destroyWeak(auStack_2c8);
        local_74 = 0;
      }
      _objc_storeStrong(&local_290);
      _objc_storeStrong(&local_288,0);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(&local_210,0);
      _objc_destroyWeak(auStack_208);
      _objc_destroyWeak(auStack_1f8);
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

