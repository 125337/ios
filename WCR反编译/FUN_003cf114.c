// FUN_003cf114 @ 003cf114

byte FUN_003cf114(undefined8 param_1)

{
  long lVar1;
  byte local_4c;
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
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__g);
    local_4c = 1;
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__);
      local_4c = 1;
      if (lVar1 == 0x7fffffffffffffff) {
        lVar1 = local_20;
        FUN_003cf8bc(0);
        local_4c = (byte)lVar1;
      }
    }
    local_11 = local_4c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

