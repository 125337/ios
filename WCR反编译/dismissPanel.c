// dismissPanel @ 01d1eb48

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickReplyPanel::dismissPanel(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sheet_026aa728);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSheet__026aa770);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
  _objc_storeStrong(&local_28,0);
  return;
}

