// autoDownloadSelectedSessionsSummaryText @ 01a56e38

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::autoDownloadSelectedSessionsSummaryText
             (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_autoDownloadSelectedSessions_0269d950);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gb;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

