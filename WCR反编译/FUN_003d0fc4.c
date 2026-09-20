// FUN_003d0fc4 @ 003d0fc4

byte FUN_003d0fc4(undefined8 param_1)

{
  long lVar1;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf_nzzU_),
     lVar1 != 0x7fffffffffffffff)) {
    local_11 = false;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf_N>f_y);
    local_11 = lVar1 != 0x7fffffffffffffff;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

