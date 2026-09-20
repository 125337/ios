// privateFriendNotifyOpenForUsername:found: @ 0110f154

/* Function Stack Size: 0x20 bytes */

bool WCRefinePrivateFriendManager::privateFriendNotifyOpenForUsername_found_
               (ID param_1,SEL param_2,ID param_3,bool *param_4)

{
  bool bVar1;
  ID IVar2;
  ID local_80;
  ID local_50;
  ID local_48;
  ID local_40;
  bool *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (param_4 != (bool *)0x0) {
    *(undefined1 *)param_4 = 0;
  }
  IVar2 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    local_80 = 0;
  }
  else {
    local_80 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactByName__0269d178,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_48 == 0) ||
     (IVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_isChatStatusNotifyOpen_026ab748),
     (IVar2 & 1) == 0)) {
    local_11 = 1;
  }
  else {
    if (local_38 != (bool *)0x0) {
      *(undefined1 *)local_38 = 1;
    }
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isChatStatusNotifyOpen_026ab748);
    local_11 = (byte)IVar2 & 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

