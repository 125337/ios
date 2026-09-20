// FUN_016c1b90 @ 016c1b90

void FUN_016c1b90(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_58;
  cfstringStruct *local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_016bec28();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_3c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_016aed70();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_clickEditRevokeContent_;
    local_48 = uVar1;
    _NSSelectorFromString();
    local_50 = pcVar2;
    if ((local_48 == 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2),
       (uVar1 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubelY_umo_);
      local_3c = 1;
    }
    else {
      puVar3 = PTR_WCRQuickReusePayload_026ceeb8;
      _objc_alloc_init();
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setReEditStringContent__026a4258,local_38[0]);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCanReEdit__026a4268,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setReEditReferMsgSvrId__026a4278,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setReEditAtUserList__026a4288,&cf___);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_58);
      _objc_storeStrong(&local_58,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

