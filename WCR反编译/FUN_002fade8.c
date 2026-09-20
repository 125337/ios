// FUN_002fade8 @ 002fade8

void FUN_002fade8(undefined8 param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 != 0) {
    DAT_028c9ab9 = 1;
    if (DAT_028c9a98 == (code *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setAlpha__026ca860);
    }
    else {
      (*DAT_028c9a98)(param_1,local_18,PTR_s_setAlpha__026ca860);
    }
    DAT_028c9ab9 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

