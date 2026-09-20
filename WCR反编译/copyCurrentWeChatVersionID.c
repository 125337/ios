// copyCurrentWeChatVersionID @ 01f4d79c

/* Function Stack Size: 0x10 bytes */

void WCRefineVersionController::copyCurrentWeChatVersionID(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentWeChatVersionIDText_026c8fa0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEqualToString__0269ccc8,&cf__gw);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Hr_g);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

