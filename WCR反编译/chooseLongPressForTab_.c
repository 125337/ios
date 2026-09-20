// chooseLongPressForTab: @ 01e48a94

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingTabsViewController::chooseLongPressForTab_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_180;
  undefined *local_178;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  long local_138;
  ID local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  _memset(auStack_110,0,0x40);
  puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_pickerLongPressActionsForTab__026c65d8
             ,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != (undefined *)0x0) {
    lVar6 = *local_100;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,puVar3);
        }
        lVar7 = *(long *)(local_108 + (long)local_180 * 8);
        local_d0 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_integerValue_026ca750);
        puVar4 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        local_118 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,
                   PTR_s_titleForLongPressAction_tab__026b0260,lVar7,local_c0);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = local_c0;
        local_120 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_longPressAction_026b0110);
        if (lVar7 == local_118) {
          puVar5 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_120;
          local_120 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        lVar7 = local_c0;
        puVar1 = local_c8;
        puVar5 = local_120;
        puVar4 = PTR_WCRTGTabsSheetAction_026cf668;
        local_158 = PTR___NSConcreteStackBlock_02578660;
        local_150 = 0xc2000000;
        local_14c = 0;
        local_148 = FUN_01e48ea4;
        local_140 = &DAT_0257a740;
        local_128 = local_118;
        (*(code *)PTR__objc_retain_02578638)();
        IVar2 = local_b0;
        local_138 = lVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,puVar5,0,&local_158);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_138,0);
        _objc_storeStrong(&local_120,0);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_01e48544(local_b0,&cf__cR_O,local_c8,&cf_Sm);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

