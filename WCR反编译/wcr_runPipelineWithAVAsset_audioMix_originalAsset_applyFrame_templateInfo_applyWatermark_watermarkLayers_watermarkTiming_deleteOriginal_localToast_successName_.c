// wcr_runPipelineWithAVAsset:audioMix:originalAsset:applyFrame:templateInfo:applyWatermark:watermarkLayers:watermarkTiming:deleteOriginal:localToast:successName: @ 006eff8c

/* Function Stack Size: 0x58 bytes */

void WCRefineScreenRecordingFrameProcessor::
     wcr_runPipelineWithAVAsset_audioMix_originalAsset_applyFrame_templateInfo_applyWatermark_watermarkLayers_watermarkTiming_deleteOriginal_localToast_successName_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,ID param_7,
               bool param_8,ID param_9,long_long param_10,bool param_11,bool param_12,ID param_13)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint local_3a8;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  code *local_2e0;
  undefined *local_2d8;
  undefined **local_2d0;
  undefined *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  code *local_2b8;
  undefined *local_2b0;
  undefined **local_2a8;
  undefined *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  code *local_290;
  undefined *local_288;
  undefined **local_280;
  undefined **local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  undefined **local_250;
  undefined **local_248;
  byte local_240;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  undefined **local_218;
  undefined **local_210;
  byte local_208;
  char local_201;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined **local_1d0;
  undefined1 auStack_1c8 [8];
  undefined **local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined1 auStack_180 [8];
  undefined **local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_148 [8];
  byte local_140;
  undefined **local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  byte local_f0;
  byte local_ef;
  undefined **local_e8;
  undefined1 auStack_e0 [15];
  byte local_d1;
  ulong local_d0;
  byte local_c1;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined1 local_91;
  undefined4 local_90;
  undefined8 local_80;
  byte local_72;
  byte local_71;
  long_long local_70;
  undefined8 local_68;
  byte local_59;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_49 = (byte)param_6;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_59 = (byte)param_8;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  local_70 = param_10;
  local_71 = (byte)param_11;
  local_72 = param_11._1_1_;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_13);
  if ((local_38 == 0) || (((local_49 & 1) == 0 && ((local_59 & 1) == 0)))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_finishProcessingWithToast_fo_026a7040,&cf_lgSgbLvU_O_Yt,
               local_72 & 1);
    local_90 = 1;
  }
  else {
    puVar8 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar8);
    local_91 = SUB81(puVar9,0);
    if (((ulong)puVar9 & 1) == 0) {
      uVar10 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_tracksWithMediaType__0269f568,
                 *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar11;
      (*(code *)PTR__objc_release_02578630)(uVar10);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_logVideoTrackInfo_label__026a7050,local_a0,&cf_Am4l_eQS);
      _objc_storeStrong(&local_a0,0);
    }
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = local_38;
    local_a8 = puVar8;
    if ((local_72 & 1) != 0) {
      puVar8 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVURLAsset_026ce330,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar8);
      if ((uVar10 & 1) != 0) {
        uVar10 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_URL_026a1c90);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar10;
        _NSTemporaryDirectory();
        _objc_retainAutoreleasedReturnValue();
        local_c1 = 0;
        local_d1 = 0;
        uVar11 = local_b0;
        local_b8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isFileURL_026a7088);
        local_3a8 = 0;
        if ((uVar11 & 1) != 0) {
          uVar10 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          local_c1 = 1;
          local_c0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_3a8 = 0;
          if (uVar10 != 0) {
            uVar10 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            local_d1 = 1;
            local_d0 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_3a8 = (uint)uVar10;
          }
        }
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        if ((local_c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        if ((local_3a8 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_b0);
        }
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_b0,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f00,local_28,PTR_s_wcr_showProgressHUDStage_progres_026a7008,&cf_QYYt_,
               local_72 & 1);
    _objc_initWeak(auStack_e0,local_28);
    puVar8 = PTR___NSConcreteStackBlock_02578660;
    ppuVar12 = &local_130;
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_006f1234;
    local_118 = &DAT_0257ef68;
    _objc_copyWeak(auStack_f8,auStack_e0);
    puVar9 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_48;
    local_110 = puVar9;
    local_f0 = local_72 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_80;
    local_108 = uVar4;
    local_ef = local_71 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = uVar3;
    _objc_retainBlock();
    ppuVar13 = &local_170;
    local_170 = puVar8;
    local_168 = 0xc2000000;
    local_164 = 0;
    local_160 = FUN_006f13a4;
    local_158 = &DAT_0257ef98;
    local_e8 = ppuVar12;
    _objc_copyWeak(auStack_148,auStack_e0);
    puVar9 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar9;
    local_140 = local_72 & 1;
    _objc_retainBlock();
    ppuVar12 = &local_1b8;
    local_1b8 = puVar8;
    local_1b0 = 0xc2000000;
    local_1ac = 0;
    local_1a8 = FUN_006f14b8;
    local_1a0 = &DAT_0257f028;
    local_138 = ppuVar13;
    _objc_copyWeak(auStack_180,auStack_e0);
    ppuVar13 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    puVar9 = local_a8;
    local_188 = ppuVar13;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_58;
    local_198 = puVar9;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar3;
    _objc_retainBlock();
    ppuVar13 = &local_200;
    local_200 = puVar8;
    local_1f8 = 0xc2000000;
    local_1f4 = 0;
    local_1f0 = FUN_006f1bf8;
    local_1e8 = &DAT_0257f028;
    local_178 = ppuVar12;
    _objc_copyWeak(auStack_1c8,auStack_e0);
    ppuVar12 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    puVar8 = local_a8;
    local_1d0 = ppuVar12;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_68;
    local_1e0 = puVar8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = uVar3;
    _objc_retainBlock();
    puVar8 = PTR_WCRefineConfig_026cdf58;
    local_1c0 = ppuVar13;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar8);
    IVar6 = local_28;
    uVar10 = local_38;
    uVar5 = local_40;
    uVar4 = local_58;
    uVar3 = local_68;
    ppuVar2 = local_e8;
    ppuVar1 = local_138;
    ppuVar13 = local_178;
    ppuVar12 = local_1c0;
    if (((ulong)puVar9 & 1) == 0) {
      if (((local_49 & 1) == 0) || ((local_59 & 1) == 0)) {
        if ((local_49 & 1) == 0) {
          local_2f0 = PTR___NSConcreteStackBlock_02578660;
          local_2e8 = 0xc2000000;
          local_2e4 = 0;
          local_2e0 = FUN_006f2a28;
          local_2d8 = &DAT_0257f058;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d0 = ppuVar2;
          (*(code *)ppuVar12[2])(ppuVar12,uVar10,uVar5,&local_2f0);
          _objc_storeStrong(&local_2d0,0);
          local_90 = 0;
        }
        else {
          local_2c8 = PTR___NSConcreteStackBlock_02578660;
          local_2c0 = 0xc2000000;
          local_2bc = 0;
          local_2b8 = FUN_006f29ac;
          local_2b0 = &DAT_0257f058;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a8 = ppuVar2;
          (*(code *)ppuVar13[2])(ppuVar13,uVar10,uVar5,&local_2c8);
          local_90 = 1;
          _objc_storeStrong(&local_2a8,0);
        }
      }
      else {
        bVar7 = local_70 == 1;
        local_2a0 = PTR___NSConcreteStackBlock_02578660;
        local_298 = 0xc2000000;
        local_294 = 0;
        local_290 = FUN_006f26cc;
        local_288 = &DAT_0257f0e8;
        (*(code *)PTR__objc_retain_02578638)();
        ppuVar12 = local_e8;
        local_280 = ppuVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_278 = ppuVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_wcr_exportCombinedFromAsset_audi_026a70c0,uVar10,uVar5,uVar4,uVar3,
                   bVar7,&local_2a0);
        local_90 = 1;
        _objc_storeStrong(&local_278);
        _objc_storeStrong(&local_280,0);
      }
    }
    else {
      local_201 = false;
      if (((local_49 & 1) != 0) && (local_201 = false, (local_59 & 1) != 0)) {
        local_201 = local_70 == 1;
      }
      if (((local_59 & 1) == 0) || (((local_49 & 1) != 0 && ((bool)local_201 == false)))) {
        if ((local_49 & 1) == 0) {
          local_90 = 1;
        }
        else {
          local_270 = PTR___NSConcreteStackBlock_02578660;
          local_268 = 0xc2000000;
          local_264 = 0;
          local_260 = FUN_006f24a4;
          local_258 = &DAT_0257f088;
          local_240 = local_59 & 1;
          (*(code *)PTR__objc_retain_02578638)();
          ppuVar1 = local_e8;
          local_250 = ppuVar12;
          (*(code *)PTR__objc_retain_02578638)();
          local_248 = ppuVar1;
          (*(code *)ppuVar13[2])(ppuVar13,uVar10,uVar5,&local_270);
          local_90 = 1;
          _objc_storeStrong(&local_248);
          _objc_storeStrong(&local_250,0);
        }
      }
      else {
        local_238 = PTR___NSConcreteStackBlock_02578660;
        local_230 = 0xc2000000;
        local_22c = 0;
        local_228 = FUN_006f2220;
        local_220 = &DAT_0257f088;
        local_208 = local_49 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        ppuVar1 = local_e8;
        local_218 = ppuVar13;
        (*(code *)PTR__objc_retain_02578638)();
        local_210 = ppuVar1;
        (*(code *)ppuVar12[2])(ppuVar12,uVar10,uVar5,&local_238);
        local_90 = 1;
        _objc_storeStrong(&local_210);
        _objc_storeStrong(&local_218,0);
      }
    }
    _objc_storeStrong(&local_1c0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_destroyWeak(auStack_1c8);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_188,0);
    _objc_destroyWeak(auStack_180);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_150,0);
    _objc_destroyWeak(auStack_148);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_110,0);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_e0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

