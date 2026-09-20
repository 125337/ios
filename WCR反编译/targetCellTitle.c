// targetCellTitle @ 01ded7cc

/* Function Stack Size: 0x10 bytes */

ID WCRefineStepCountSettingsViewController::targetCellTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar3 = &::cf__;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar3 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

