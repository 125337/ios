// FUN_01570b48 @ 01570b48

void FUN_01570b48(long param_1)

{
  long lVar1;
  long lVar2;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_01533eb8(lVar2,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_e_S);
    local_2c = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_01533df4(lVar2,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      _objc_storeStrong(&local_38,local_28);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_ThemeBoxAirDropThemePickViewController_026cec00,
               PTR_s_presentPickerWithTargetWxid_targ_026acfd0,local_28,local_38);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

