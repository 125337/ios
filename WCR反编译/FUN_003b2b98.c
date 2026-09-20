// FUN_003b2b98 @ 003b2b98

byte FUN_003b2b98(undefined8 param_1)

{
  long lVar1;
  byte local_64;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_rangeOfString_options__0269d118,&cf_Swipe,1);
    local_64 = 1;
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_rangeOfString_options__0269d118,&cf_DeleteConfirmation,1);
      local_64 = 1;
      if (lVar1 == 0x7fffffffffffffff) {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_rangeOfString_options__0269d118,&cf_SwipeAction,1);
        local_64 = 1;
        if (lVar1 == 0x7fffffffffffffff) {
          lVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_MenuButton);
          local_64 = (byte)lVar1;
        }
      }
    }
    local_11 = local_64 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

