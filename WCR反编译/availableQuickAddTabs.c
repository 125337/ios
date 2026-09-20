// availableQuickAddTabs @ 0151f520

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramGroupingStore::availableQuickAddTabs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined *local_108;
  ID local_100;
  undefined *local_f8;
  SEL local_f0;
  ID local_e8;
  undefined1 auStack_e0 [128];
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = param_2;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureTabsLoaded_026b01d8);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_e8;
  local_f8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_100 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setDisabled__026b0148,(uint)puVar2 ^ 1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_60 = local_100;
  IVar3 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_e8;
  local_58 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_e8;
  local_50 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_e8;
  local_48 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_e8;
  local_40 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_e8;
  local_38 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar1;
  _memset(auStack_158,0,0x40);
  puVar1 = local_108;
  (*(code *)PTR__objc_retain_02578638)();
  local_200 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_e0,0x10);
  if (local_200 != (undefined *)0x0) {
    lVar9 = *local_148;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_148 - lVar9 != 0) {
          _objc_enumerationMutation(*local_148 - lVar9,puVar1);
        }
        local_118 = *(undefined8 *)(local_150 + (long)local_208 * 8);
        IVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isDuplicateOfTab__026b0230,local_118);
        if ((IVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,local_118);
        }
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_e0,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

