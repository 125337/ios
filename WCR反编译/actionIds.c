// actionIds @ 00fe83a4

/* Function Stack Size: 0x10 bytes */

ID WCRefineInputBoxGestureSupport::actionIds(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = &cf_none;
  local_58 = &cf_undo;
  local_50 = &cf_paste;
  local_48 = &cf_clipboard;
  local_40 = &cf_quickReply;
  local_38 = &cf_clear;
  local_30 = &cf_copyAll;
  local_28 = &cf_cut;
  local_20 = &cf_hideKeyboard;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,9);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return (ID)puVar1;
}

