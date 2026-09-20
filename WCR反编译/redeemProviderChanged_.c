// redeemProviderChanged: @ 0173b728

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropViewController::redeemProviderChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  FUN_017381ac();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setThemeBoxAirDropRedeemProvider_026b3ed8,uVar2);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_themeBoxAirDropDeliveryMode_026ad100);
  if (puVar1 == (undefined *)0x0) {
    FUN_0173a9e4(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setThemeBoxAirDropStockRepositor_026b3e10,uVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveConfig_0269e5d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

