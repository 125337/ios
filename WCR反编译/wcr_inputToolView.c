// wcr_inputToolView @ 009da500

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::wcr_inputToolView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentChatViewController_026ab018);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_inputToolView_0269d0e8);
    if ((param_1 & 1) != 0) {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_40;
      local_40 = IVar1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (local_40 == 0) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_inputToolView_0269d0f0);
      if ((IVar2 & 1) != 0) {
        IVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_inputToolView_0269d0f0);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_40;
        local_40 = IVar1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

