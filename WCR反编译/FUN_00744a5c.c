// FUN_00744a5c @ 00744a5c

byte FUN_00744a5c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_38;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_smallSignalAttachmentSendEnabled_026a7ca8)
     , ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatAttachmentCustomizeEnabled_0269f500);
    if ((((ulong)puVar1 & 1) == 0) ||
       (uVar2 = local_20,
       _WCRChatAttachmentLiveContainsIdentifier(local_20,_WCRChatAttachmentPluginSmallSignalID),
       (uVar2 & 1) == 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_chatName_026a7cb0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if ((uVar2 == 0) || (uVar2 = local_40, FUN_00744988(), (uVar2 & 1) != 0)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 0;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

