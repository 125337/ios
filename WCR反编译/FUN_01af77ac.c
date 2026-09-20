// FUN_01af77ac @ 01af77ac

void FUN_01af77ac(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_1);
  pcVar1 = local_48;
  FUN_01b02770();
  _objc_retainAutoreleasedReturnValue();
  local_40 = &cf_m_nsHeadImgUrl;
  local_38 = &cf_m_nsHDHeadImgUrl;
  local_30 = &cf_getContactHeadImageURL;
  local_28 = &cf_getHeadImgUrl;
  local_20 = &cf_getBigHeadImgUrl;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  _objc_retainAutoreleasedReturnValue();
  FUN_01b02a20();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_70 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

