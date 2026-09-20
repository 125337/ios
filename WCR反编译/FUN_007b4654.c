// FUN_007b4654 @ 007b4654

void FUN_007b4654(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = true;
  local_28 = lVar2;
  if (lVar2 != 0) {
    _objc_getAssociatedObject(lVar2,DAT_026f4650);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (!bVar1) {
    _objc_setAssociatedObject(local_28,DAT_026f4650,0,1);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    bVar1 = true;
    if (lVar2 != 0) {
      lVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026f4658);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained();
      bVar1 = lVar3 != param_1;
      (*(code *)PTR__objc_release_02578630)(param_1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (!bVar1) {
      FUN_007ad034(local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

