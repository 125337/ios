// FUN_008e6e28 @ 008e6e28

void FUN_008e6e28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long local_130;
  undefined4 local_124;
  long local_120;
  long local_118 [3];
  long local_100;
  long local_f8;
  long local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_1);
  lVar1 = local_f8;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_f8;
  local_100 = lVar1;
  FUN_008e5e98();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_100;
  local_60 = &cf_GetAppAttachmentPath;
  local_58 = &cf_getFormatVideoPath;
  local_50 = &cf_getTempVideoPath;
  local_48 = &cf_getRawFormatPath;
  local_40 = &cf_getRawTempPath;
  local_38 = &cf_GetCdnDownloadPathOfVideo;
  local_30 = &cf_GetLivePhotoVideoPath;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_118[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  FUN_008ec560();
  _objc_retainAutoreleasedReturnValue();
  local_120 = lVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  lVar4 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
  lVar2 = local_100;
  lVar1 = local_120;
  if (lVar4 == 0) {
    local_80 = &cf_GetPathOfMesVideoWithMessageWrap_;
    local_78 = &cf_GetPathOfRawOrCompressVideo_;
    local_70 = &cf_GetTempPathOfMesVideoWithMessageWrap_;
    local_68 = &cf_GetPathOfAppData_;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,4
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_008ec908();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_120;
    local_120 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar4 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
    lVar2 = local_118[0];
    lVar1 = local_120;
    if (lVar4 == 0) {
      local_b0 = &cf_filePath;
      local_a8 = &cf_path;
      local_a0 = &cf_localPath;
      local_98 = &cf_downloadPath;
      local_90 = &cf_m_nsFilePath;
      local_88 = &cf_m_nsPath;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      FUN_008eb4dc();
      _objc_retainAutoreleasedReturnValue();
      local_130 = lVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_130;
      FUN_008ecda8();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_120;
      local_120 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar4 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
      lVar2 = local_100;
      lVar1 = local_120;
      if (lVar4 == 0) {
        local_e8 = &cf_m_nsFilePath;
        local_e0 = &cf_m_nsVideoPath;
        local_d8 = &cf_m_nsPath;
        local_d0 = &cf_filePath;
        local_c8 = &cf_path;
        local_c0 = &cf_localPath;
        local_b8 = &cf_downloadPath;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_e8,7);
        _objc_retainAutoreleasedReturnValue();
        FUN_008eb4dc();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_130;
        local_130 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        lVar1 = local_130;
        FUN_008ecda8();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = lVar1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = lVar1;
      }
      local_124 = 1;
      _objc_storeStrong(&local_130,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = lVar1;
      local_124 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = lVar1;
    local_124 = 1;
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(local_118,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_f0);
  return;
}

