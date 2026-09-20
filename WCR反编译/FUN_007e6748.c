// FUN_007e6748 @ 007e6748

/* WARNING: Type propagation algorithm not settling */

void FUN_007e6748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong local_1c8;
  ulong local_1c0;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  long *local_f0;
  undefined4 local_e8;
  long local_d8;
  long local_d0;
  long local_c8 [3];
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_c8[1] = 0;
  local_c8[2] = param_2;
  _objc_storeStrong(local_c8 + 1,param_3);
  local_c8[0] = 0;
  _objc_storeStrong(local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  plVar2 = &local_d8;
  local_d8 = 0;
  _objc_storeStrong(plVar2,param_6);
  FUN_007e42b4();
  if (((ulong)plVar2 & 1) == 0) {
    _dispatch_sync(DAT_028cce90,&PTR___NSConcreteGlobalBlock_02580140);
    local_e8 = 1;
  }
  else {
    FUN_007e5bc4();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = plVar2;
    (*(code *)PTR__objc_msgSend_02578628)(plVar2,PTR_s_count_0269cfe0);
    if (plVar2 == (long *)0x0) {
      local_e8 = 1;
    }
    else {
      FUN_007e5388();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar3;
      _memset(auStack_140,0,0x40);
      uVar1 = local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      if (local_1c0 != 0) {
        lVar7 = *local_130;
        local_1c8 = 0;
        do {
          do {
            if (*local_130 - lVar7 != 0) {
              _objc_enumerationMutation(*local_130 - lVar7,uVar1);
            }
            local_100 = *(undefined8 *)(local_138 + local_1c8 * 8);
            uVar4 = DAT_028cce70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028cce70,PTR_s_containsObject__0269cbb8,local_100);
            if (((uVar4 & 1) == 0) &&
               (uVar4 = DAT_028cce78,
               (*(code *)PTR__objc_msgSend_02578628)
                         (DAT_028cce78,PTR_s_containsObject__0269cbb8,local_100), (uVar4 & 1) == 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_100);
            }
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1c8 = 0;
        } while (local_1c0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
      if (puVar3 == (undefined *)0x0) {
        local_e8 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar3;
        if (local_c8[0] != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8[0],
                     &cf_messageSource);
        }
        if (local_d0 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_senderName);
        }
        if (local_d8 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,&cf_timeString);
        }
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_150 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_totalErrorCount)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_firstFailed);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_successCount);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar5 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_numberWithUnsignedInteger__0269e4d0,puVar5);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                   &cf_totalDetectedCount);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        plVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_numberWithUnsignedInteger__0269e4d0,plVar2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_targetWxidCount)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_numberWithBool__0269ce60,(ulong)puVar6 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_dogModeEnabled);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_ownedWxids);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        FUN_007e7950(local_f8,local_f0,local_148,local_150);
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_148,0);
        local_e8 = 0;
      }
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(local_c8,0);
  _objc_storeStrong(local_c8 + 1,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

