// setBallGestureAction:forKey: @ 01614464

/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatProfileStore::setBallGestureAction_forKey_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  cfstringStruct *local_60;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  FUN_016141d0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    else {
      local_60 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setCurrentValue_forKey__026b18a8,local_60,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

