// FUN_00571344 @ 00571344

byte FUN_00571344(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00570434(local_20,&cf_commentID);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_intValue_0269cc88);
  if ((int)lVar1 < 1) {
    lVar2 = local_20;
    FUN_00570434((int)lVar1 + -1,local_20,&cf_comment64ID);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar1 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

