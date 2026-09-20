// openSiliconFlowAccount @ 017e95f0

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::openSiliconFlowAccount(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
             &cf_https___cloud_siliconflow_cn_account_ak);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrOpenHTTPURL_failToast__026b5598,puVar1,&::cf_elSb);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

