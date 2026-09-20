// FUN_003639b4 @ 003639b4

void FUN_003639b4(undefined8 param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long local_60;
  long local_40;
  long local_30;
  long local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_19 = param_2;
  if (local_18 == 0) {
    local_20 = 1;
  }
  else {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar1;
    if (lVar1 == 0) {
      local_30 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_30;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_60;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    lVar1 = local_28;
    if (lVar2 != 0) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      FUN_003668c8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSession__0269d2e0);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSortTimestampResolved__026a2eb0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSortTimestamp__026a2eb8,0);
    if ((local_19 & 1) != 0) {
      FUN_003694c4(local_18);
    }
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

