// FUN_00573640 @ 00573640

void FUN_00573640(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setImage_forState__0269cc60,0,0);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
    FUN_00573774(DAT_02323db0,local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

