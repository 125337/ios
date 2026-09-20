// setMessageGestureActionListConfig: @ 02142824

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setMessageGestureActionListConfig_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_removeObjectForKey__0269d700,&cf_messageGestureActionListConfig);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKey__026ca9e8,local_28,&cf_messageGestureActionListConfig
              );
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

