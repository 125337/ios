// FUN_00f62308 @ 00f62308

void FUN_00f62308(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFindUserSupport_026ceb40,PTR_s_openProfileForQuery__026ac808,local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

