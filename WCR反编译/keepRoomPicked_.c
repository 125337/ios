// keepRoomPicked: @ 0189f878

/* Function Stack Size: 0x18 bytes */

void WCRefineChatRoomDuplicateJoinViewController::keepRoomPicked_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ID local_50;
  ulong local_38;
  ID local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingKeepRooms_026b74c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  if (IVar1 == 0) {
    local_50 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_38 = 0;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_clickedButtonIndex_026b74c8);
  if ((uVar2 & 1) != 0) {
    local_38 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_clickedButtonIndex_026b74c8);
  }
  if ((-1 < (long)local_38) &&
     (IVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     IVar1 = local_18, (long)local_38 < (long)IVar3)) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingItem_026b7490);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_kickItem_keepRoom__026b74a8,IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

