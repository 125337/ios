// FUN_00593970 @ 00593970

void FUN_00593970(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  char *local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_00593cb8;
  }
  pcVar1 = "WCNewCommitViewController";
  _objc_getClass();
  uVar2 = local_20;
  local_30 = pcVar1;
  _objc_getAssociatedObject(local_20,PTR_s_wcr_momentsCommitBuildToken_026a5538);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar2;
  if ((local_30 == (char *)0x0) || (uVar2 == 0)) {
LAB_00593a7c:
    local_50 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_tableView_0269e378);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    while (local_58 != 0) {
      if (local_30 != (char *)0x0) {
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_30);
        uVar2 = local_58;
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
          local_24 = 1;
          goto LAB_00593c4c;
        }
      }
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
      if ((uVar2 & 1) == 0) {
        local_24 = 2;
        goto LAB_00593c4c;
      }
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_24 = 2;
LAB_00593c4c:
    _objc_storeStrong(&local_58,0);
    iVar4 = local_24 + -2;
    if (iVar4 == 0) {
      local_18 = 0;
      iVar4 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(iVar4,&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,local_30);
    uVar3 = local_48[0];
    if ((uVar2 & 1) == 0) goto LAB_00593a7c;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_24 = 1;
  }
  _objc_storeStrong(local_48,0);
LAB_00593cb8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

