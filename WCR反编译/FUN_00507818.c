// FUN_00507818 @ 00507818

void FUN_00507818(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *local_28;
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isLocked_0269db88);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_applyLockedStateFromQuickAction__0269e568,(uint)puVar2 ^ 1);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLongPressToastEnabled_026a4648);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = &cf_y__YS_;
    if (((ulong)puVar1 & 1) == 0) {
      pcVar3 = &cf_y__YS_>f_y;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar3);
  }
  pcVar3 = &cf_reloadSessions;
  _NSSelectorFromString();
  uVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar3);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

