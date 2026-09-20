// replaceItemId:withContentOfItem:remark: @ 010a7cc8

/* Function Stack Size: 0x28 bytes */

bool WCRefineMessageRepositoryStore::replaceItemId_withContentOfItem_remark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1a0;
  ulong local_198;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  ulong local_f0;
  undefined4 local_e4;
  long local_e0;
  undefined8 local_d8;
  ulong local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  lVar5 = local_c8;
  FUN_010a6348();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  uVar2 = local_d0;
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      FUN_010a6348();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_100 = (undefined *)0x7fffffffffffffff;
      local_f8 = puVar1;
      _memset(auStack_148,0,0x40);
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allItems_026a2730);
      _objc_retainAutoreleasedReturnValue();
      local_198 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_198 != 0) {
        lVar5 = *local_138;
        local_1a0 = 0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,IVar3);
            }
            uVar6 = *(ulong *)(local_140 + local_1a0 * 8);
            local_108 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar6;
            FUN_010a6348();
            _objc_retainAutoreleasedReturnValue();
            local_150 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar2 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_isEqualToString__0269ccc8,local_e0);
            if ((uVar2 & 1) == 0) {
              uVar2 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
              if ((uVar2 == 0) ||
                 (uVar2 = local_150,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_150,PTR_s_isEqualToString__0269ccc8,local_f0), (uVar2 & 1) == 0))
              {
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_108);
                local_e4 = 0;
              }
              else {
                local_e4 = 3;
              }
            }
            else {
              puVar1 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
              local_100 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_108);
              local_e4 = 3;
            }
            _objc_storeStrong(&local_150,0);
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1a0 = 0;
        } while (local_198 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (local_100 == (undefined *)0x7fffffffffffffff) {
        local_a9 = 0;
        local_e4 = 1;
      }
      else {
        uVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_e0,&cf_id);
        uVar4 = local_d8;
        FUN_010a6348();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,&cf_remark);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        FUN_010a831c();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithLongLong__0269d808,uVar4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_addedAt);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_setObject_atIndexedSubscript__0269e970,uVar2,local_100);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_persistItems__026ae590,local_f8);
        local_a9 = 1;
        local_e4 = 1;
        _objc_storeStrong(&local_158,0);
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
      goto LAB_010a82a8;
    }
  }
  local_a9 = 0;
  local_e4 = 1;
LAB_010a82a8:
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

