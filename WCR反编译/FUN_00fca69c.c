// FUN_00fca69c @ 00fca69c

void FUN_00fca69c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78 [4];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar1 = local_28;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_R0R);
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    FUN_00fbe588();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_40 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf___;
    if (local_40 != (cfstringStruct *)0x0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_00fbe464();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        _objc_storeStrong(pcVar1,&local_48,local_58);
      }
      _objc_storeStrong(&local_58,0);
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactDisplayName_0269d160);
        _objc_retainAutoreleasedReturnValue();
        local_78[0] = pcVar2;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        _objc_storeStrong(local_78,0);
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsNickName)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_48;
      FUN_00fb7e54();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_50,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_ThemeBoxAirDropThemePickViewController_026cec00,
               PTR_s_presentPickerWithTargetWxid_targ_026ad118,local_48,local_50,1);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

