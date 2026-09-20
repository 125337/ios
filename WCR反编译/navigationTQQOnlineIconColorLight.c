// navigationTQQOnlineIconColorLight @ 020744d8

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::navigationTQQOnlineIconColorLight(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_50;
  undefined *local_48;
  long local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
  if (local_38 != 0) {
    local_40 = 0;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    local_50 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_unarchivedObjectOfClass_fromData_026b88c8,puVar3,local_38,&local_50);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_40,local_50);
    local_48 = puVar4;
    if ((puVar4 == (undefined *)0x0) || (local_40 != 0)) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      bVar1 = true;
      local_18 = puVar4;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (bVar1) goto LAB_020746c4;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar4;
LAB_020746c4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

