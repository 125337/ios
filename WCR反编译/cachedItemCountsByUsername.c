// cachedItemCountsByUsername @ 010c2edc

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsMonitor::cachedItemCountsByUsername(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80 [3];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_010c313c;
  local_50 = &DAT_0257a7a0;
  local_38 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_38;
  local_48 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_performIOTaskSync__026ae6f0,&local_68);
  IVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar1);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memoryCache_026ae658);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_a0 = PTR___NSConcreteGlobalBlock_02578658;
  local_98 = 0xd0800000;
  local_94 = 0;
  local_90 = FUN_010c3638;
  local_88 = &DAT_025852f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_80[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_a0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(local_80);
  _objc_sync_exit(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

