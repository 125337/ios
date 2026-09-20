// handlePasscodeConfirm: @ 010f1e70

/* Function Stack Size: 0x18 bytes */

void WCRefinePageLockGuard::handlePasscodeConfirm_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentPasscodeAlert__026aebe8,0);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &::cf___;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    _objc_storeStrong(&local_30,local_88);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38),
     ((ulong)pcVar1 & 1) == 0)) {
    IVar4 = local_18;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_passcodeAttempts_026aec50);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setPasscodeAttempts__026aebe0,IVar3 + 1);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_passcodeAttempts_026aec50);
    if ((long)IVar4 < 5) {
      dVar5 = _dispatch_time(0,300000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_18;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_010f2224;
      local_50 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar4;
      _dispatch_after(dVar5,puVar6,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x_kpeYzT);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishAuthWithCancel_026aec48);
      local_3c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishAuthWithSuccess_026aec40);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

