// FUN_003e3ed8 @ 003e3ed8

byte FUN_003e3ed8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    FUN_003e407c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_containsObject__0269cbb8);
    local_11 = (byte)lVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

