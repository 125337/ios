// FUN_01cc67c4 @ 01cc67c4

undefined * FUN_01cc67c4(void)

{
  undefined *puVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = &cf_custom_page_plugins_hub;
  local_30 = &cf_WCPluginsViewController;
  local_40 = &cf_custom_page_wcrefine_hub;
  local_28 = &cf_WCRefineRootViewController;
  local_38 = &cf_custom_page_font_beautify;
  local_20 = &cf_WCRefineFontBeautifyViewController;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_48,3);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return puVar1;
}

