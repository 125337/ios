// FUN_001eb128 @ 001eb128

void FUN_001eb128(long param_1)

{
  bool bVar1;
  long lVar2;
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
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (!bVar1) {
    FUN_001e8ccc(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

