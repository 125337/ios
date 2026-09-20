// FUN_002815d8 @ 002815d8

byte FUN_002815d8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_4c;
  undefined8 local_38;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar3 = local_20;
  uVar2 = 0;
  local_4c = 0;
  if (lVar1 != 0) {
    FUN_0027215c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_hasPrefix__0269d320);
    local_4c = (byte)lVar3;
    local_38 = uVar2;
  }
  local_11 = local_4c & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

