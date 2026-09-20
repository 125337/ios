// wcr_exportCombinedFromAsset:audioMix:templateInfo:layers:watermarkBeforeFrame:completion: @ 006f2aa4

/* Function Stack Size: 0x3c bytes */

void __thiscall
WCRefineScreenRecordingFrameProcessor::
wcr_exportCombinedFromAsset_audioMix_templateInfo_layers_watermarkBeforeFrame_completion_
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,ID param_6,bool param_7,ID param_8,undefined4 param_9)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ID IVar9;
  ID IVar10;
  double dVar11;
  double dVar12;
  double in_d1;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_440;
  double local_438;
  double local_430;
  double *local_408;
  undefined *local_370;
  undefined4 local_368;
  undefined4 local_364;
  code *local_360;
  undefined *local_358;
  undefined *local_350;
  ID local_348;
  long local_340;
  undefined1 auStack_338 [12];
  undefined1 auStack_32c [51];
  undefined1 local_2f9;
  undefined *local_2f0;
  ID local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  long local_268;
  long local_260;
  undefined1 auStack_258 [8];
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  byte local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [48];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined *local_d8;
  double local_d0;
  double dStack_c8;
  double local_b8;
  double local_b0;
  double dStack_a8;
  long local_a0;
  undefined4 local_94;
  double local_90;
  double dStack_88;
  long local_68;
  long local_60;
  byte local_51;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  dVar1 = DAT_02323da8;
  local_38 = 0;
  dVar11 = DAT_02323da8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_51 = (byte)param_7;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  lVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_tracksWithMediaType__0269f568,
             *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar6;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  if (local_68 == 0) {
    dStack_88 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    dVar12 = *(double *)PTR__CGSizeZero_025782f8;
    local_90 = dVar12;
  }
  else {
    dVar12 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_renderSizeForTrack__026a70c8,local_68);
    in_d1 = dVar11;
    local_90 = dVar11;
    dStack_88 = dVar12;
  }
  if (((local_68 == 0) || (local_48 == 0)) ||
     (lVar6 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
     lVar5 = local_48, lVar6 == 0)) {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,0,&cf_U_O_WYXb4lpS_j_geHe);
    }
    local_94 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_templateSize_026a70d0);
    local_b0 = dVar12;
    dStack_a8 = in_d1;
    if (((local_90 < 16.0) || (dStack_88 < 16.0)) || ((dVar12 < 16.0 || (in_d1 < 16.0)))) {
      if (local_60 != 0) {
        (**(code **)(local_60 + 0x10))(local_60,0,&cf_U_O_bWYX___eHe);
      }
      local_94 = 1;
    }
    else {
      _CFAbsoluteTimeGetCurrent();
      if ((local_51 & 1) == 0) {
        local_408 = &local_b0;
      }
      else {
        local_408 = &local_90;
      }
      dStack_c8 = local_408[1];
      dVar11 = *local_408;
      local_d0 = dVar11;
      local_b8 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar11,dStack_c8,local_28,PTR_s_wcr_prepareWatermarkLayers_rende_026a70d8,local_50)
      ;
      puVar7 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar7;
      if (local_38 == 0) {
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_f8,local_38,PTR_s_duration_0269dd70);
      }
      uVar8 = 0;
      _CMTimeGetSeconds();
      local_e0 = dVar11;
      FUN_00224fa4(dVar11);
      if (((uVar8 & 1) == 0) || (local_e0 <= dVar1)) {
        local_e0 = dVar1;
      }
      dVar11 = 0.0;
      local_108 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_screenRecordingFrameTrimStartSec_026a70e0);
      local_128 = 0;
      local_130 = local_e0 - 0.3;
      local_430 = local_130;
      if (local_130 <= 0.0) {
        local_430 = 0.0;
      }
      local_138 = local_430;
      local_120 = local_430;
      local_438 = dVar11;
      if (local_430 <= dVar11) {
        local_438 = local_430;
      }
      local_140 = local_438;
      local_110 = local_438;
      if (local_438 <= local_108) {
        local_440 = local_108;
      }
      else {
        local_440 = local_438;
      }
      local_148 = local_440;
      local_100 = local_440;
      dVar12 = 0.0;
      local_158 = 0.0;
      local_118 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_screenRecordingFrameTrimEndSecon_026a70e8);
      local_178 = 0;
      local_180 = (local_e0 - local_100) - 0.3;
      local_450 = local_180;
      if (local_180 <= 0.0) {
        local_450 = 0.0;
      }
      local_188 = local_450;
      local_170 = local_450;
      local_458 = dVar12;
      if (local_450 <= dVar12) {
        local_458 = local_450;
      }
      local_190 = local_458;
      local_160 = local_458;
      if (local_458 <= local_158) {
        local_460 = local_158;
      }
      else {
        local_460 = local_458;
      }
      local_198 = local_460;
      local_150 = local_460;
      local_1a8 = dVar1;
      local_1b0 = (local_e0 - local_100) - local_460;
      local_468 = local_1b0;
      if (local_1b0 <= dVar1) {
        local_468 = dVar1;
      }
      local_1b8 = local_468;
      local_1a0 = local_468;
      local_168 = dVar12;
      _CMTimeMakeWithSeconds(auStack_200,local_100,600);
      _CMTimeMakeWithSeconds(auStack_218,local_1a0,600);
      _CMTimeRangeMake(auStack_1e8,auStack_200,auStack_218);
      _objc_initWeak(auStack_220,local_28);
      lVar4 = local_38;
      puVar7 = PTR__OBJC_CLASS___AVMutableVideoComposition_026ce888;
      local_288 = PTR___NSConcreteStackBlock_02578660;
      local_280 = 0xc2000000;
      local_27c = 0;
      local_278 = FUN_006f385c;
      local_270 = &DAT_0257f118;
      _objc_copyWeak(auStack_258,auStack_220);
      lVar6 = local_50;
      local_230 = local_51 & 1;
      dStack_248 = dStack_88;
      local_250 = local_90;
      (*(code *)PTR__objc_retain_02578638)();
      lVar5 = local_a0;
      local_268 = lVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = lVar5;
      dStack_238 = dStack_a8;
      local_240 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_videoCompositionWithAsset_applyi_026a7128,lVar4);
      _objc_retainAutoreleasedReturnValue();
      dStack_298 = dStack_a8;
      local_2a0 = local_b0;
      dStack_2a8 = dStack_a8;
      local_2b0 = local_b0;
      local_228 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,dStack_a8,puVar7,PTR_s_setRenderSize__026a7130)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (&local_2c8,local_28,PTR_s_wcr_frameDurationForTrack__026a7138,local_68);
      uStack_2d8 = uStack_2c0;
      local_2e0 = local_2c8;
      local_2d0 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setFrameDuration__026a7140,&local_2e0);
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_tempVideoURLWithPrefix__026a7148,&cf_wcr_recording_combined);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
      local_2e8 = IVar9;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_initWithAsset_presetName__026a7150,local_38,
                 *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_025784a0);
      local_2f0 = puVar7;
      _CFAbsoluteTimeGetCurrent();
      IVar10 = local_28;
      uVar3 = local_40;
      puVar2 = local_228;
      IVar9 = local_2e8;
      puVar7 = local_2f0;
      _memcpy(auStack_32c,auStack_1e8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar10,PTR_s_wcr_configureExportSession_outpu_026a7158,puVar7,IVar9,puVar2,uVar3,
                 auStack_32c);
      local_2f9 = (undefined1)IVar10;
      if ((IVar10 & 1) == 0) {
        if (local_60 != 0) {
          (**(code **)(local_60 + 0x10))(local_60,0,&cf_R_WYX4lpS_QNR1Y_);
        }
        local_94 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_startTrackingExportSession_s_026a7160,local_2f0,&cf_WYX4lpS_);
        puVar7 = local_2f0;
        local_370 = PTR___NSConcreteStackBlock_02578660;
        local_368 = 0xc2000000;
        local_364 = 0;
        local_360 = FUN_006f3d90;
        local_358 = &DAT_0257f148;
        _objc_copyWeak(auStack_338,auStack_220);
        puVar2 = local_2f0;
        (*(code *)PTR__objc_retain_02578638)();
        IVar9 = local_2e8;
        local_350 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        lVar5 = local_60;
        local_348 = IVar9;
        (*(code *)PTR__objc_retain_02578638)();
        local_340 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_370);
        _objc_storeStrong(&local_340);
        _objc_storeStrong(&local_348,0);
        _objc_storeStrong(&local_350,0);
        _objc_destroyWeak(auStack_338);
        local_94 = 0;
      }
      _objc_storeStrong(&local_2f0);
      _objc_storeStrong(&local_2e8,0);
      _objc_storeStrong(&local_228,0);
      _objc_storeStrong(&local_260,0);
      _objc_storeStrong(&local_268,0);
      _objc_destroyWeak(auStack_258);
      _objc_destroyWeak(auStack_220);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

