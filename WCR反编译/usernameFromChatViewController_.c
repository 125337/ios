// usernameFromChatViewController: @ 00ffad50

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::usernameFromChatViewController_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ulong local_70;
  ID local_68 [4];
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_containsString__0269d0b0,&cf_BaseMsgContentViewController);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_containsString__0269d0b0,&cf_MsgContentViewController),
       (uVar1 & 1) == 0)) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if (local_48 == 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_contact);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_usernameFromContact__026ad888,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
      if (IVar3 == 0) {
        local_70 = 0;
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_delegate_0269d0e0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_70;
          local_70 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        if (local_70 == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_delegate)
          ;
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_70;
          local_70 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_usernameFromLogicController__0269db98,local_70);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_68[0];
        local_68[0] = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        _objc_storeStrong(&local_70,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0);
      IVar3 = local_68[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar3;
      local_34 = 1;
      _objc_storeStrong(local_68);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

