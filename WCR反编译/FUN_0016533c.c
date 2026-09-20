// FUN_0016533c @ 0016533c

void FUN_0016533c(undefined8 param_1)

{
  long lVar1;
  long local_30;
  uint local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = 1;
  }
  else {
    FUN_00163590();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,local_18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectForKey__0269d700,local_18);
      FUN_00163f40(local_30);
    }
    local_28 = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

