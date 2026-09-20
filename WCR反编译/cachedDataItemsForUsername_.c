// cachedDataItemsForUsername: @ 010bd938

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsMonitor::cachedDataItemsForUsername_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  long local_68;
  long local_60;
  byte local_55;
  byte local_45;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  IVar2 = local_30;
  if (lVar1 == 0) {
    IVar2 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_44 = 1;
    local_28 = IVar2;
  }
  else {
    local_45 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_diskLoadedUsers_026ae6f8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_45 = ((byte)IVar4 ^ 1) & 1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_45 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      IVar2 = local_30;
      if (((ulong)puVar5 & 1) == 0) {
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_010be048;
        local_a8 = &DAT_0257a7a0;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_40;
        local_a0 = IVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_performIOTaskSync__026ae6f0,&local_c0);
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_a0,0);
      }
      else {
        local_55 = 0;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(IVar2);
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_diskLoadScheduledUsers_026ae700);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((IVar4 & 1) == 0) {
          IVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_diskLoadScheduledUsers_026ae700);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_55 = 1;
        }
        _objc_sync_exit(IVar2);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((local_55 & 1) != 0) {
          lVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
          IVar3 = local_30;
          local_60 = lVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ioQueue_026ae678);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_30;
          local_90 = PTR___NSConcreteStackBlock_02578660;
          local_88 = 0xc2000000;
          local_84 = 0;
          local_80 = FUN_010be000;
          local_78 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          lVar1 = local_60;
          local_70 = IVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = lVar1;
          _dispatch_async(IVar3,&local_90);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          _objc_storeStrong(&local_68);
          _objc_storeStrong(&local_70,0);
          _objc_storeStrong(&local_60,0);
        }
      }
    }
    IVar2 = local_30;
    local_c8 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (IVar3 != 0) {
      IVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
      IVar3 = local_c8;
      local_c8 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_d0,0);
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    local_28 = local_30;
    if (IVar2 == 0) {
      IVar2 = *(ID *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = IVar2;
    }
    else {
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sortedItemsFromArray__026ae6d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    local_44 = 1;
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

