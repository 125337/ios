// setNavigationTQQOnlineTextColorDark: @ 02076130

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setNavigationTQQOnlineTextColorDark_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  SEL SVar3;
  undefined *local_38;
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
  local_30 = IVar1;
  if (local_28 == 0) {
    SVar3 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,
               PTR_s_archivedDataWithRootObject_requi_026ae650,local_28,0,0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_38 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      SVar3 = local_20;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2);
      (*(code *)PTR__objc_release_02578630)(SVar3);
    }
    _objc_storeStrong(&local_38,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

