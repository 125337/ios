// FUN_006c0ab0 @ 006c0ab0

void FUN_006c0ab0(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  char *local_38;
  undefined4 local_30;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (undefined *)0x0) ||
     (puVar1 = PTR_WCRefineQuickRemarkEditor_026ce820,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineQuickRemarkEditor_026ce820,PTR_s_shouldHandleTopBarLongPress_026a68e0),
     ((ulong)puVar1 & 1) == 0)) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    pcVar2 = "BaseMsgContentViewController";
    _objc_getClass();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (undefined *)0x0;
      local_30 = 1;
    }
    else {
      puVar1 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,local_38);
      if (((ulong)puVar1 & 1) == 0) {
        local_18 = (undefined *)0x0;
      }
      else {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_20;
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_18 = local_40;
        if (puVar4 == puVar1) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          local_18 = (undefined *)0x0;
        }
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

