// configuration @ 015d4bd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRGlobalPageBackgroundStore::configuration(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_178;
  ID local_118;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  byte *local_a8;
  byte local_9a;
  undefined1 local_99;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  bool local_51;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultConfiguration_026b0fc8);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = IVar6;
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar3 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addEntriesFromDictionary__026a2e30,local_38);
  }
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_51 = false;
  bVar2 = (IVar6 & 1) == 0;
  if (bVar2) {
    local_118 = *(ID *)PTR____NSDictionary0___02578288;
  }
  else {
    local_118 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_118;
  }
  local_51 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_118;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_48;
  local_90 = PTR___NSConcreteGlobalBlock_02578658;
  local_88 = 0xd0800000;
  local_84 = 0;
  local_80 = FUN_015d5370;
  local_78 = &DAT_02587348;
  local_68 = local_28;
  local_60 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_90);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_scenes);
  puVar3 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_99 = 0;
  bVar2 = true;
  uVar1 = ((ulong)puVar3 & 1) != 0;
  if ((bool)uVar1) {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_followGlobal);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == (undefined *)0x0;
    local_99 = uVar1;
    local_98 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_99;
  }
  local_99 = uVar1;
  if (bVar2) {
    local_a8 = &local_9a;
    local_9a = 0;
    local_c8 = PTR___NSConcreteGlobalBlock_02578658;
    local_c0 = 0xd0800000;
    local_bc = 0;
    local_b8 = FUN_015d5dac;
    local_b0 = &DAT_02579a50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_c8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(local_9a ^ 1) & 1)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_followGlobal);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  IVar5 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToDictionary__026aef18,local_60);
  if ((IVar5 & 1) == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRGlobalPageBackgroundSettings);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_178 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_e0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_178 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_178;
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_scenes);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,
               &cf_WCRGlobalPageBackgroundSettings);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_d0);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar5;
}

