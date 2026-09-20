// clearAllCache @ 010c5a74

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMonitor::clearAllCache(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined *local_48 [3];
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memoryCache_026ae658);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_diskLoadedUsers_026ae6f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_proactivelyDeletedTids_026ae750);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheStatuses_026ae720);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_favoriteMomentKeys_026ae728);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_diskLoadScheduledUsers_026ae700);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBrowseListSnapshot__026ae660,0);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_removeObjectForKey__0269d700,&cf_WCRefineMomentsCacheStatuses);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48[0],PTR_s_removeObjectForKey__0269d700,&cf_WCRefineMomentsCacheFavorites);
  _objc_storeStrong(local_48);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_010c5e3c;
  local_58 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_performIOTaskSync__026ae6f0,&local_70);
  _objc_storeStrong(&local_50,0);
  return;
}

