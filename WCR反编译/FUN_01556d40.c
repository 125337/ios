// FUN_01556d40 @ 01556d40

void FUN_01556d40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_membersInvitedByCurrentUserInRoo_026ab660
             ,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_28 = puVar2;
  FUN_0152c8e8(local_18,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

