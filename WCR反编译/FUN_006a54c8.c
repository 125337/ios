// FUN_006a54c8 @ 006a54c8

void FUN_006a54c8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_198;
  undefined *local_190;
  ulong local_160 [2];
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined4 local_e4;
  ulong local_e0;
  undefined8 local_d8;
  long *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  local_d0 = &DAT_028cbe58;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,&PTR___NSConcreteGlobalBlock_0257eb68);
  if (*local_d0 + 1 != 0) {
    _dispatch_once(*local_d0 + 1,local_d0,local_d8);
  }
  _objc_storeStrong(&local_d8,0);
  uVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 == 0) {
    local_e4 = 1;
  }
  else if ((DAT_028cbe48 == 0) ||
          (uVar1 = local_e0,
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,DAT_028cbe48)
          , (uVar1 & 1) == 0)) {
    if ((DAT_028cbe50 != 0) &&
       (uVar1 = local_e0,
       (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,DAT_028cbe50),
       (uVar1 & 1) != 0)) {
      FUN_006a542c(local_e0,PTR_s_initView_026a6638);
    }
    local_e4 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_setValue_forKey__0269d300,0,&cf_m_arrContacts);
    FUN_006a542c(local_e0,PTR_s_initData_0269ec58);
    _memset(auStack_148,0,0x40);
    local_c8 = &cf_m_arrContacts;
    local_c0 = &cf_arrSearchResultOfContacts;
    local_b8 = &cf_arrSearchResultOfGroup;
    local_b0 = &cf_arrSearchResultOfTopHit;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != (undefined *)0x0) {
      lVar4 = *local_138;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,puVar2);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_198 * 8);
          local_150 = 0;
          uVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_108);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_150;
          local_150 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          FUN_006a5acc(local_150);
          _objc_storeStrong(&local_150,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_160[0] = 0;
    uVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,&cf_m_tableView);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_160[0];
    local_160[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_160[0];
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_reloadData_0269e400);
    }
    local_e4 = 1;
    _objc_storeStrong(local_160,0);
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

