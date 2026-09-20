// FUN_0093fa90 @ 0093fa90

void FUN_0093fa90(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long local_c8;
  long local_a0;
  undefined4 local_98;
  byte local_91;
  long local_90;
  long local_88;
  byte local_79;
  long local_78;
  long local_70;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_2);
  lVar1 = local_70;
  local_79 = param_3;
  FUN_0093e394();
  _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_c8 = lVar1;
  if (lVar1 == 0) {
    local_c8 = local_78;
    FUN_0093e70c();
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_c8;
  }
  local_91 = lVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_c8;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar3 = local_70;
  lVar1 = local_88;
  if ((local_88 == 0) && ((local_79 & 1) != 0)) {
    local_48 = &cf_GetPathOfMesVideoWithMessageWrap_;
    local_40 = &cf_GetPathOfRawOrCompressVideo_;
    local_38 = &cf_GetTempPathOfMesVideoWithMessageWrap_;
    local_30 = &cf_GetPathOfAppData_;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00942d18();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar3 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    lVar1 = local_70;
    if (lVar3 == 0) {
      local_60 = &cf_getFormatVideoPath;
      local_58 = &cf_GetDataPath;
      local_50 = &cf_GetTempFilePath;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      FUN_0094148c();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_a0;
      local_a0 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    lVar1 = local_a0;
    FUN_009431e4();
    _objc_retainAutoreleasedReturnValue();
    local_98 = 1;
    local_68 = lVar1;
    _objc_storeStrong(&local_a0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    local_98 = 1;
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

