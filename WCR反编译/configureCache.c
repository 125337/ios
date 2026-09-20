// configureCache @ 01fc9020

/* Function Stack Size: 0x10 bytes */

void WebViewController::configureCache(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0x3200000;
  local_30 = 0xc800000;
  uVar1 = 0xd;
  local_20 = param_2;
  local_18 = param_1;
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringByAppendingPathComponent__026cab30,&cf_ThemeWebCache);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURLCache_026cedc0;
  local_40 = uVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLCache_026cedc0,PTR_s_setSharedURLCache__026ca260,puVar3);
  puVar3 = PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98,PTR_s_defaultDataStore_026adc60);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_precacheThemeWebsites_026ca268);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

