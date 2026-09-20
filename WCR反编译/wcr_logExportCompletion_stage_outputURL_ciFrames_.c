// wcr_logExportCompletion:stage:outputURL:ciFrames: @ 00701048

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x30 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_logExportCompletion_stage_outputURL_ciFrames_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_148;
  uint local_fc;
  undefined *local_b8;
  long local_a8;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  long local_80;
  byte local_71;
  undefined *local_70;
  byte local_51;
  long_long local_50;
  long local_48 [4];
  ID local_28;
  
  local_48[2] = 0;
  local_48[3] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_48 + 2,param_3);
  local_48[1] = 0;
  _objc_storeStrong(local_48 + 1,param_4);
  local_48[0] = 0;
  _objc_storeStrong(local_48,param_5);
  local_71 = 0;
  local_81 = 0;
  lVar2 = local_48[0];
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_fc = 0;
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    lVar3 = local_48[0];
    local_70 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fileExistsAtPath__026ca630);
    local_fc = (uint)puVar4;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  local_51 = (byte)local_fc & 1;
  bVar1 = (local_fc & 1) == 0;
  if (bVar1) {
    local_148 = (undefined *)0x0;
  }
  else {
    local_98 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_148 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_attributesOfItemAtPath_error__0269db08,local_a8,0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_148;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_148;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
    (*(code *)PTR__objc_release_02578630)(local_a8);
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__NSFileSize_02578028);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(local_48 + 2,0);
  return;
}

