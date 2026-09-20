// _WCRefineAIReplyMenuAvailableForCell @ 0000fc08

byte _WCRefineAIReplyMenuAvailableForCell(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined *local_50;
  char *local_48;
  long local_40;
  undefined4 local_38;
  undefined *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatAgentReplyAll_0269ce80);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatAgentEnabled_0269ce88);
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
      local_38 = 1;
      goto LAB_0000ff94;
    }
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isChatProviderConfigured_0269ce90);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    lVar2 = local_20;
    FUN_0000ffec();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "SettingUtil";
    local_40 = lVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    lVar2 = local_40;
    local_48 = pcVar3;
    FUN_00010240(local_40,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_effectiveSessionOptionsForID__0269cea0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar1 = local_28;
    FUN_0001065c(local_28,local_50);
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      lVar2 = local_40;
      FUN_00010978();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = lVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    local_38 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
LAB_0000ff94:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

