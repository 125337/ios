// FUN_0092fa40 @ 0092fa40

void FUN_0092fa40(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_30;
  undefined4 local_28;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = 0;
  _OSAtomicCompareAndSwap32(0,1,&DAT_028cf3b0);
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_callStackSymbols_026aa4e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_callStackSymbols_026aa4e0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_30;
      local_30 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reason_0269de08);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    puVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_callStackReturnAddresses_026aa6f8);
    _objc_retainAutoreleasedReturnValue();
    FUN_00931a0c(&cf_UncaughtException,puVar4,puVar5,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_30,0);
    pcVar1 = DAT_028ce398;
    if ((DAT_028ce398 != (code *)0x0) && (DAT_028ce398 + -0x92fa40 != (code *)0x0)) {
      _NSSetUncaughtExceptionHandler(DAT_028ce398 + -0x92fa40,DAT_028ce398);
      (*pcVar1)(local_18);
    }
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

