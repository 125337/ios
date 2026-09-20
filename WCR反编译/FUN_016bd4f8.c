// FUN_016bd4f8 @ 016bd4f8

void FUN_016bd4f8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_d8;
  long local_d0;
  long local_c8 [4];
  long local_a8;
  undefined4 local_9c;
  long local_98;
  long local_90;
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
  local_98 = 0;
  _objc_storeStrong(&local_98,param_1);
  if (local_98 == 0) {
    local_90 = 0;
    local_9c = 1;
  }
  else {
    local_a8 = 0;
    lVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_a8;
    local_a8 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_a8;
    local_40 = &cf_titleText;
    local_38 = &cf_fileName;
    local_30 = &cf_m_nsTitle;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_016afc90();
    _objc_retainAutoreleasedReturnValue();
    local_c8[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_c8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_length_0269cca0);
    lVar3 = local_c8[0];
    if (lVar1 == 0) {
      lVar1 = local_98;
      FUN_016aa360(0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = &cf_m_nsAppFileName;
      local_50 = &cf_m_nsTitle;
      local_48 = &cf_m_nsFileName;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_d0 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      FUN_016afc90();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_c8[0];
      local_c8[0] = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar4 = local_c8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_length_0269cca0);
      lVar1 = local_a8;
      lVar3 = local_c8[0];
      if (lVar4 == 0) {
        local_88 = &cf_filePath;
        local_80 = &cf_path;
        local_78 = &cf_localPath;
        local_70 = &cf_downloadPath;
        local_68 = &cf_m_nsFilePath;
        local_60 = &cf_m_nsPath;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_88,6);
        _objc_retainAutoreleasedReturnValue();
        FUN_016afc90();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = lVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        lVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_9c = 1;
        local_90 = lVar3;
        _objc_storeStrong(&local_d8,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = lVar3;
        local_9c = 1;
      }
      _objc_storeStrong(&local_d0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = lVar3;
      local_9c = 1;
    }
    _objc_storeStrong(local_c8);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_90);
  return;
}

