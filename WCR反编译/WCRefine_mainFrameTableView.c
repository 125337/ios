// WCRefine_mainFrameTableView @ 004cb0a4

/* Function Stack Size: 0x10 bytes */

ID WCRefineMainFrameSearchButton::WCRefine_mainFrameTableView(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ID local_100;
  ID local_f8;
  ID local_f0;
  ID local_e8;
  uint local_dc;
  ID local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = &cf_m_tableView;
  local_c0 = param_2;
  local_b8 = param_1;
  _NSSelectorFromString();
  IVar3 = local_b8;
  local_c8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((IVar3 & 1) != 0) {
    local_d0 = PTR__objc_msgSend_02578628;
    IVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    local_d8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    IVar3 = local_d8;
    bVar1 = (IVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = IVar3;
    }
    local_dc = (uint)bVar1;
    _objc_storeStrong(&local_d8,0);
    if (local_dc != 0) goto LAB_004cb4d8;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
  _class_getInstanceVariable();
  local_e8 = IVar3;
  if (IVar3 != 0) {
    IVar4 = local_b8;
    _object_getIvar(local_b8,IVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    local_f0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    IVar3 = local_f0;
    bVar1 = (IVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = IVar3;
    }
    local_dc = (uint)bVar1;
    _objc_storeStrong(&local_f0,0);
    if (local_dc != 0) goto LAB_004cb4d8;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = IVar3;
  _memset(auStack_140,0,0x40);
  IVar3 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_190 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar6 = *local_130;
    local_198 = 0;
    do {
      do {
        if (*local_130 - lVar6 != 0) {
          _objc_enumerationMutation(*local_130 - lVar6,IVar4);
        }
        uVar7 = *(ID *)(local_138 + local_198 * 8);
        puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_100 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
        IVar3 = local_100;
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar3;
          local_dc = 1;
          goto LAB_004cb498;
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  local_dc = 0;
LAB_004cb498:
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (local_dc == 0) {
    local_b0 = 0;
    local_dc = 1;
  }
  _objc_storeStrong(&local_f8,0);
LAB_004cb4d8:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

