// FUN_0040bf64 @ 0040bf64

byte FUN_0040bf64(undefined8 param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = false;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_rangeOfString_options__0269d118,&cf_WCRefineRevokeFrom___,1);
    local_11 = true;
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_rangeOfString_options__0269d118,&cf_WCRefineRevokeUser___,1);
      local_11 = lVar1 != 0x7fffffffffffffff;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

