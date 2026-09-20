// downloadFirstAvailableCandidate:completion: @ 00f35414

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::downloadFirstAvailableCandidate_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_1e8;
  ulong local_1e0;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined *local_190;
  long local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  long local_c8;
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
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar3 == 0) {
    (**(code **)(local_c8 + 0x10))(local_c8,0);
    local_cc = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSObject_026ce188;
    _objc_alloc_init();
    local_f0 = &local_f8;
    local_f8 = 0;
    local_e8 = 0x20000000;
    local_e4 = 0x20;
    uVar3 = local_c0;
    local_d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    local_110 = &local_118;
    local_118 = 0;
    local_108 = 0x20000000;
    local_104 = 0x20;
    local_100 = 0;
    local_e0 = uVar3;
    _memset(auStack_160,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_1e0 != 0) {
      lVar6 = *local_150;
      local_1e8 = 0;
      do {
        do {
          if (*local_150 - lVar6 != 0) {
            _objc_enumerationMutation(*local_150 - lVar6,uVar3);
          }
          IVar2 = local_b0;
          uVar7 = *(undefined8 *)(local_158 + local_1e8 * 8);
          local_120 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_aesKey);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_d8;
          local_1b0 = PTR___NSConcreteStackBlock_02578660;
          local_1a8 = 0xc2000000;
          local_1a4 = 0;
          local_1a0 = FUN_00f35878;
          local_198 = &DAT_02582b38;
          (*(code *)PTR__objc_retain_02578638)();
          lVar1 = local_c8;
          local_190 = puVar4;
          local_180 = &local_118;
          local_178 = &local_f8;
          (*(code *)PTR__objc_retain_02578638)();
          local_188 = lVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_downloadEmoticonURL_aesKey_compl_026ac068,uVar7,uVar5,&local_1b0);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          _objc_storeStrong(&local_188);
          _objc_storeStrong(&local_190,0);
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10
                  );
        local_1e8 = 0;
      } while (local_1e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    __Block_object_dispose(&local_118,8);
    __Block_object_dispose(&local_f8,8);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

