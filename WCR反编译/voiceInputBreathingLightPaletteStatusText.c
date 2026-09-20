// voiceInputBreathingLightPaletteStatusText @ 01a3a6c0

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::voiceInputBreathingLightPaletteStatusText
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_38;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar3 == (undefined *)0x0) {
    local_60 = &::cf__;
  }
  else {
    local_60 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu_4);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (puVar3 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_60;
}

