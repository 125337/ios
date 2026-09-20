// sessionStatsDefaultBoardPagesForMode: @ 0212f504

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::sessionStatsDefaultBoardPagesForMode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _memset(auStack_110,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_sessionStatsBoardCatalogForMode__026c51b8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar4 = *local_100;
    local_138 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar2);
        }
        uVar5 = *(ulong *)(local_108 + local_138 * 8);
        local_d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        puVar1 = local_c8;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

