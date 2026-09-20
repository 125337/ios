// usernameFromLogicController: @ 00ffab28

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::usernameFromLogicController_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ID local_60 [4];
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
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_40 == 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0),
       (uVar2 & 1) != 0)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_usernameFromContact__026ad888,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    IVar3 = local_60[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_34 = 1;
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

