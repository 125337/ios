// FUN_002fad14 @ 002fad14

void FUN_002fad14(undefined8 param_1,uint param_2)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    DAT_028c9ab9 = 1;
    if (DAT_028c9a90 == (code *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,param_2 & 1);
    }
    else {
      (*DAT_028c9a90)(local_18,PTR_s_setHidden__026ca970,param_2 & 1);
    }
    DAT_028c9ab9 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

