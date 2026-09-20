// wcr_legacyExportWatermarkFromAsset:audioMix:layers:completion: @ 006f5b1c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void __thiscall
WCRefineScreenRecordingFrameProcessor::
wcr_legacyExportWatermarkFromAsset_audioMix_layers_completion_
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,ID param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  double in_d0;
  double in_d1;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined *local_190;
  ID local_188;
  long local_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [48];
  undefined *local_140;
  ID local_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined1 auStack_b0 [8];
  double local_a8;
  double dStack_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
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
        local_88 = in_d0;
        dStack_80 = in_d1;
        _objc_initWeak(auStack_90,local_28);
        lVar2 = local_38;
        puVar4 = PTR__OBJC_CLASS___AVMutableVideoComposition_026ce888;
        local_d8 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0xc2000000;
        local_cc = 0;
        local_c8 = FUN_006f6348;
        local_c0 = &DAT_0257f1a8;
        _objc_copyWeak(auStack_b0,auStack_90);
        lVar3 = local_48;
        dStack_a0 = dStack_80;
        local_a8 = local_88;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_videoCompositionWithAsset_applyi_026a7128,lVar2,&local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,dStack_80,puVar4,PTR_s_setRenderSize__026a7130);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,local_28,PTR_s_wcr_frameDurationForTrack__026a7138,local_70[0]);
        local_120 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFrameDuration__026a7140,local_130);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_tempVideoURLWithPrefix__026a7148,&cf_wcr_recording_watermark);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
        local_138 = IVar5;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_initWithAsset_presetName__026a7150,local_38,
                   *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_025784a0);
        IVar7 = local_28;
        uVar1 = local_40;
        puVar4 = local_98;
        IVar5 = local_138;
        local_140 = puVar6;
        _memcpy(auStack_170,PTR__kCMTimeRangeInvalid_02578bf0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_wcr_legacyConfigureExportSession_026a71c0,puVar6,IVar5,puVar4,uVar1,
                   auStack_170);
        if ((IVar7 & 1) == 0) {
          if (local_50 != 0) {
            (**(code **)(local_50 + 0x10))(local_50,0,&cf_R_4lpS_QNR1Y_);
          }
          local_74 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_startTrackingExportSession_s_026a7160,local_140,&cf_4lpS_);
          puVar4 = local_140;
          local_1b0 = PTR___NSConcreteStackBlock_02578660;
          local_1a8 = 0xc2000000;
          local_1a4 = 0;
          local_1a0 = FUN_006f6620;
          local_198 = &DAT_0257f148;
          _objc_copyWeak(auStack_178,auStack_90);
          puVar6 = local_140;
          (*(code *)PTR__objc_retain_02578638)();
          IVar5 = local_138;
          local_190 = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          lVar3 = local_50;
          local_188 = IVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_1b0);
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_188,0);
          _objc_storeStrong(&local_190,0);
          _objc_destroyWeak(auStack_178);
          local_74 = 0;
        }
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_138,0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_b8,0);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_90);
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

