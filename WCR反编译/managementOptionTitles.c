// managementOptionTitles @ 01aab314

/* Function Stack Size: 0x10 bytes */

ID WCRGroupCreateViewController::managementOptionTitles(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_telegramStyle_026bdb90);
  bVar1 = true;
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingGroupId_026bdb58);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  if (bVar1) {
    local_30 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    local_28 = &cf_Y6RR_I;
    local_20 = &cf_TekebXT;
    local_30 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_30;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

