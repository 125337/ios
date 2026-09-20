// FUN_00508a3c @ 00508a3c

void FUN_00508a3c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_00508eb4();
  if ((param_1 & 1) == 0) {
    (*DAT_028cafd8)(local_18,local_20);
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_dataItem_026a4670);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_00508f94();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    FUN_005090bc(local_18,local_28);
    if ((uVar1 & 1) == 0) {
      (*DAT_028cafd8)(local_18,local_20);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

