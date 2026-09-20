// FUN_00589dc8 @ 00589dc8

void FUN_00589dc8(void)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_30;
  long local_18;
  
  lVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar2;
  if (lVar2 == 0) {
    local_30 = lVar2;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

