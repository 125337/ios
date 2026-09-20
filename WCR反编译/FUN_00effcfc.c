// FUN_00effcfc @ 00effcfc

void FUN_00effcfc(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long local_38;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x28;
  local_30 = uVar2;
  _objc_loadWeakRetained();
  uVar2 = local_30;
  local_38 = param_1;
  FUN_00effddc(local_30,param_1);
  pcVar1 = &cf__ndJ_YU_;
  if ((uVar2 & 1) == 0) {
    pcVar1 = &cf_nd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

