// FUN_00454ac4 @ 00454ac4

void FUN_00454ac4(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "EmoticonBoardPageWrap";
  _objc_getClass();
  local_20 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    _objc_alloc_init();
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setPageType__026a3d48);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPageType__026a3d48,1);
    }
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setPid__026a3d50);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPid__026a3d50,_WCRLocalEmoticonPid);
    }
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setPackageName__026a3d58);
    pcVar1 = local_28;
    puVar3 = PTR_s_setPackageName__026a3d58;
    if (((ulong)pcVar2 & 1) != 0) {
      FUN_004528d4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setPackEmoticonCount__026a3d60);
    if (((ulong)pcVar1 & 1) != 0) {
      _CFAbsoluteTimeGetCurrent();
      puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_boardItemCount_026a3d68);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPackEmoticonCount__026a3d60,puVar3);
    }
    pcVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

