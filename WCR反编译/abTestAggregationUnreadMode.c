// abTestAggregationUnreadMode @ 02030a54

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::abTestAggregationUnreadMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  FUN_0202f3fc(param_1,SVar1,&cf_abTestAggregationUnreadEnabled,0,
               &cf_disableAggregationUnreadEnabled);
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKey__0269e048,&cf_bottomBarLongPressAction0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      local_18 = 2;
      goto LAB_02030bc4;
    }
  }
  local_18 = local_38;
LAB_02030bc4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

