// FUN_0156d1cc @ 0156d1cc

void FUN_0156d1cc(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar2 = *(ulong *)(param_1 + 0x20);
  FUN_0156d268(uVar2,*(undefined8 *)(param_1 + 0x28));
  pcVar1 = &cf__ndJ_YU_;
  if ((uVar2 & 1) == 0) {
    pcVar1 = &cf_nd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

