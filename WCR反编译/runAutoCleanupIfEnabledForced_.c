// runAutoCleanupIfEnabledForced: @ 010c7490

/* Function Stack Size: 0x14 bytes */

void __thiscall
WCRefineMomentsMonitor::runAutoCleanupIfEnabledForced_
          (WCRefineMomentsMonitor *this,ID param_1,SEL param_2,bool param_3)

{
  double dVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  double in_d0;
  double dVar6;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined *local_50;
  int local_48;
  double local_38;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (0 < (long)puVar4) {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar2 = local_18;
      local_38 = in_d0;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(IVar2);
      if ((((local_21 & 1) != 0) ||
          ((*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastCleanupTime_026ae790),
          dVar1 = local_38, in_d0 <= 0.0)) ||
         (dVar6 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastCleanupTime_026ae790),
         3600.0 <= dVar1 - dVar6)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_18,PTR_s_setLastCleanupTime__026ae798);
        local_48 = 0;
      }
      else {
        local_48 = 1;
      }
      _objc_sync_exit(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (local_48 == 0) {
        pdVar5 = _dispatch_get_global_queue(0x11,0);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_18;
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc2000000;
        local_6c = 0;
        local_68 = FUN_010c77ac;
        local_60 = &DAT_0257cc98;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = IVar2;
        local_50 = local_30;
        _dispatch_async(pdVar5,&local_78);
        (*(code *)PTR__objc_release_02578630)(pdVar5);
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  return;
}

