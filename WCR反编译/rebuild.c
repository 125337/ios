// rebuild @ 019aea1c

/* Function Stack Size: 0x10 bytes */

void WCRFilePathListViewController::rebuild(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_1c0;
  ulong local_190;
  ulong local_188;
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  ID local_d0;
  char *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_clearAllSection_0269e380);
  pcVar2 = "WCTableViewNormalCellManager";
  _objc_getClass();
  IVar4 = local_b0;
  IVar3 = local_b0;
  local_c8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_paths_026ba7f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_entriesFromPaths__026ba800);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (IVar4 == 0) {
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    local_d8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_grouped_026ba7b8);
    pcVar1 = &cf_fe;
    if ((IVar4 & 1) == 0) {
      pcVar1 = &cf_fe6e_ceN_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFooterTitle__0269e3c8,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSection__0269e3d0,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_reloadTableView_0269dcb0);
    local_dc = 1;
    _objc_storeStrong(&local_d8,0);
  }
  else {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_grouped_026ba7b8);
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_addSectionTo_cellClass_title_ent_026ba810,local_c0,local_c8,0,
                 local_d0);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar6;
      _memset(auStack_138,0,0x40);
      IVar4 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_188 != 0) {
        lVar9 = *local_128;
        local_190 = 0;
        do {
          do {
            if (*local_128 - lVar9 != 0) {
              _objc_enumerationMutation(*local_128 - lVar9,IVar4);
            }
            uVar10 = *(ulong *)(local_130 + local_190 * 8);
            local_f8 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar10);
            if ((uVar7 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f8);
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_190 = 0;
        } while (local_188 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_typeFilter_026ba808);
      if (IVar4 == 1) {
        local_1c0 = local_e8;
      }
      else {
        local_1c0 = local_f0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_b0;
      IVar4 = local_c0;
      pcVar2 = local_c8;
      local_140 = local_1c0;
      IVar8 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_typeFilter_026ba808);
      pcVar1 = &cf_eN9Y;
      if (IVar8 != 1) {
        pcVar1 = &cf_eN;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_addSectionTo_cellClass_title_ent_026ba810,IVar4,pcVar2,pcVar1,local_140
                );
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_reloadTableView_0269dcb0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

