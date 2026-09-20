// textFieldDidEndEditing: @ 01dc4aa0

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::textFieldDidEndEditing_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (lVar1 == 0x21) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_commitScanCapField__026c5348,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

