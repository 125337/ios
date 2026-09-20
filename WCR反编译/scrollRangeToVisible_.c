// scrollRangeToVisible: @ 0195a628

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRFileEditorTextView::scrollRangeToVisible_
          (WCRFileEditorTextView *this,ID param_1,SEL param_2,_NSRange param_3)

{
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  unsigned_long_long local_20;
  unsigned_long_long local_18;
  
  local_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrSuppressAutoScroll_026b9c98);
  if ((param_1 & 1) == 0) {
    local_40 = local_28;
    local_38 = PTR_WCRFileEditorTextView_026cfd10;
    _objc_msgSendSuper2(&local_40,PTR_s_scrollRangeToVisible__026aa0d8,local_20,local_18);
  }
  return;
}

