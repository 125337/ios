// applyLockout @ 0000b2f4

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::applyLockout(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  undefined8 local_28;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_failedAttempts_0269cce0);
  FUN_0000b468(2,IVar1 - 5);
  local_28 = (long)in_d0;
  if (local_28 < 1) {
    local_28 = 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)((double)(local_28 * 0x3c));
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLockoutEndTime__0269cd20);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showLockoutMessage_0269cbe8);
  return;
}

