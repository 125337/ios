// FUN_003c1e90 @ 003c1e90

void FUN_003c1e90(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_48;
  char *local_30;
  undefined4 local_24;
  char *local_20;
  char *local_18;
  
  pcVar1 = "ChatBoxMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    FUN_003612b8(pcVar1,&cf_getChatBoxSession);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      pcVar2 = local_20;
      FUN_003612b8(local_20,&cf_chatBoxSession);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_30 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_48 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_48;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

