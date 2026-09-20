// FUN_008ced34 @ 008ced34

byte FUN_008ced34(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_6c;
  long local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  long *plVar2;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_008cf3c8();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_008ce8a8();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_11 = 0;
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_6c = 0;
      if (((ulong)puVar5 & 1) != 0) {
        lVar3 = local_20;
        _WCRChatAttachmentLiveContainsIdentifier(local_20,_WCRChatAttachmentPluginVoicePackID);
        local_6c = (uint)lVar3;
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((local_6c & 1) == 0) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

