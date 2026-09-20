// FUN_006a34c8 @ 006a34c8

void FUN_006a34c8(void)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  lVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_20 == 0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_18 = 0;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

