// FUN_01559ddc @ 01559ddc

void FUN_01559ddc(long param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if ((DAT_028e39a1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == lVar2) {
      FUN_01559c44(*(undefined8 *)(param_1 + 0x20));
      FUN_01559ec8();
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

