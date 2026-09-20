// wcr_contactForName: @ 00eddb28

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomMuteHelper::wcr_contactForName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactMgr_026ab088);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar1;
    if ((IVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       (IVar1 & 1) == 0)) {
      local_18 = 0;
    }
    else {
      IVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

