// navigationHomeOnlineIconColorLight @ 0206f944

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::navigationHomeOnlineIconColorLight(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *local_70;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_tqqOnlineIconColorLight;
  local_30 = (undefined *)param_1;
  FUN_0206e96c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_70 = local_38;
  FUN_0206fae4();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_70 == (undefined *)0x0;
  local_40 = local_70;
  if (bVar1) {
    local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

