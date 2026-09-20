// FUN_0032433c @ 0032433c

void FUN_0032433c(long param_1,undefined1 param_2)

{
  bool bVar1;
  long lVar2;
  long local_30;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = false;
  local_30 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

