// FUN_002918f8 @ 002918f8

void FUN_002918f8(long param_1)

{
  bool bVar1;
  long lVar2;
  long *local_78;
  long *local_50;
  long local_38;
  long *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = *(long **)(param_1 + 0x28);
  bVar1 = local_78 == (long *)0x0;
  local_28 = lVar2;
  if (bVar1) {
    local_78 = &local_38;
    local_38 = lVar2;
    FUN_002912e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_28,local_38);
    local_50 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_30 == (long *)0x0) &&
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MOS_MRJ_Y);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_30,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

