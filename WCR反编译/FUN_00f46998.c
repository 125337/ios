// FUN_00f46998 @ 00f46998

void FUN_00f46998(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    FUN_00f45dec(0,&cf_N_1Y_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_convertVideoAtPath_chatVC__026ac2f0,local_20,
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

