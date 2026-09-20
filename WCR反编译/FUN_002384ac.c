// FUN_002384ac @ 002384ac

void FUN_002384ac(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar3 = local_20;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_0022bbc4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf_vU__N_g_b0RSY_u4YPeb);
      FUN_0022a7fc(local_28,0);
      FUN_0023802c(local_18,local_28);
      local_38 = 1;
    }
    else {
      FUN_0022a7fc(local_28,1);
      puVar2 = PTR_WCRefineHelper_026ce000;
      uVar3 = local_28;
      FUN_0022b864();
      pcVar1 = &cf__Y_u_IN_4YP;
      if ((uVar3 & 1) == 0) {
        pcVar1 = &cf__Y_u_IN4YP;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
      FUN_0022a3a0(local_18);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

