// FUN_00661db0 @ 00661db0

void FUN_00661db0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_a0;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0065fd84(local_20,PTR_s_GetChatName_0269da58,0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar2 = local_28;
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_0065fd84(local_20,PTR_s_getCurToUsername_026a62f0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_28 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    lVar2 = local_28;
    if (lVar1 == 0) {
      lVar1 = local_20;
      FUN_0065fd84(local_20,PTR_s_m_nsFromUsr_0269d088,"m_nsFromUsr");
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_28;
      local_28 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      lVar2 = local_28;
      if (lVar1 == 0) {
        lVar1 = local_20;
        FUN_0065fd84(local_20,PTR_s_m_nsToUsr_0269d090,"m_nsToUsr");
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_28;
        local_28 = lVar1;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        lVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
        if (lVar2 == 0) {
          local_a0 = 0;
        }
        else {
          local_a0 = local_28;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_a0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar2;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar2;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

