// FUN_0093e394 @ 0093e394

void FUN_0093e394(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_78;
  ulong local_70;
  uint local_64;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  local_40 = &cf_GetImagePath;
  local_38 = &cf_getImgPath;
  local_30 = &cf_getMiddleImgPath;
  local_28 = &cf_getThumbImagePath;
  local_20 = &cf_GetThumbPath;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  _objc_retainAutoreleasedReturnValue();
  FUN_0094148c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar1;
    }
    local_64 = (uint)(puVar1 != (undefined *)0x0);
    _objc_storeStrong(&local_60,0);
    if (local_64 != 0) goto LAB_0093e6b8;
  }
  uVar2 = local_50;
  FUN_00941344(0,local_50,&cf_m_dtImg);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_70 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    uVar2 = local_50;
    FUN_00941344(local_50,&cf_m_dtThumbnail);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_78 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      local_48 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
    }
    local_64 = 1;
    _objc_storeStrong(&local_78,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_64 = 1;
    local_48 = puVar1;
  }
  _objc_storeStrong(&local_70,0);
LAB_0093e6b8:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

