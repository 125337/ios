// wcr_deleteConfirmMessageForItem: @ 01f77144

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackManagerViewController::wcr_deleteConfirmMessageForItem_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_28 = local_30;
  if (local_40 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_nxRd;
  }
  else {
    local_20 = local_40;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_deleteConfirmMessageForItems_026c99a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_28;
}

