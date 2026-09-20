// loadNextSessionPage @ 015fe888

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatRuntime::loadNextSessionPage(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_90;
  uint local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_6c = 1;
  if ((IVar1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionHasMore_026b1758);
    local_6c = 1;
    if ((IVar1 & 1) != 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingNextSessionPage_026b1750);
      local_6c = (uint)IVar1;
    }
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_6c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLoadingNextSessionPage__026b1748,1);
    local_28 = 0x1e;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionPageLimit_026b1710);
    local_90 = IVar1;
    if ((long)IVar1 < 0x1f) {
      local_90 = 0x1e;
    }
    local_38 = local_90;
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setSessionPageLimit__026b1730,local_90 + 0x1e);
    _objc_initWeak(auStack_40,local_18);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_015feaa4;
    local_50 = &DAT_0257be28;
    _objc_copyWeak(auStack_48,auStack_40);
    _dispatch_async(puVar2,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  return;
}

