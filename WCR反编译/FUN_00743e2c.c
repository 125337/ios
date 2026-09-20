// FUN_00743e2c @ 00743e2c

void FUN_00743e2c(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_00751c18();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*DAT_028cc730)(local_18,local_20,local_21 & 1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_40 = 1;
  }
  else {
    FUN_0075165c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,local_30);
    if ((uVar1 & 1) != 0) {
      FUN_0075b8d0();
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

