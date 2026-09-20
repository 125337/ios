// FUN_015fdda8 @ 015fdda8

byte FUN_015fdda8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_01604cbc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_01606634();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_016031f0();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      FUN_01603064();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      FUN_016031f0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      local_30 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_20);
    local_11 = (byte)lVar1 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

