// wcr_processRecordingAsset:globalMode: @ 006edf60

/* Function Stack Size: 0x1c bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_processRecordingAsset_globalMode_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ID local_158;
  ID local_140;
  byte local_128;
  byte local_124;
  byte local_118;
  byte local_110;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  ID local_c0;
  ID local_b8;
  undefined1 auStack_b0 [8];
  byte local_a8;
  byte local_a7;
  byte local_a6;
  byte local_a5;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  byte local_8a;
  bool local_89;
  ID local_88;
  ID local_80;
  bool local_71;
  ID local_70;
  ID local_68;
  byte local_5a;
  byte local_59;
  undefined *local_58;
  undefined4 local_50;
  byte local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  if ((local_38 == 0) ||
     (IVar5 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_processing_026a6f10),
     (IVar5 & 1) != 0)) {
    local_50 = 1;
    goto LAB_006ee90c;
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isApplicationActive_026a6ed8);
  if ((IVar5 & 1) == 0) {
    local_50 = 1;
    goto LAB_006ee90c;
  }
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_screenRecordingFrameEnabled_026a6d80);
  local_110 = 0;
  if (((ulong)puVar6 & 1) != 0) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_canUseScreenRecordingFrameBe_026a6e30);
    local_110 = 0;
    if ((IVar5 & 1) != 0) {
      local_118 = 1;
      if ((local_39 & 1) != 0) {
        puVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_screenRecordingFrameAlbumEnhance_026a6e38);
        local_118 = (byte)puVar6;
      }
      local_110 = local_118;
    }
  }
  local_59 = local_110 & 1;
  puVar6 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_videoWatermarkEnabled_026a6d88);
  local_124 = 0;
  if (((ulong)puVar6 & 1) != 0) {
    local_128 = 1;
    if ((local_39 & 1) != 0) {
      puVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_videoWatermarkAlbumEnhancementEn_026a6f50);
      local_128 = (byte)puVar6;
    }
    local_124 = local_128;
  }
  local_5a = local_124 & 1;
  local_71 = false;
  bVar1 = (local_59 & 1) == 0;
  if (bVar1) {
    local_140 = 0;
  }
  else {
    local_140 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_effectiveFrameTemplateInfo_026a6fe0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_140;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_140;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  local_89 = false;
  bVar1 = (local_5a & 1) == 0;
  if (bVar1) {
    local_158 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_158 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_videoWatermarkLayers_026a6fe8);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_158;
  }
  local_89 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_158;
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if (((local_59 & 1) == 0) || (local_68 != 0)) {
LAB_006ee474:
    if (((local_5a & 1) != 0) &&
       (IVar5 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0),
       IVar5 == 0)) {
      local_5a = 0;
    }
    if (((local_59 & 1) == 0) && ((local_5a & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWaitingForRecordingAsset__026a6e28,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentCatchupScan__026a6ee8,0);
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProcessing__026a6ff0,1);
      lVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localIdentifier_026a6f90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProcessingLocalIdentifier__026a6ff8);
      (*(code *)PTR__objc_release_02578630)(lVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWaitingForRecordingAsset__026a6e28,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_armProcessingWatchdog_026a7000);
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_shouldShowToastForFrame_wate_026a6ef0,local_59 & 1,local_5a & 1)
      ;
      local_8a = (byte)IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323e38,local_28,PTR_s_wcr_showProgressHUDStage_progres_026a7008,&cf_SU_O__,
                 (uint)IVar5 & 1);
      puVar6 = PTR__OBJC_CLASS___PHVideoRequestOptions_026ce878;
      _objc_alloc_init();
      local_98 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setNetworkAccessAllowed__026a7010,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setVersion__026a7018,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setDeliveryMode__026a7020,1);
      _objc_initWeak(auStack_a0,local_28);
      puVar8 = PTR__OBJC_CLASS___PHImageManager_026ce880;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHImageManager_026ce880,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = local_38;
      puVar6 = local_98;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_006eea30;
      local_d8 = &DAT_0257ef38;
      _objc_copyWeak(auStack_b0,auStack_a0);
      puVar3 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_38;
      local_d0 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_68;
      local_c8 = lVar4;
      local_a8 = local_8a & 1;
      local_a7 = local_59 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      IVar5 = local_80;
      local_c0 = IVar2;
      local_a6 = local_5a & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = IVar5;
      local_a5 = local_39 & 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_requestAVAssetForVideo_options_r_026a7078,lVar7,puVar6,&local_f0);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_98,0);
      local_50 = 0;
    }
  }
  else {
    if ((local_39 & 1) == 0) {
      local_59 = 0;
      if (((local_5a & 1) == 0) &&
         (puVar6 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_screenRecordingFrameShowToast_026a6e48), ((ulong)puVar6 & 1) != 0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_showToast__026a6ef8,&cf_U_O_WYX_gbgHeUSV_j_g);
      }
      goto LAB_006ee474;
    }
    puVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_screenRecordingFrameShowToast_026a6e48);
    if (((ulong)puVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_showToast__026a6ef8,&cf_U_O_WYX_gbgHeUSV_j_g);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWaitingForRecordingAsset__026a6e28,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentCatchupScan__026a6ee8,0);
    local_50 = 1;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
LAB_006ee90c:
  _objc_storeStrong(&local_38,0);
  return;
}

