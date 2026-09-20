// wcr_currentPickerRepositoryName @ 01729d38

/* Function Stack Size: 0x10 bytes */

ID ThemeBoxAirDropThemePickViewController::wcr_currentPickerRepositoryName(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentStockRepositoryName_026b3bf8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentRedeemProviderName_026b3c00);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

