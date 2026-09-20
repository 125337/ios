// FUN_001ced64 @ 001ced64

void FUN_001ced64(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00223080(0x3ff0000000000000,0x3ff3333333333333);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*DAT_028c8f90)(local_18,local_20,local_21 & 1,local_30);
  _objc_storeStrong(&local_30,0);
  return;
}

