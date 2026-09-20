// FUN_017935c0 @ 017935c0

void FUN_017935c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01791da8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    lVar2 = 5;
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_18 = 0;
    }
    else {
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Preferences);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_stringByAppendingPathExtension__026a4580,&cf_plist);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

