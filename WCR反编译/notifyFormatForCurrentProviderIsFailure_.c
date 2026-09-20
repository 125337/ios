// notifyFormatForCurrentProviderIsFailure: @ 017384c4

/* Function Stack Size: 0x14 bytes */

ID ThemeBoxAirDropViewController::notifyFormatForCurrentProviderIsFailure_
             (ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  byte local_39;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_39 = (byte)param_3;
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_30;
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentRedeemProvider_026b3dd0);
  if (IVar4 == 2) {
    bVar2 = false;
    bVar1 = false;
    if ((local_39 & 1) == 0) {
      local_68 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_themeBoxAirDropNotifyFormatSUTU_026b3b98)
      ;
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_e0 = local_68;
      if (local_68 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      local_d0 = local_e0;
    }
    else {
      local_58 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_themeBoxAirDropNotifyFormatFailu_026b3ba0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_c8 = local_58;
      if (local_58 == (cfstringStruct *)0x0) {
        local_c8 = &::cf___;
      }
      local_d0 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_d0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else if (IVar4 == 1) {
    bVar2 = false;
    bVar1 = false;
    if ((local_39 & 1) == 0) {
      local_88 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_themeBoxAirDropNotifyFormatTheme_026b3ba8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_110 = local_88;
      if (local_88 == (cfstringStruct *)0x0) {
        local_110 = &::cf___;
      }
      local_100 = local_110;
    }
    else {
      local_78 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_themeBoxAirDropNotifyFormatFailu_026b3bb0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_f8 = local_78;
      if (local_78 == (cfstringStruct *)0x0) {
        local_f8 = &::cf___;
      }
      local_100 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_100;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
  }
  else {
    bVar2 = false;
    bVar1 = false;
    if ((local_39 & 1) == 0) {
      local_a8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_themeBoxAirDropNotifyFormat_026b3bb8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_140 = local_a8;
      if (local_a8 == (cfstringStruct *)0x0) {
        local_140 = &::cf___;
      }
      local_130 = local_140;
    }
    else {
      local_98 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_themeBoxAirDropNotifyFormatFailu_026b3bc0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_128 = local_98;
      if (local_98 == (cfstringStruct *)0x0) {
        local_128 = &::cf___;
      }
      local_130 = local_128;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_130;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
  }
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

