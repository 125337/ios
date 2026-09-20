// showClickActionSheet @ 01c3fe24

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateLibraryViewController::showClickActionSheet(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = &cf__Ne;
  local_20 = &::cf__;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showSheetTitle_items_tag__026c1b40,&cf_Lrd_O,puVar1,0x62d8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

