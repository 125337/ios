// loadCandidatesFromUserNames:sourceTitle:toastPrefix: @ 0185f3b8

/* Function Stack Size: 0x28 bytes */

void WCRefineBatchRemarkViewController::loadCandidatesFromUserNames_sourceTitle_toastPrefix_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  ulong local_178;
  ulong local_170;
  ulong local_158;
  long *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  long *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  plVar2 = &local_d0;
  local_d0 = 0;
  _objc_storeStrong(plVar2,param_5);
  FUN_0185efc4();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = plVar2;
  if (plVar2 == (long *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elST_NgR);
    local_dc = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    _memset(auStack_130,0,0x40);
    if (local_c0 == 0) {
      local_158 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_158 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
              );
    if (local_170 != 0) {
      lVar6 = *local_120;
      local_178 = 0;
      do {
        do {
          if (*local_120 - lVar6 != 0) {
            _objc_enumerationMutation(*local_120 - lVar6,local_158);
          }
          local_f0 = *(undefined8 *)(local_128 + local_178 * 8);
          plVar2 = local_d8;
          FUN_0185efe4(local_d8,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = plVar2;
          if (plVar2 != (long *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,plVar2);
          }
          _objc_storeStrong(&local_138,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_158);
    puVar3 = local_e8;
    FUN_0185f8c8(local_e8,local_d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectedCandidates__026b6930);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (IVar5 == 0) {
      local_1b8 = &cf__gb;
    }
    else {
      if (local_c8 == (cfstringStruct *)0x0) {
        local_1b0 = &cf__b;
      }
      else {
        local_1b0 = local_c8;
      }
      local_1b8 = local_1b0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSourceTitle__026b6938,local_1b8);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTableData_0269dca8);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_e8,0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

