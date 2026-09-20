// FUN_016d2cf0 @ 016d2cf0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d2cf0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong local_218;
  undefined *local_1a0;
  undefined *local_198;
  bool local_161;
  ulong local_160;
  ulong local_150;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_40 = &cf_tableView;
  local_38 = &cf_m_tableView;
  local_30 = &cf_m_msgTableView;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  _memset(auStack_130,0,0x40);
  puVar3 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,0x10);
  if (local_198 != (undefined *)0x0) {
    lVar7 = *local_120;
    local_1a0 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,puVar3);
        }
        local_f0 = *(undefined8 *)(local_128 + (long)local_1a0 * 8);
        uVar4 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_138 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar6 = local_138;
        bVar1 = (uVar4 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = uVar6;
        }
        _objc_storeStrong(&local_138,0);
        bVar2 = true;
        if (bVar1) goto LAB_016d3020;
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,0x10)
      ;
      local_1a0 = (undefined *)0x0;
    } while (local_198 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_016d3020:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar6 = local_d0;
  if (!bVar2) {
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_161 = (uVar6 & 1) == 0;
    if (local_161) {
      local_218 = 0;
    }
    else {
      local_150 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_218 = local_150;
      FUN_016d32d4();
      _objc_retainAutoreleasedReturnValue();
      local_160 = local_218;
    }
    local_161 = !local_161;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_218;
    if (local_161) {
      (*(code *)PTR__objc_release_02578630)(local_160);
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c8);
  return;
}

