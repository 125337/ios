// setDeletedState:forUsername:tid: @ 010c1bf8

/* Function Stack Size: 0x24 bytes */

void WCRefineMomentsMonitor::setDeletedState_forUsername_tid_
               (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *local_78;
  long local_70 [3];
  undefined1 *local_58;
  int local_4c;
  long local_48;
  long local_40;
  byte local_31;
  SEL local_30;
  undefined1 *local_28;
  
  local_31 = (byte)param_3;
  local_40 = 0;
  local_30 = param_2;
  local_28 = (undefined1 *)param_1;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     puVar1 = local_28, lVar2 == 0)) {
    local_4c = 1;
    goto LAB_010c222c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(puVar1);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_proactivelyDeletedTids_026ae750);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((local_31 & 1) != 0) && (local_58 == (undefined1 *)0x0)) {
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_58;
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_proactivelyDeletedTids_026ae750);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObject__0269d678,local_48);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_proactivelyDeletedTids_026ae750);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_48);
  }
  lVar2 = local_40;
  FUN_010b8aa8(local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_70[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheStatuses_026ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_31 & 1) == 0) {
    if (local_78 != (undefined1 *)0x0) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheStatuses_026ae720);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      goto LAB_010c20e4;
    }
    local_4c = 1;
  }
  else {
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_integerValue_026ca750);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      local_4c = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheStatuses_026ae720);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
LAB_010c20e4:
      puVar5 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheStatuses_026ae720);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_setObject_forKey__026ca9e8,puVar4,&cf_WCRefineMomentsCacheStatuses);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_4c = 0;
    }
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(local_70,0);
  _objc_storeStrong(&local_58,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_sync_exit(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_4c == 0) {
    local_4c = 0;
  }
LAB_010c222c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

