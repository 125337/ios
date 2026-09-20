// FUN_005b497c @ 005b497c

byte FUN_005b497c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028cb6d8)(param_1,param_2);
  local_29 = (byte)param_1;
  if ((param_1 & 1) == 0) {
    local_11 = 0;
    goto LAB_005b4a78;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tid_026a15d8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
LAB_005b4a4c:
    local_11 = local_29 & 1;
  }
  else {
    FUN_005d1bc4();
    if ((uVar1 & 1) == 0) goto LAB_005b4a4c;
    local_11 = 0;
  }
  _objc_storeStrong(&local_38,0);
LAB_005b4a78:
  return local_11 & 1;
}

