// FUN_003ff678 @ 003ff678

void FUN_003ff678(undefined8 param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  long local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (local_18 != 0) {
    if ((local_19 & 1) == 0) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      if (lVar1 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRightBarButtonItems__0269eac8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRightBarButtonItem__0269cf20,0);
      }
      else {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        if (lVar1 == 1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRightBarButtonItems__0269eac8,0);
          lVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRightBarButtonItem__0269cf20);
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setRightBarButtonItems__0269eac8,local_28);
        }
      }
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      if (lVar1 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLeftBarButtonItems__026a3580,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLeftBarButtonItem__0269cf10,0);
      }
      else {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        if (lVar1 == 1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLeftBarButtonItems__026a3580,0);
          lVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLeftBarButtonItem__0269cf10);
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setLeftBarButtonItems__026a3580,local_28);
        }
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

