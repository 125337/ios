// FUN_0077a840 @ 0077a840

void FUN_0077a840(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setCornerRadius__026ca900);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMaskedCorners__0269ebc8,param_3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMasksToBounds__026ca9b8,param_4 & 1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

