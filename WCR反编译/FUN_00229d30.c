// FUN_00229d30 @ 00229d30

void FUN_00229d30(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9250)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  FUN_00236094();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 != 0) {
    uVar2 = local_30;
    FUN_00230c84(uVar1);
    if ((uVar2 & 1) != 0) {
      FUN_0022ca2c(local_30);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

