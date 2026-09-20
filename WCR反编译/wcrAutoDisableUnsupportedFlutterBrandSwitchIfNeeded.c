// wcrAutoDisableUnsupportedFlutterBrandSwitchIfNeeded @ 01f40f80

/* Function Stack Size: 0x10 bytes */

void WCRefineUICleanViewController::wcrAutoDisableUnsupportedFlutterBrandSwitchIfNeeded
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrHostWeChatUnsupportedNativeBr_026c8cb8);
  if ((param_1 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_disableFlutterMigratePageEnabled_026a0c20);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setDisableFlutterMigratePageEnab_026c8cc0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrShowNativeBrandTimelineUnsupp_026c8cc8);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

