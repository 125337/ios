// wcr_applyBottomInset: @ 00f946fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRPageSheetMultilineInsetBinder::wcr_applyBottomInset_(ID param_1,SEL param_2,double param_3)

{
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  double local_48;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_baseInset_026aaff0);
    local_48 = in_d2;
    if (1.0 < local_28) {
      local_48 = in_d2 + local_28 + 12.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,in_d1,local_48,in_d3,local_30,PTR_s_setContentInset__0269e770);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,in_d1,local_48,in_d3,local_30,PTR_s_setScrollIndicatorInsets__0269e778);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_scrollCaretIntoView_026acce8);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

