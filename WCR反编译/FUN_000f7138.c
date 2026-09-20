// FUN_000f7138 @ 000f7138

void FUN_000f7138(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,byte param_6,byte param_7)

{
  ulong uVar1;
  ulong local_30;
  byte local_22;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_22 = param_7;
  local_21 = param_6;
  local_20 = param_5;
  local_18 = param_4;
  FUN_000f9998();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_contentOffset_0269dd18);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentInset_0269dcc8);
  uVar1 = local_18;
  FUN_000f9d84();
  (*DAT_028c83d0)(local_18,local_20,local_21 & 1,local_22 & 1);
  if ((uVar1 & 1) != 0) {
    FUN_000f9ecc(param_1,param_2,param_3,local_30);
    FUN_000fa318(local_18,1);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

