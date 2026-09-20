// setThemeBoxFailureNotificationFormat: @ 02116578

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setThemeBoxFailureNotificationFormat_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    FUN_0211656c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_themeBoxFailureNotificationFormat);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

