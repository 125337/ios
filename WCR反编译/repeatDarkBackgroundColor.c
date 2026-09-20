// repeatDarkBackgroundColor @ 02019be8

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::repeatDarkBackgroundColor(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
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
  if (local_38 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,DAT_02324020,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,PTR_s_archivedDataWithRootObject__026a4fa0
               ,puVar4);
    _objc_retainAutoreleasedReturnValue();
    SVar2 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar4;
    _objc_storeStrong(&local_40,0);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar4;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

