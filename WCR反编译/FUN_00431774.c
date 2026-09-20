// FUN_00431774 @ 00431774

void FUN_00431774(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_30;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    _os_unfair_lock_lock(&DAT_028ca850);
    if (DAT_028ca858 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_026ce6b8;
      _objc_alloc_init();
      puVar3 = DAT_028ca858;
      DAT_028ca858 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                 &cf_en_US_POSIX);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca858,PTR_s_setLocale__0269d1c0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca858,PTR_s_setNumberStyle__026a3858,1);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca858,PTR_s_setAllowsFloats__026a3860,1);
    }
    puVar3 = DAT_028ca858;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca858,PTR_s_numberFromString__026a3868,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    _os_unfair_lock_unlock(&DAT_028ca850);
    puVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

