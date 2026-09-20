// openNotifyFormatSheetSuccess @ 0173cd74

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropViewController::openNotifyFormatSheetSuccess(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setEditingThemeIndex__026b3db8,0xffffffffffffffff);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyFormatForCurrentProviderIs_026b3f20,0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_38;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentNotifyFormatPluginStyleSh_026b3f28,local_28,0);
  _objc_storeStrong(&local_28,0);
  return;
}

