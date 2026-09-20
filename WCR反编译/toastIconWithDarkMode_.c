// toastIconWithDarkMode: @ 011262cc

/* Function Stack Size: 0x14 bytes */

ID WCRefineProgressToast::toastIconWithDarkMode_(ID param_1,SEL param_2,bool param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_c8;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_62;
  byte local_61;
  char *local_60;
  char *local_58;
  byte local_49;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_39 = 0;
  local_49 = 0;
  local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_20 = param_2;
  local_18 = param_1;
  if ((param_3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_80;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  local_58 = (char *)0x0;
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMThemeManager";
  _objc_getClass("MMThemeManager");
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_60 != (char *)0x0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_61 = (byte)puVar5;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_62 = (byte)puVar5;
    pcVar6 = &cf_svgImageNamed_color_;
    _NSSelectorFromString();
    pcVar1 = local_60;
    local_70 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar6);
    if (((ulong)pcVar1 & 1) != 0) {
      if ((local_62 & 1) == 0) {
        local_c8 = &cf_bell_on_filled;
      }
      else {
        local_c8 = &cf_eyes_on_filled;
        if ((local_61 & 1) == 0) {
          local_c8 = &cf_eyes_off_filled;
        }
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_c8;
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,local_70,local_c8,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58;
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_storeStrong(&local_78,0);
    }
  }
  pcVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

