// FUN_01799420 @ 01799420

byte FUN_01799420(undefined8 param_1)

{
  long lVar1;
  byte local_64;
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    FUN_01797b18();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    FUN_01797c48();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    local_64 = 0;
    if (lVar1 != 0) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_20);
      local_64 = (byte)lVar1;
    }
    local_11 = local_64 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

