// FUN_00677d94 @ 00677d94

void FUN_00677d94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00678108(local_18,PTR_s_pattedUserName_026a37c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  FUN_00678108(local_18,PTR_s_chatUserName_026a63c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_38[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_displayNameForUser_inRoom__0269ecd0,
             local_20,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  FUN_00678300();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

