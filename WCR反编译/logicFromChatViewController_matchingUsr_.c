// logicFromChatViewController:matchingUsr: @ 00ffb1a4

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkMediaSender::logicFromChatViewController_matchingUsr_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ID IVar4;
  ID local_70 [4];
  ulong local_50;
  ulong local_48;
  int local_3c;
  long local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == 0) {
    local_18 = 0;
    local_3c = 1;
    goto LAB_00ffb4bc;
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_containsString__0269d0b0,&cf_BaseMsgContentViewController);
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    local_50 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_delegate_0269d0e0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_50 == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_delegate);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_50 == 0) {
      local_18 = 0;
      local_3c = 1;
    }
    else {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (lVar3 != 0) {
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_usernameFromLogicController__0269db98,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_70[0] = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
        if ((IVar4 == 0) ||
           (IVar4 = local_70[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_70[0],PTR_s_isEqualToString__0269ccc8,local_38), (IVar4 & 1) != 0)) {
          local_3c = 0;
        }
        else {
          local_18 = 0;
          local_3c = 1;
        }
        _objc_storeStrong(local_70,0);
        if (local_3c != 0) goto LAB_00ffb49c;
      }
      uVar1 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_3c = 1;
    }
LAB_00ffb49c:
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_00ffb4bc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

