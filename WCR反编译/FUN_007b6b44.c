// FUN_007b6b44 @ 007b6b44

void FUN_007b6b44(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  dispatch_time_t dVar7;
  uint local_1d4;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  uint local_1a0;
  cfstringStruct *local_188;
  cfstringStruct *local_138;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  double local_b8;
  byte local_aa;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  long local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined4 local_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_60 [3];
  cfstringStruct *local_48;
  undefined *local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar3 = &DAT_028ccbe8;
  local_38 = param_1;
  local_29 = param_3;
  _objc_loadWeakRetained();
  pcVar4 = (cfstringStruct *)PTR_WCRefineTelegramGroupingStore_026ce5a8;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_selectedTab_026a2a78);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_138 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_138 = &cf_all;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60[0] = local_138;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tabForId__026a8278,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar4;
  if (((pcVar4 == (cfstringStruct *)0x0) ||
      ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_disabled_026a2c20),
      ((ulong)pcVar4 & 1) != 0)) ||
     (pcVar4 = local_60[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_isEqualToString__0269ccc8,local_28),
     ((ulong)pcVar4 & 1) != 0)) {
    FUN_007b7ab4(0);
    local_6c = 1;
  }
  else {
    lVar6 = DAT_028ccbf0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccbf0,PTR_s_length_0269cca0);
    if (lVar6 == 0) {
      _objc_storeStrong(&DAT_028ccbf0,local_60[0]);
    }
    puVar3 = local_40;
    FUN_007b7b5c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectTabId__026a8280,local_28);
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_188 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_188 = &cf_all;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_188;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar3 = local_40;
    _objc_getAssociatedObject(local_40,DAT_026f4658);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,puVar3,PTR_s_setSelectedTabId_animated_veloci_026a8288,local_80,local_29 & 1
              );
    FUN_007b8140();
    DAT_028ccc70 = DAT_028ccc70 + 1;
    puVar3 = local_40;
    local_90 = DAT_028ccc70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_wcrGrouping_active_026a2a40);
    local_1a0 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcrGrouping_active_026a2a40);
      local_1a0 = (uint)puVar3;
    }
    local_91 = (byte)local_1a0 & 1;
    local_a9 = 0;
    if ((local_1a0 & 1) == 0) {
      local_1c8 = &cf___;
    }
    else {
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_unfilteredSnapshotSignature_026a8290);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_1c0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1c0 = &cf___;
      }
      local_1c8 = local_1c0;
      local_a8 = pcVar4;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_1c8;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    local_1d4 = 1;
    if ((local_91 & 1) != 0) {
      puVar3 = local_40;
      _WCRGroupingTelegramTabSnapshotCached(local_40,local_80,local_a0);
      local_1d4 = 1;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_40;
        _WCRGroupingCanRetargetTelegramTab();
        local_1d4 = (uint)puVar3;
      }
    }
    local_aa = (byte)local_1d4 & 1;
    local_b8 = 0.0;
    if ((local_1d4 & 1) == 0) {
      local_b8 = DAT_02323c90;
    }
    dVar7 = _dispatch_time(0,(long)(local_b8 * 1000000000.0));
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_007b82a4;
    local_d8 = &DAT_025796f0;
    local_c0 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_78;
    local_d0 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = puVar1;
    _dispatch_after(dVar7,puVar3,&local_f0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

