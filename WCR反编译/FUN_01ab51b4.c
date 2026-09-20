// FUN_01ab51b4 @ 01ab51b4

byte FUN_01ab51b4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte local_38;
  long local_30;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90);
  if (lVar1 == 2) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
    if (lVar1 == 3) {
      local_11 = 1;
    }
    else {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
      local_38 = 0;
      if (lVar1 == 0) {
        local_30 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_30;
        FUN_01ab5aa4();
        local_38 = (byte)lVar2;
      }
      local_11 = local_38 & 1;
      if (lVar1 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_30);
      }
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

