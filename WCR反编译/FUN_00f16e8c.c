// FUN_00f16e8c @ 00f16e8c

void FUN_00f16e8c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00f16348(local_20,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = uVar1;
  FUN_00f16348(local_20,PTR_s_m_nsToUsr_0269d090);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_50 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_38),
     local_18 = local_28, (uVar1 & 1) != 0)) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_68 = local_28;
    }
    else {
      local_68 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

