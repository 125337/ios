// getSortedPluginVCList @ 014c0a10

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchManager::getSortedPluginVCList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_2d8;
  ulong local_2d0;
  undefined *local_298;
  undefined *local_290;
  ID local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  ID local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  ID local_1b0;
  SEL local_1a8;
  ID local_1a0;
  undefined1 auStack_198 [128];
  undefined1 auStack_118 [128];
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a8 = param_2;
  local_1a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_valueForKey__0269d128,&cf_pluginSortOrder);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0), puVar1 == (undefined *)0x0
     )) {
    local_98 = &cf_WCRefine;
    local_90 = &cf__On_;
    local_88 = &cf__ORKb;
    local_80 = &cf_i_yRKb;
    local_78 = &cf__OX__;
    local_70 = &cf_Zb;
    local_68 = &cf_eVRKb;
    local_60 = &cf_WCPulse;
    local_58 = &cf__vRKb;
    local_50 = &cf__OQS;
    local_48 = &cf__P_RKb;
    local_40 = &cf_PKC;
    local_38 = &cf__NvP_;
    local_30 = &cf_llvP_;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98,
               0xe);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_1c0;
    local_1c0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_1c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar2;
  _memset(auStack_218,0,0x40);
  puVar1 = local_1c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_290 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_118,0x10);
  if (local_290 != (undefined *)0x0) {
    lVar5 = *local_208;
    local_298 = (undefined *)0x0;
    do {
      do {
        if (*local_208 - lVar5 != 0) {
          _objc_enumerationMutation(*local_208 - lVar5,puVar1);
        }
        local_1d8 = *(undefined8 *)(local_210 + (long)local_298 * 8);
        IVar3 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,local_1d8);
        _objc_retainAutoreleasedReturnValue();
        local_220 = IVar3;
        if (IVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObjectsFromArray__0269d540,IVar3)
          ;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_1d8);
        }
        _objc_storeStrong(&local_220,0);
        local_298 = local_298 + 1;
      } while (local_298 < local_290);
      local_290 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_118,0x10
                );
      local_298 = (undefined *)0x0;
    } while (local_290 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_268,0,0x40);
  IVar3 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_2d0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2d0 != 0) {
    lVar5 = *local_258;
    local_2d8 = 0;
    do {
      do {
        if (*local_258 - lVar5 != 0) {
          _objc_enumerationMutation(*local_258 - lVar5,IVar3);
        }
        local_228 = *(undefined8 *)(local_260 + local_2d8 * 8);
        puVar1 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_containsObject__0269cbb8,local_228);
        if (((ulong)puVar1 & 1) == 0) {
          IVar4 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,local_228);
          _objc_retainAutoreleasedReturnValue();
          local_270 = IVar4;
          if (IVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_addObjectsFromArray__0269d540,IVar4);
          }
          _objc_storeStrong(&local_270,0);
        }
        local_2d8 = local_2d8 + 1;
      } while (local_2d8 < local_2d0);
      local_2d0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_198,0x10)
      ;
      local_2d8 = 0;
    } while (local_2d0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

