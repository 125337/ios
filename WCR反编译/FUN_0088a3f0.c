// FUN_0088a3f0 @ 0088a3f0

void FUN_0088a3f0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = true;
  local_28 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (!bVar1) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087e290();
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

