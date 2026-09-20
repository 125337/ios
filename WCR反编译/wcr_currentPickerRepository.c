// wcr_currentPickerRepository @ 01729c04

/* Function Stack Size: 0x10 bytes */

long_long ThemeBoxAirDropThemePickViewController::wcr_currentPickerRepository
                    (ID param_1,SEL param_2)

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
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentStockRepository_026b3bf0);
    local_18 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentRedeemProvider_026b3b88);
    FUN_01729cd0();
    local_18 = param_1;
  }
  return local_18;
}

