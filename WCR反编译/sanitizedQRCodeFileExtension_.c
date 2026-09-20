// sanitizedQRCodeFileExtension: @ 01f34d88

/* Function Stack Size: 0x18 bytes */

ID WCRefineUIBeautifyViewController::sanitizedQRCodeFileExtension_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_a8;
  cfstringStruct *local_80;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  if (local_60 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_60;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(local_80);
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_48 = &cf_png;
  local_40 = &cf_jpg;
  local_38 = &cf_jpeg;
  local_30 = &cf_gif;
  local_28 = &cf_webp;
  local_20 = &cf_heic;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsObject__0269cbb8,local_68);
  if (((ulong)puVar1 & 1) == 0) {
    local_a8 = &cf_png;
  }
  else {
    local_a8 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_a8;
}

