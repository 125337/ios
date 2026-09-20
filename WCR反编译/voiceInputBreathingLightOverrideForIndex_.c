// voiceInputBreathingLightOverrideForIndex: @ 01a3a834

/* Function Stack Size: 0x18 bytes */

ID WCRefineGeneralFunctionViewController::voiceInputBreathingLightOverrideForIndex_
             (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ID local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_3;
  local_c0 = param_2;
  local_b8 = param_1;
  _memset(auStack_110,0,0x40);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_140 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_140 != (undefined *)0x0) {
    lVar6 = *local_100;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,puVar4);
        }
        IVar7 = *(ID *)(local_108 + (long)local_148 * 8);
        local_d0 = IVar7;
        (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_objectForKey__0269e048,&cf_index);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar2 = local_c8;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        IVar7 = local_d0;
        if (IVar5 == IVar2) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar7;
          bVar1 = true;
          goto LAB_01a3aa68;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_01a3aa68:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (!bVar1) {
    local_b0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

