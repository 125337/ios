// FUN_007ad034 @ 007ad034

void FUN_007ad034(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  double dVar6;
  double local_168;
  uint local_114;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  double local_a0;
  double local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  _objc_initWeak(auStack_30,local_28);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar5 = local_28;
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_007b45e4;
    local_50 = &DAT_02578da0;
    _objc_copyWeak(auStack_48,auStack_30);
    _dispatch_async(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_6c = 1;
    _objc_destroyWeak(auStack_48);
  }
  else {
    local_79 = 0;
    local_114 = 1;
    if (local_28 != (undefined *)0x0) {
      puVar3 = &DAT_028ccbe8;
      _objc_loadWeakRetained();
      local_79 = 1;
      local_114 = 1;
      local_78 = puVar3;
      if (puVar5 == puVar3) {
        FUN_007ac894();
        local_114 = (uint)puVar3 ^ 1;
      }
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_114 & 1) == 0) {
      puVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026f4658);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 == (undefined *)0x0) {
        local_6c = 1;
      }
      else {
        puVar3 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026f4648);
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar3;
        _CACurrentMediaTime();
        local_98 = param_1;
        if (local_90 == (undefined *)0x0) {
          local_168 = 0.0;
        }
        else {
          dVar6 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_doubleValue_026ca608);
          local_168 = 0.3 - (param_1 - dVar6);
        }
        local_a0 = local_168;
        if (local_168 <= 0.0) {
          _objc_setAssociatedObject(local_28,DAT_026f4650,0,1);
          puVar3 = local_28;
          uVar1 = DAT_026f4648;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar3,uVar1,puVar5,1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_refreshBadges_026a81d0);
          local_6c = 0;
        }
        else {
          puVar3 = local_28;
          _objc_getAssociatedObject(local_28,DAT_026f4650);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar3 == (undefined *)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSObject_026ce188;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_new_0269d288);
            local_a8 = puVar3;
            _objc_setAssociatedObject(local_28,DAT_026f4650,puVar3,1);
            _objc_initWeak(auStack_b0,local_88);
            dVar4 = _dispatch_time(0,(long)(local_a0 * 1000000000.0));
            puVar3 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_e8 = PTR___NSConcreteStackBlock_02578660;
            local_e0 = 0xc2000000;
            local_dc = 0;
            local_d8 = FUN_007b4654;
            local_d0 = &DAT_0257fed0;
            _objc_copyWeak(auStack_c0,auStack_30);
            puVar5 = local_a8;
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = puVar5;
            _objc_copyWeak(auStack_b8,auStack_b0);
            _dispatch_after(dVar4,puVar3,&local_e8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_6c = 1;
            _objc_destroyWeak(auStack_b8);
            _objc_storeStrong(&local_c8);
            _objc_destroyWeak(auStack_c0);
            _objc_destroyWeak(auStack_b0);
            _objc_storeStrong(&local_a8,0);
          }
          else {
            local_6c = 1;
          }
        }
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88,0);
    }
    else {
      local_6c = 1;
    }
  }
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

