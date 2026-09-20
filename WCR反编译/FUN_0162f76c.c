// FUN_0162f76c @ 0162f76c

byte FUN_0162f76c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_5c;
  ulong local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  uVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_49 = 0;
    local_5c = 1;
  }
  else {
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_chat_);
    if ((uVar1 & 1) == 0) {
      local_48 = _WCRChatToolbarActionKey;
      local_30 = local_58;
      local_40 = _WCRChatToolbarTitleKey;
      local_28 = local_58;
      local_38 = _WCRChatToolbarEnabledKey;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_20 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_48,3);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      (*(code *)PTR__objc_release_02578630)();
      FUN_0162be00();
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      FUN_0162e8e8();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_78;
      local_88 = puVar3;
      _WCRChatToolbarDispatch(local_78,puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                   &cf_S_MRubelgbL_wQhR_O);
      }
      local_49 = 1;
      local_5c = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    else {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringFromIndex__0269d120,5);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      FUN_0162be00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_68;
      puVar3 = PTR_WCRefineConfig_026cdf58;
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _WCRChatToolbarOpenContact(uVar1,puVar4,local_70);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NNS_u);
      }
      local_49 = 1;
      local_5c = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_49 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

