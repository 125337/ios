// FUN_000bdb74 @ 000bdb74

void FUN_000bdb74(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isEntryVisibleForCurrentUser_0269e560);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__SeQSNS);
  }
  else {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_enabled_0269db80);
    puVar1 = local_20;
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__S_g_T_u);
      local_30 = 1;
    }
    else if ((local_11 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_applyLockedStateFromQuickAction__0269e568,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_y__YS_);
      local_30 = 1;
    }
    else {
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_000bde50;
      local_40 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_authenticateTitleLongPressSucces_0269e570,&local_58);
      _objc_storeStrong(&local_38,0);
      local_30 = 0;
    }
    _objc_storeStrong(&local_20,0);
  }
  return;
}

