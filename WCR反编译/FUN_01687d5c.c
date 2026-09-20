// FUN_01687d5c @ 01687d5c

void FUN_01687d5c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_2;
  local_20 = param_2;
  local_18 = param_2;
  FUN_01687e6c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_size_026cab00);
    dVar2 = 2.0;
    if ((2.0 <= param_1) &&
       ((*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_size_026cab00), 2.0 <= dVar2)) {
      FUN_016884d0(local_28,*(byte *)(param_2 + 0x20) & 1,*(byte *)(param_2 + 0x21) & 1);
      goto LAB_01687e54;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bSO_U_1Y_);
  FUN_01686c18();
LAB_01687e54:
  _objc_storeStrong(&local_28,0);
  return;
}

