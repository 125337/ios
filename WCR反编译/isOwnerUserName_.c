// isOwnerUserName: @ 00ee0730

/* Function Stack Size: 0x18 bytes */

bool WCRefineChatRoomMuteHelper::isOwnerUserName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if ((IVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isOwner_026ab7a0), (IVar1 & 1) == 0)
     ) {
    local_11 = 0;
  }
  else {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOwner_026ab7a0);
    local_11 = (byte)IVar1 & 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

