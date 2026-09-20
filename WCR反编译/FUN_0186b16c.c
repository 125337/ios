// FUN_0186b16c @ 0186b16c

void FUN_0186b16c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = false;
  local_28 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_sheet_026aa728);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sheet_026aa728);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sheet_026aa728);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

