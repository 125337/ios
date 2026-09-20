// wcr_sendSelection @ 01699acc

/* Function Stack Size: 0x10 bytes */

void WCRWordSegPickerController::wcr_sendSelection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_f0;
  undefined *local_88;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_58;
  undefined *local_50;
  uint local_48;
  ID local_38;
  SEL local_30;
  undefined *local_28;
  
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_selectedText_026b2a38);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQpbnR);
    local_48 = 1;
    goto LAB_0169a060;
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatViewController_026b2a78);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (undefined *)0x0;
  local_50 = puVar1;
  if ((puVar1 != (undefined *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0),
     ((ulong)puVar1 & 1) != 0)) {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_delegate_0269d0e0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_58 == (undefined *)0x0) && (local_50 != (undefined *)0x0)) {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_m_delegate);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_61 = 0;
  if ((local_58 != (undefined *)0x0) &&
     (puVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_SendTextMessage__0269d028),
     ((ulong)puVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_SendTextMessage__0269d028,local_38);
    local_61 = 1;
  }
  if ((local_61 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUserName_026a63c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar2 == (undefined *)0x0) {
      local_f0 = PTR_WCRefineLinkMediaSender_026ce170;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_f0;
    }
    else {
      local_f0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUserName_026a63c0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_f0;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_38,
                 local_70);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elnx_J_Y_a);
    }
    local_48 = (uint)(puVar1 == (undefined *)0x0);
    _objc_storeStrong(&local_70,0);
    if (local_48 == 0) goto LAB_0169a01c;
  }
  else {
LAB_0169a01c:
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_dismiss_026b2978);
    local_48 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_0169a060:
  _objc_storeStrong(&local_38,0);
  return;
}

