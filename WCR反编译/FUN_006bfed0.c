// FUN_006bfed0 @ 006bfed0

void FUN_006bfed0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (puVar1 = PTR_WCRefineQuickRemarkEditor_026ce820,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineQuickRemarkEditor_026ce820,PTR_s_shouldHandleTopBarLongPress_026a68e0),
     ((ulong)puVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    if (DAT_028cc1f0 == (char *)0x0) {
      pcVar4 = "MMTitleView";
      _objc_getClass();
      DAT_028cc1f0 = pcVar4;
    }
    pcVar4 = DAT_028cc1f0;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar4);
    if ((uVar2 & 1) != 0) {
      FUN_006c00cc(local_18,local_30);
    }
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

