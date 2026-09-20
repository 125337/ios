// FUN_003a1e48 @ 003a1e48

void FUN_003a1e48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (local_18 != 0) {
    lVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    FUN_0037fccc(local_18,&cf_didSelect);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

