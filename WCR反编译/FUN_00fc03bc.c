// FUN_00fc03bc @ 00fc03bc

void FUN_00fc03bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_quark_____);
  _objc_retainAutoreleasedReturnValue();
  local_20 = &cf_quark___pan_quark_cn_s_138cf368c842;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_openExternalLinkPreferSchemes_ht_026ad018,puVar3,
             &cf_https___pan_quark_cn_s_138cf368c842);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

