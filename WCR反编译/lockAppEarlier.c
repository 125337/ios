// lockAppEarlier @ 0000b83c

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::lockAppEarlier(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  double dVar4;
  double local_28;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEncryptionEnabled_0269cb38);
  if ((IVar2 & 1) != 0) {
    dVar4 = 0.0;
    local_28 = 0.0;
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastBackgroundTime_0269cb70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastBackgroundTime_0269cb70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_timeIntervalSinceDate__0269cb78);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_28 = dVar4;
    }
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastBackgroundTime_0269cb70);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if (IVar2 != 0) {
      dVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeoutInterval_0269cb80);
      bVar1 = dVar4 < local_28;
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupLockWindow_0269cbd8);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentLockScreenIfNeeded_0269cb98);
    }
  }
  return;
}

