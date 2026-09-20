// FUN_000f6fc4 @ 000f6fc4

void FUN_000f6fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  ulong uVar1;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_29 = param_7;
  local_28 = param_6;
  local_20 = param_5;
  local_18 = param_4;
  FUN_000f9998();
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_contentOffset_0269dd18);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentInset_0269dcc8);
  uVar1 = local_18;
  FUN_000f9d84();
  (*DAT_028c83c8)(local_18,local_20,local_28,local_29 & 1);
  if ((uVar1 & 1) != 0) {
    FUN_000f9ecc(param_1,param_2,param_3,local_38);
    FUN_000fa318(local_18,1);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

