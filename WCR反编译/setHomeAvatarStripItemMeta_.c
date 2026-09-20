// setHomeAvatarStripItemMeta: @ 0215d2e8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setHomeAvatarStripItemMeta_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ID local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_28;
  puVar2 = local_30;
  if ((uVar4 & 1) != 0) {
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_0215d518;
    local_40 = &DAT_02579a30;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_58);
    _objc_storeStrong(&local_38,0);
  }
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_60 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_homeAvatarStripItemMeta);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

