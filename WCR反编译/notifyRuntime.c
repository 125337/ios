// notifyRuntime @ 01d0b0b8

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickChatSettingsViewController::notifyRuntime(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRQuickChatRuntime_026ce698;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

