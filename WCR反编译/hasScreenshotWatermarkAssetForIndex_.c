// hasScreenshotWatermarkAssetForIndex: @ 017ef860

/* Function Stack Size: 0x18 bytes */

bool WCRefineAssistFunctionViewController::hasScreenshotWatermarkAssetForIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_screenshotWatermark_ldImagePath);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_valueForKey__0269d128);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_screenshotWatermark_ldNightImagePath);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_valueForKey__0269d128);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_44 = 1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_44 = (bool)(puVar1 != (undefined *)0x0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_44;
}

