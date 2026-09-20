// checkPasscode @ 0000a4cc

/* WARNING: Removing unreachable block (ram,0x0000a634) */
/* WARNING: Removing unreachable block (ram,0x0000a714) */
/* Function Stack Size: 0x10 bytes */

void EncryptionLock::checkPasscode(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined *local_48;
  undefined *local_40 [3];
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_readEncryptionPassword_0269ccc0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enteredCode_0269cc98);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_026cdff8;
    _objc_alloc_init();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_notificationOccurred__0269ccd0,2);
    _objc_storeStrong(&local_48,0);
    IVar1 = local_18;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_failedAttempts_0269cce0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setFailedAttempts__0269ccd8,IVar2 + 1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_failedAttempts_0269cce0);
    if ((long)IVar1 < 5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetPasscode_0269cbc0);
      puVar4 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_failedAttempts_0269cce0);
      lVar5 = 5 - IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__x_g_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__x,puVar3,&cf_nx_,
                 &PTR___NSConcreteGlobalBlock_02578cd0,in_x6,in_x7,lVar5);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyLockout_0269cce8);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_026cdff8;
    _objc_alloc_init();
    local_40[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_notificationOccurred__0269ccd0,0);
    _objc_storeStrong(local_40,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFailedAttempts__0269ccd8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_unlockApp_0269cc20);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

