// setPrivateFriendNotifyOpen:username: @ 0110f3ec

/* Function Stack Size: 0x1c bytes */

bool WCRefinePrivateFriendManager::setPrivateFriendNotifyOpen_username_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ID IVar1;
  ID local_88;
  byte local_65 [5];
  undefined *local_60;
  byte local_51;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  byte local_29;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_29 = (byte)param_3;
  local_38 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_40 = IVar1;
  if ((IVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     (IVar1 & 1) == 0)) {
    local_88 = 0;
  }
  else {
    local_88 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactByName__0269d178,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_88;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  local_60 = PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0;
  if (((local_40 == 0) || (local_48 == 0)) ||
     (IVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,
                PTR_s_ChangeNotifyStatus_withStatus_sy_026a2ee0), (IVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    local_65[0] = 0;
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_privateFriendNotifyOpenForUserna_026aef00,local_38,local_65);
    if (((local_65[0] & 1) == 0) || (((byte)IVar1 & 1) != (local_29 & 1))) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_60,local_48,local_29 & 1,1);
      local_11 = 1;
    }
    else {
      local_11 = 1;
    }
  }
  local_65[1] = 1;
  local_65[2] = 0;
  local_65[3] = 0;
  local_65[4] = 0;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

