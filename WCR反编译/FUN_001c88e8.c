// FUN_001c88e8 @ 001c88e8

void FUN_001c88e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_001cf94c();
  if (((param_1 & 1) == 0) || (uVar1 = local_18, FUN_00219d50(), (uVar1 & 1) == 0)) {
    (*DAT_028c8d80)(local_18,local_20);
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_playerView);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    FUN_001da6a8(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_flush_026a0810);
    (*DAT_028c8d80)(local_18,local_20);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

