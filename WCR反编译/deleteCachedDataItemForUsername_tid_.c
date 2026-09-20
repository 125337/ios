// deleteCachedDataItemForUsername:tid: @ 010c3a08

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

bool WCRefineMomentsMonitor::deleteCachedDataItemForUsername_tid_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_118;
  ID local_110;
  ID local_108;
  byte local_f9;
  long local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  long local_c8;
  long local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID *local_a0;
  ID local_98;
  ID local_90 [3];
  ID local_78 [2];
  ID *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    local_68 = local_78 + 1;
    local_78[1] = 0;
    local_60 = 0x20000000;
    local_5c = 0x20;
    local_58 = 0;
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cacheRootPath_026ae668);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78[0] = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_78[0];
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_stringByAppendingPathExtension__026a4580,&cf_dat);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_90[0] = IVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cacheRootPath_026ae668);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_010bcd08();
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar5 = local_30;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_010c441c;
    local_d8 = &DAT_02585338;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_40;
    local_d0 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_48;
    local_c8 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_90[0];
    local_c0 = lVar2;
    local_a0 = local_78 + 1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_98;
    local_b8 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_78[0];
    local_b0 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_performIOTaskSync__026ae6f0,&local_f0);
    lVar2 = local_40;
    FUN_010b8aa8(local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_30;
    local_f9 = 0;
    local_f8 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar3);
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_108 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = IVar4 != 0;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_removeObjectForKey__0269d700,local_48);
    IVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
    if (IVar4 == 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_memoryCache_026ae658);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_proactivelyDeletedTids_026ae750);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_110 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_removeObject__0269d678,local_48);
    IVar4 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
    if (IVar4 == 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_proactivelyDeletedTids_026ae750);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cacheStatuses_026ae720);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBrowseListSnapshot__026ae660,0);
    puVar6 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_30;
    local_118 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cacheStatuses_026ae720);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_setObject_forKey__026ca9e8,IVar5,&cf_WCRefineMomentsCacheStatuses);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar6 = local_118;
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_setObject_forKey__026ca9e8,IVar5,&cf_WCRefineMomentsCacheFavorites);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    _objc_sync_exit(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_21 = 1;
    if ((local_68[3] & 1) == 0) {
      local_21 = local_f9;
    }
    local_21 = local_21 & 1;
    local_4c = 1;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(local_90,0);
    _objc_storeStrong(local_78,0);
    __Block_object_dispose(local_78 + 1,8);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

