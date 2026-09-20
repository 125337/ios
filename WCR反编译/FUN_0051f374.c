// FUN_0051f374 @ 0051f374

void FUN_0051f374(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *local_80;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar3 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = lVar3;
  local_28 = 0;
  while( true ) {
    bVar1 = false;
    if (local_28 < 3) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    if (!bVar1) break;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_28 = local_28 + 1;
  }
  if (local_20 == 0) {
    local_80 = &local_18;
  }
  else {
    local_80 = &local_20;
  }
  lVar3 = *local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}

