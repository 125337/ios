// cacheStatusForDataItem: @ 010bf04c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineMomentsMonitor::cacheStatusForDataItem_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_010bf2ec();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_30;
  local_38 = lVar1;
  FUN_010b66f4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = 1;
    local_44 = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isProactivelyDeletedForUsername__026ae718,local_38,local_40);
    if (((IVar3 & 1) == 0) &&
       (puVar4 = PTR_WCRefineMomentsMonitor_026ce718,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemMarkedDeleted__026a4720,
                  local_30), ((ulong)puVar4 & 1) == 0)) {
      lVar1 = local_38;
      FUN_010b8aa8(local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_20;
      local_50 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(IVar3);
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cacheStatuses_026ae720);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      _objc_sync_exit(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_18 = IVar7;
      if ((IVar7 != 2) && ((IVar7 != 3 && (IVar7 != 4)))) {
        local_18 = 1;
      }
      local_44 = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_18 = 3;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

