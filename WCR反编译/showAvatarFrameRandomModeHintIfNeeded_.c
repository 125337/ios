// showAvatarFrameRandomModeHintIfNeeded: @ 01820b50

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarCornerBeautifyViewController::showAvatarFrameRandomModeHintIfNeeded_
               (ID param_1,SEL param_2,long_long param_3)

{
  char *pcVar1;
  char *local_40;
  char *local_38;
  char *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_30 = pcVar1;
    if (local_28 == 1) {
      _objc_alloc(0);
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bwSN,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
      _objc_storeStrong(&local_38,0);
    }
    else if (local_28 == 2) {
      _objc_alloc(0);
      (*(code *)PTR__objc_msgSend_02578628)();
      local_40 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bwSN,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
      _objc_storeStrong(&local_40,0);
    }
  }
  return;
}

