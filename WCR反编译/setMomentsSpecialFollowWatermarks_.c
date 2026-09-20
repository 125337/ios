// setMomentsSpecialFollowWatermarks: @ 02166b68

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setMomentsSpecialFollowWatermarks_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  SEL SVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar1 = local_28;
  puVar3 = local_38;
  if ((uVar5 & 1) != 0) {
    local_60 = PTR___NSConcreteGlobalBlock_02578658;
    local_58 = 0xd0800000;
    local_54 = 0;
    local_50 = FUN_02166db8;
    local_48 = &DAT_025860f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_60);
    _objc_storeStrong(&local_40,0);
  }
  IVar2 = local_30;
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  SVar6 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar3);
  (*(code *)PTR__objc_release_02578630)(SVar6);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

