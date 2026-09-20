// wcr_clearInputReplyingMessageIfNeeded @ 009da904

/* Function Stack Size: 0x10 bytes */

void WCRefineAnonymousAtHelper::wcr_clearInputReplyingMessageIfNeeded(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_inputToolView_026ab058);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if ((param_1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_setReplyingMessage__026ab068),
     (param_1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setReplyingMessage__026ab068,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

