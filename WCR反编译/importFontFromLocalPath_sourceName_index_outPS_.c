// importFontFromLocalPath:sourceName:index:outPS: @ 019dea24

/* Function Stack Size: 0x30 bytes */

ID WCRefineFontBeautifyViewController::importFontFromLocalPath_sourceName_index_outPS_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID *param_6)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte local_124;
  long local_100;
  ID local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  ID local_88;
  byte local_79;
  long local_78;
  ID local_70;
  undefined4 local_64;
  long local_60;
  ID *local_58;
  unsigned_long_long local_50;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar1 = local_40;
  local_58 = param_6;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_allowedFontExtensions_026baec8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_30;
  if ((IVar4 & 1) == 0) {
    local_28 = 0;
    local_64 = 1;
  }
  else {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_79 = 0;
    if (lVar1 == 0) {
      local_100 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_100;
    }
    else {
      local_100 = local_48;
    }
    local_79 = lVar1 == 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_generatedFontFileNameForBaseName_026bb018,local_100,local_60,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar3;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fontBasePath_026baec0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_90 = 0;
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_90;
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_90,local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_91 = (byte)puVar6;
    if (((ulong)puVar6 & 1) == 0) {
      local_b0 = local_90;
      puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
                 local_40,1,&local_b0);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_90,local_b0);
      local_a8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      local_124 = 0;
      if (puVar5 != (undefined *)0x0) {
        local_b8 = local_90;
        puVar5 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_b8);
        local_124 = (byte)puVar5;
        _objc_storeStrong(&local_90,local_b8);
      }
      local_91 = local_124 & 1;
      _objc_storeStrong(&local_a8,0);
    }
    if ((local_91 & 1) == 0) {
      local_28 = 0;
      local_64 = 1;
    }
    else {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_fontDescriptorsForFileAtPath__026baee8,local_88);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
      if (IVar3 == 0) {
        puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_28 = 0;
      }
      else {
        if (local_58 != (ID *)0x0) {
          IVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_58 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        IVar3 = local_88;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = IVar3;
      }
      local_64 = 1;
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

