// room:allowedByAllGroups:selected: @ 00ed113c

/* Function Stack Size: 0x24 bytes */

bool WCRefineChatRoomKickHelper::room_allowedByAllGroups_selected_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_30);
  if ((IVar1 & 1) == 0) {
    local_11 = 0;
  }
  else if ((local_31 & 1) == 0) {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_30);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

