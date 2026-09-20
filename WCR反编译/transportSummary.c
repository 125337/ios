// transportSummary @ 019559b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationSettingsViewController::transportSummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_38;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_30 = puVar2;
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_zf;
  }
  else {
    puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_titleForTransportType__026ac660,puVar2)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_speedKmhForTransportType__026ac630,
               local_30);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____0fkm_h);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

