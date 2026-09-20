// warmDisplayNames:offset:generation: @ 01bd6e74

/* Function Stack Size: 0x28 bytes */

void WCRefineMomentsCacheViewController::warmDisplayNames_offset_generation_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
               unsigned_long_long param_5)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ulong local_e0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined1 auStack_98 [8];
  ulong local_90;
  unsigned_long_long local_88;
  undefined1 auStack_80 [8];
  unsigned_long_long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  unsigned_long_long local_48;
  unsigned_long_long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  local_48 = param_5;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_namesGeneration_026c0758);
  if (param_5 == IVar1) {
    local_60 = local_40 + 8;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    local_e0 = uVar2;
    if (local_60 < uVar2) {
      local_e0 = local_60;
    }
    local_70 = local_e0;
    local_58 = local_e0;
    local_68 = uVar2;
    for (local_78 = local_40; uVar2 = local_58, local_78 < local_58; local_78 = local_78 + 1) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      FUN_01bc7c2c();
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (uVar2 < uVar3) {
      _objc_initWeak(uVar2 - uVar3,auStack_80,local_28);
      dVar4 = _dispatch_time(0,10000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01bd71d8;
      local_a8 = &DAT_0258b820;
      _objc_copyWeak(auStack_98,auStack_80);
      uVar2 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = uVar2;
      local_90 = local_58;
      local_88 = local_48;
      _dispatch_after(dVar4,puVar5,&local_c0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_a0,0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_80);
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchBar_026a2698);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (IVar7 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFilters_026c0720);
      }
    }
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

