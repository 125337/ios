// floatingTabBarStrokeColorLight @ 02138b28

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::floatingTabBarStrokeColorLight(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_30 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,PTR_s_archivedDataWithRootObject__026a4fa0
               ,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_28;
    puVar2 = local_30;
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar2);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_38,0);
  }
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
             local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

