// wcr_saveFinalVideoAtURL:originalAsset:deleteOriginal:cleanupURLs:successName:localToast: @ 00701620

/* Function Stack Size: 0x38 bytes */

void WCRefineScreenRecordingFrameProcessor::
     wcr_saveFinalVideoAtURL_originalAsset_deleteOriginal_cleanupURLs_successName_localToast_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,ID param_7,
               bool param_8)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint local_14c;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  ID local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  byte local_100;
  byte local_ff;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  byte local_89;
  long local_88;
  byte local_79;
  undefined *local_78;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
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
  local_41 = (byte)param_5;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_59 = (byte)param_8;
  local_79 = 0;
  local_89 = 0;
  local_14c = 1;
  if (local_38 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    lVar5 = local_38;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fileExistsAtPath__026ca630);
    local_14c = (uint)puVar4 ^ 1;
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  bVar1 = (local_14c & 1) == 0;
  if (bVar1) {
    uVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localIdentifier_026a6f90);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = &local_c8;
    local_c8 = 0;
    local_b8 = 0x32000000;
    local_b4 = 0x30;
    local_b0 = FUN_00701c90;
    local_a8 = FUN_00701ce4;
    local_a0 = 0;
    puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    local_98 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_38;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_00701d10;
    local_e0 = &DAT_0257dd38;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_28;
    local_d8 = lVar5;
    local_148 = puVar4;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = FUN_00701e50;
    local_130 = &DAT_0257f238;
    local_d0 = &local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_128 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = local_98;
    local_120 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_58;
    local_118 = uVar6;
    local_100 = local_41 & 1;
    local_108 = &local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = uVar2;
    local_ff = local_59 & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_performChanges_completionHandler_026a1740,&local_f8,&local_148);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_d8,0);
    __Block_object_dispose(&local_c8,8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_cleanupTempURLs__026a7098,local_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_finishProcessingWithToast_fo_026a7040,&cf_U_O_YtQeNeHe,
               local_59 & 1);
  }
  local_90 = (uint)!bVar1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

