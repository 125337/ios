// FUN_0074a6c8 @ 0074a6c8

void FUN_0074a6c8(double param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  while( true ) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    bVar1 = false;
    if (lVar2 != 0) {
      lVar2 = local_18;
      dVar3 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = 10.0 <= param_1 - dVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    if (!bVar1) break;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObjectAtIndex__0269d530,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

