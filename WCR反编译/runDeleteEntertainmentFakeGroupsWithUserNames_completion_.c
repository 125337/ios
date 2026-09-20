// runDeleteEntertainmentFakeGroupsWithUserNames:completion: @ 0016af40

/* Function Stack Size: 0x20 bytes */

void WCRefineClearSessionHook::runDeleteEntertainmentFakeGroupsWithUserNames_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong local_198;
  ulong local_190;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined8 local_138;
  ID local_130;
  undefined *local_128;
  uint local_11c;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3,param_3,param_4,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  _memset(auStack_118,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar8 = *local_108;
    local_198 = 0;
    do {
      do {
        if (*local_108 - lVar8 != 0) {
          _objc_enumerationMutation(*local_108 - lVar8,uVar3);
        }
        local_d8 = *(undefined8 *)(local_110 + local_198 * 8);
        IVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_isEntertainmentFakeGroupUserName_0269f820,local_d8);
        if ((IVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (puVar4 != (undefined *)0x0) {
    puVar6 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WndGP__
              );
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___dispatch_main_q_02578680;
    local_128 = puVar6;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_168 = PTR___NSConcreteStackBlock_02578660;
    local_160 = 0xc2000000;
    local_15c = 0;
    local_158 = FUN_0016b338;
    local_150 = &DAT_0257a710;
    local_130 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar6 = local_128;
    local_148 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_c8;
    local_140 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = uVar2;
    _dispatch_async(puVar7,&local_168);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_128,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRlgGP_U_);
  }
  local_11c = (uint)(puVar4 == (undefined *)0x0);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

