// FUN_016af464 @ 016af464

void FUN_016af464(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long local_a0;
  long local_98 [4];
  long local_78;
  undefined4 local_6c;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  if (local_68 == 0) {
    local_60 = 0;
    local_6c = 1;
  }
  else {
    local_78 = 0;
    lVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_78;
    local_78 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_78;
    local_58 = &cf_filePath;
    local_50 = &cf_path;
    local_48 = &cf_localPath;
    local_40 = &cf_downloadPath;
    local_38 = &cf_m_nsFilePath;
    local_30 = &cf_m_nsPath;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_016afc90();
    _objc_retainAutoreleasedReturnValue();
    local_98[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_98[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_length_0269cca0);
    lVar3 = local_98[0];
    if (lVar1 == 0) {
      lVar3 = local_68;
      FUN_016aa360(0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = lVar3;
      FUN_016b0078();
      _objc_retainAutoreleasedReturnValue();
      local_6c = 1;
      local_60 = lVar3;
      _objc_storeStrong(&local_a0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = lVar3;
      local_6c = 1;
    }
    _objc_storeStrong(local_98);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_60);
  return;
}

