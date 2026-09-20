// FUN_000a2b9c @ 000a2b9c

byte FUN_000a2b9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_11 = 0;
  if (local_20 != 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_000a2ac8();
    _objc_retainAutoreleasedReturnValue();
    local_11 = lVar1 == lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

