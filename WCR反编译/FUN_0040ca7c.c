// FUN_0040ca7c @ 0040ca7c

long FUN_0040ca7c(undefined8 param_1)

{
  long lVar1;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0x7fffffffffffffff;
    local_38 = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0040d5d4(local_28,&cf_appmsg);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_18 = 0x7fffffffffffffff;
      local_38 = 1;
    }
    else {
      lVar1 = local_40;
      FUN_0040d830(local_40,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        local_18 = 0x7fffffffffffffff;
      }
      else {
        lVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750);
        local_18 = lVar1;
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

