// setChatToolbarBackgroundColorLight: @ 021112c8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatToolbarBackgroundColorLight_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
  bVar1 = local_28 == (undefined *)0x0;
  local_30 = IVar2;
  if (bVar1) {
    local_58 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d48,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_archivedDataWithRootObject__026a4fa0,local_58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
             &cf_chatToolbarBackgroundColorLight);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

