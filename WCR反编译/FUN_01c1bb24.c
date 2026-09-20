// FUN_01c1bb24 @ 01c1bb24

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c1bb24(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *local_1c0;
  ulong local_178;
  ulong local_170;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  int local_cc;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  lVar5 = param_1 + 0x20;
  local_c0 = param_1;
  _objc_loadWeakRetained();
  local_c8 = lVar5;
  if (lVar5 == 0) {
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar5 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_118 + local_178 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar3 = local_e0;
          if ((uVar6 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_128 = uVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            uVar3 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            if ((uVar3 == 0) ||
               (uVar3 = local_128,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_128,PTR_s_hasSuffix__0269d018,&cf__chatroom), (uVar3 & 1) != 0)) {
              local_cc = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
              local_cc = 0;
            }
            _objc_storeStrong(&local_128,0);
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_resetMomentsSpecialFollowProgres_026c13b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_notifyMomentsSpecialFollowConfig_026c13a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_reloadTableData_0269dca8);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    local_1c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar2 == (undefined *)0x0) {
      local_1c0 = &cf__nzzyr_RsQlT_N_J_Rcd;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_stringWithFormat__0269cca8,&cf__n_);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_1c0;
    }
    local_139 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_1c0;
    if (local_139) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,local_130,&cf_wSN);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (local_cc == 0) {
    local_cc = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

