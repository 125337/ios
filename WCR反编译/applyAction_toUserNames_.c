// applyAction:toUserNames: @ 00ee1894

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineChatRoomMuteHelper::applyAction_toUserNames_
          (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  long_long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong local_50;
  unsigned_long_long local_40;
  ID local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_userNames_needingAction__026ab7d0,local_30,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
  for (local_50 = 0; IVar4 = local_18, lVar1 = local_28, local_50 < IVar2; local_50 = local_50 + 1)
  {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_applyAction_toUserName_sync__026ab7d8,lVar1,IVar3,local_50 + 1 == IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) != 0) {
      local_40 = local_40 + 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_40;
}

