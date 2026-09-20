// optionTitles @ 01aab180

/* Function Stack Size: 0x10 bytes */

ID WCRGroupCreateViewController::optionTitles(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedScope_026bdbd8);
  if (IVar1 == 1) {
    local_28 = &cf_mRgS;
    local_20 = &cf_NJ_YRhb;
    local_58 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedScope_026bdbd8);
    local_58 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    if (param_1 == 2) {
      local_38 = &cf_mR_J;
      local_30 = &cf_NJ_YRhb;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      local_50 = &cf_mRgS;
      local_48 = &cf_mR_J;
      local_40 = &cf_NJ_YRhb;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_58;
}

