// FUN_00546c4c @ 00546c4c

void FUN_00546c4c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar2 = local_18;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    bVar1 = lVar2 != 0;
    if (bVar1) {
      FUN_0054e638();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      FUN_0054e6a4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      FUN_0054e710();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    local_1c = (uint)!bVar1;
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

