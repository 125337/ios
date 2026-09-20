// visibleGroupTitles @ 01ed6404

/* Function Stack Size: 0x10 bytes */

ID WCRToDoAdjustmentFloatingPanel::visibleGroupTitles(ID param_1,SEL param_2)

{
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01ed6148();
  local_48 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  if ((param_1 & 1) == 0) {
    local_40 = &cf_aSGr;
    local_38 = &cf_Q_;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,2
              );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    local_30 = &cf_aSGr;
    local_28 = &cf_Q_u;
    local_20 = &cf_Q_;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_48;
}

