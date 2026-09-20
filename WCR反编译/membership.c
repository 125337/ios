// membership @ 00f2b50c

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

ID WCRefineEmoticonGroupStore::membership(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar2 = DAT_028e2cf8;
  local_28 = param_2;
  local_20 = param_1;
  if ((DAT_028e2cf8 == (undefined *)0x0) || (DAT_028e2d28 != DAT_0280e080)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_storeStrong(&DAT_028e2cf8,*(undefined8 *)PTR____NSDictionary0___02578288);
      DAT_028e2d28 = DAT_0280e080;
      puVar2 = DAT_028e2cf8;
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
      local_18 = puVar2;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_68 = PTR___NSConcreteGlobalBlock_02578658;
      local_60 = 0xd0800000;
      local_5c = 0;
      local_58 = FUN_00f2b7d0;
      local_50 = &DAT_02579a30;
      local_40 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_68);
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      puVar2 = DAT_028e2cf8;
      DAT_028e2cf8 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      DAT_028e2d28 = DAT_0280e080;
      puVar2 = DAT_028e2cf8;
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
      local_18 = puVar2;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

