// removeCustomPersonaNamed: @ 009b0368

/* Function Stack Size: 0x18 bytes */

bool WCRefineAIStore::removeCustomPersonaNamed_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined *local_118;
  ulong local_110;
  ulong local_108;
  ID local_100;
  undefined4 local_f4;
  long local_f0;
  long local_e8;
  SEL local_e0;
  ID local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  lVar8 = local_e8;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = lVar8;
  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_c9 = 0;
    local_f4 = 1;
  }
  else {
    IVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_customPersonas_026aac48);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_100 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_108 = 0x7fffffffffffffff;
    for (local_110 = 0; uVar1 = local_110, IVar2 = local_100,
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0), uVar1 < IVar2;
        local_110 = local_110 + 1) {
      IVar2 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_objectAtIndexedSubscript__0269cc78,local_110);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar4 & 1) != 0) {
        local_108 = local_110;
        break;
      }
    }
    if (local_108 == 0x7fffffffffffffff) {
      local_c9 = 0;
      local_f4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_removeObjectAtIndex__0269d530,local_108)
      ;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar5;
      _memset(auStack_160,0,0x40);
      IVar2 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
      if (local_1a8 != 0) {
        lVar8 = *local_150;
        local_1b0 = 0;
        do {
          do {
            if (*local_150 - lVar8 != 0) {
              _objc_enumerationMutation(*local_150 - lVar8,IVar2);
            }
            puVar5 = local_118;
            uVar9 = *(undefined8 *)(local_158 + local_1b0 * 8);
            local_c8 = &cf_name;
            local_120 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = &cf_prompt;
            uVar6 = local_120;
            local_b8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_b0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                     0x10);
          local_1b0 = 0;
        } while (local_1a8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_c9 = 1;
      local_f4 = 1;
      _objc_storeStrong(&local_118,0);
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

