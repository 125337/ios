// FUN_00679db8 @ 00679db8

void FUN_00679db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long local_b8;
  byte local_39;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if ((((ulong)puVar3 & 1) != 0) && (bVar1 = true, local_18 != 0)) {
    lVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    bVar1 = lVar4 == 0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((!bVar1) &&
      (puVar2 = PTR_WCRefineHelper_026ce000,
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                 local_20), ((ulong)puVar2 & 1) == 0)) &&
     (puVar2 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_28
               ), ((ulong)puVar2 & 1) == 0)) {
    _WCRPatSendBypassConfirmBegin();
    local_39 = 0;
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isChatRoomID__0269ec68,local_28);
    if ((((ulong)puVar2 & 1) == 0) ||
       (uVar5 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,
                  PTR_s_sendPatToUser_inGroup_scene__026a63d8), (uVar5 & 1) == 0)) {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_sendPatToUser_scene__026a63e0);
      if ((uVar5 & 1) != 0) {
        uVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_sendPatToUser_scene__026a63e0,local_20,0);
        local_39 = (byte)uVar5;
      }
    }
    else {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_sendPatToUser_inGroup_scene__026a63d8,local_20,local_28,0);
      local_39 = (byte)uVar5;
    }
    _WCRPatSendBypassConfirmEnd();
    if ((local_39 & 1) != 0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        local_b8 = local_20;
      }
      else {
        local_b8 = local_28;
      }
      FUN_0067a1f4(local_b8,local_20);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

