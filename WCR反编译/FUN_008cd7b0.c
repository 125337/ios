// FUN_008cd7b0 @ 008cd7b0

void FUN_008cd7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long local_48 [3];
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar1,param_3);
  local_29 = (byte)puVar1;
  FUN_008d11c4();
  lVar2 = local_18;
  FUN_008caddc();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = lVar2;
  if ((local_29 & 1) != 0) {
    FUN_008cef6c();
    lVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSS_MRO);
    }
    else {
      FUN_008cb7ec(local_48[0]);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

