// setPluginLongPressMenuStyle: @ 01771e28

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::setPluginLongPressMenuStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,param_3 == 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setConfigValue_forKey__026b4428,puVar1,&cf_WCRPluginHubLongPressStyle);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

