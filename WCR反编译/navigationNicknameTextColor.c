// navigationNicknameTextColor @ 020772cc

/* WARNING: Removing unreachable block (ram,0x020774dc) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::navigationNicknameTextColor(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  int local_54;
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
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
  if (local_38 != 0) {
    local_40 = 0;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    local_50 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_unarchivedObjectOfClass_fromData_026b88c8,puVar2,local_38,&local_50);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_40,local_50);
    local_48 = puVar3;
    if ((puVar3 == (undefined *)0x0) || (local_40 != 0)) {
      local_54 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_54 = 1;
      local_18 = puVar3;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (local_54 != 0) goto LAB_02077560;
  }
  local_60 = (undefined *)0x0;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
             &PTR___NSConcreteGlobalBlock_0258d358);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_60;
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = puVar3;
  local_54 = 1;
  _objc_storeStrong(&local_60,0);
LAB_02077560:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

