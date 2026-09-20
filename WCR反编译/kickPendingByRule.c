// kickPendingByRule @ 0189f0e0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomDuplicateJoinViewController::kickPendingByRule(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingItem_026b7490);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  IVar1 = local_28;
  puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  if (param_1 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_preferredKeepRoomForDuplicate_ke_0269edb0,IVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_kickItem_keepRoom__026b74a8,local_28,local_38);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(param_1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

