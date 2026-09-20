// FUN_0107bd28 @ 0107bd28

byte FUN_0107bd28(undefined8 param_1)

{
  long lVar1;
  long local_30;
  bool local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0x20) {
    local_18 = &DAT_028e32b8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02584ef0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_rangeOfCharacterFromSet__0269db68,DAT_028e32b0);
    local_21 = lVar1 == 0x7fffffffffffffff;
  }
  else {
    local_21 = false;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

