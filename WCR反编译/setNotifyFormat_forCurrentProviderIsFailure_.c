// setNotifyFormat:forCurrentProviderIsFailure: @ 017389a8

/* Function Stack Size: 0x1c bytes */

void ThemeBoxAirDropViewController::setNotifyFormat_forCurrentProviderIsFailure_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  undefined *local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentRedeemProvider_026b3dd0);
  if (IVar2 == 2) {
    if ((local_29 & 1) == 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_68 = &::cf___;
      }
      else {
        local_68 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setThemeBoxAirDropNotifyFormatSU_026b3de8,local_68);
    }
    else {
      if (local_28 == (cfstringStruct *)0x0) {
        local_58 = &::cf___;
      }
      else {
        local_58 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setThemeBoxAirDropNotifyFormatFa_026b3de0,local_58);
    }
  }
  else if (IVar2 == 1) {
    if ((local_29 & 1) == 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_88 = &::cf___;
      }
      else {
        local_88 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setThemeBoxAirDropNotifyFormatTh_026b3df8,local_88);
    }
    else {
      if (local_28 == (cfstringStruct *)0x0) {
        local_78 = &::cf___;
      }
      else {
        local_78 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setThemeBoxAirDropNotifyFormatFa_026b3df0,local_78);
    }
  }
  else if ((local_29 & 1) == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    else {
      local_a8 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setThemeBoxAirDropNotifyFormat__026b3e08,local_a8);
  }
  else {
    if (local_28 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    else {
      local_98 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setThemeBoxAirDropNotifyFormatFa_026b3e00,local_98);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

