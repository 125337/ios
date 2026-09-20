// FUN_00743b74 @ 00743b74

void FUN_00743b74(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cc720)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  FUN_00751c18();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_0075165c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 != 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_30);
      if ((uVar1 & 1) == 0) {
        FUN_0075b8d0();
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

