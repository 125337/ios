// wcr_exportWatermarkFromAsset:audioMix:layers:completion: @ 006f9f90

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void __thiscall
WCRefineScreenRecordingFrameProcessor::wcr_exportWatermarkFromAsset_audioMix_layers_completion_
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,ID param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  double in_d0;
  double in_d1;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  ID local_198;
  long local_190;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [48];
  undefined *local_150;
  ID local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined1 auStack_c8 [24];
  undefined *local_b0;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  undefined4 local_74;
  long local_70 [3];
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
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
  if (lVar3 == 0) {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))(local_50,0,&cf_U_O_ehS);
    }
    local_74 = 1;
  }
  else {
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (lVar3 == 0) {
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(local_50,0,&cf_U_O_4lpS_j_geHe);
      }
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_renderSizeForTrack__026a70c8,local_70[0]);
      if ((in_d0 < 16.0) || (in_d1 < 16.0)) {
        if (local_50 != 0) {
          (**(code **)(local_50 + 0x10))(local_50,0,&cf_U_O____eHe);
        }
        local_74 = 1;
      }
      else {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        local_88 = in_d0;
        dStack_80 = in_d1;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,dStack_80,local_28,PTR_s_wcr_prepareWatermarkLayers_rende_026a70d8,
                     local_48);
        }
        _objc_initWeak(auStack_a8,local_28);
        lVar2 = local_38;
        puVar4 = PTR__OBJC_CLASS___AVMutableVideoComposition_026ce888;
        local_f0 = PTR___NSConcreteStackBlock_02578660;
        local_e8 = 0xc2000000;
        local_e4 = 0;
        local_e0 = FUN_006fa884;
        local_d8 = &DAT_0257f1a8;
        _objc_copyWeak(auStack_c8,auStack_a8);
        lVar3 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_videoCompositionWithAsset_applyi_026a7128,lVar2,&local_f0);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,dStack_80,puVar4,PTR_s_setRenderSize__026a7130);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,local_28,PTR_s_wcr_frameDurationForTrack__026a7138,local_70[0]);
        local_130 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFrameDuration__026a7140,local_140);
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_tempVideoURLWithPrefix__026a7148,&cf_wcr_recording_watermark);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
        local_148 = IVar6;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_initWithAsset_presetName__026a7150,local_38,
                   *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_025784a0);
        IVar7 = local_28;
        uVar1 = local_40;
        puVar4 = local_b0;
        IVar6 = local_148;
        local_150 = puVar5;
        _memcpy(auStack_180,PTR__kCMTimeRangeInvalid_02578bf0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_wcr_configureExportSession_outpu_026a7158,puVar5,IVar6,puVar4,uVar1,
                   auStack_180);
        if ((IVar7 & 1) == 0) {
          if (local_50 != 0) {
            (**(code **)(local_50 + 0x10))(local_50,0,&cf_R_4lpS_QNR1Y_);
          }
          local_74 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_startTrackingExportSession_s_026a7160,local_150,&cf_4lpS_);
          puVar4 = local_150;
          local_1c0 = PTR___NSConcreteStackBlock_02578660;
          local_1b8 = 0xc2000000;
          local_1b4 = 0;
          local_1b0 = FUN_006fabe8;
          local_1a8 = &DAT_0257f148;
          _objc_copyWeak(auStack_188,auStack_a8);
          puVar5 = local_150;
          (*(code *)PTR__objc_retain_02578638)();
          IVar6 = local_148;
          local_1a0 = puVar5;
          (*(code *)PTR__objc_retain_02578638)();
          lVar3 = local_50;
          local_198 = IVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_1c0);
          _objc_storeStrong(&local_190);
          _objc_storeStrong(&local_198,0);
          _objc_storeStrong(&local_1a0,0);
          _objc_destroyWeak(auStack_188);
          local_74 = 0;
        }
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_d0,0);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_a8);
      }
    }
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

