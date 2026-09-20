// FUN_015ff9a8 @ 015ff9a8

void FUN_015ff9a8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = lVar2 != 0;
  local_28 = lVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_buildItems_026b1788);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

