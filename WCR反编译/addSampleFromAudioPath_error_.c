// addSampleFromAudioPath:error: @ 0158f398

/* Function Stack Size: 0x20 bytes */

bool WCRefineVoiceCloneHelper::addSampleFromAudioPath_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  cfstringStruct *local_f0;
  uint local_ac;
  undefined8 local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  ID *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_51 = 0;
  local_ac = 1;
  if (uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ac = (uint)puVar3 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_ac & 1) == 0) {
    local_60 = (cfstringStruct *)0x0;
    local_68 = 0;
    uVar2 = local_40;
    _WCRefinePreparePlayableVoicePath(local_40,&local_68);
    _objc_storeStrong(&local_60,local_68);
    if (((uVar2 & 1) == 0) ||
       (pcVar4 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       pcVar4 == (cfstringStruct *)0x0)) {
      if (local_48 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_48 = (ID)&cf_7h_glx1Y_;
      }
      local_21 = 0;
      local_58 = 1;
    }
    else {
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_79 = false;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_f0 = &cf_wav;
      }
      else {
        local_f0 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_f0;
      }
      local_79 = pcVar5 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_f0;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      IVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_samplesDirectory_026b0a20);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_30;
      local_88 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sampleFilePaths_026b0a28);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar7);
      IVar6 = local_88;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_90 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_sample_lu___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_a0 = 0;
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_a0;
      puVar9 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_a0,uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar9 & 1) == 0) {
        if (local_48 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_48 = (ID)&cf_7h_gOX_1Y_;
        }
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
      local_58 = 1;
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    if (local_48 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_48 = (ID)&cf_nNX__W;
    }
    local_21 = 0;
    local_58 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

