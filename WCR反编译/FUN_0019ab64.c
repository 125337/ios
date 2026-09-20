// FUN_0019ab64 @ 0019ab64

void FUN_0019ab64(undefined8 param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_50;
  undefined *local_48;
  undefined4 local_40;
  long local_30;
  byte local_21;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_21 = param_2;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = 1;
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_48 = puVar2;
    FUN_0019b2f0();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_isEqualToString__0269ccc8,local_30);
    if ((local_21 & 1) != 0) {
      if ((((byte)lVar1 ^ 1) & 1) != 0) {
        FUN_0019b5d0(local_48,local_30);
      }
      puVar2 = local_48;
      lVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByAppendingString__0269d398,&cf__dark);
      _objc_retainAutoreleasedReturnValue();
      FUN_0019b5d0(puVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    FUN_0019b5d0(local_48,local_50);
    FUN_0019b5d0(local_48,local_30);
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_40 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

