// wcr_performKick: @ 01d8c14c

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsActivityViewController::wcr_performKick_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined1 local_c5;
  undefined4 local_c4;
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
  lVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  lVar6 = local_c0;
  puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  if (lVar2 == 0) {
    local_c4 = 1;
  }
  else {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_roomUsr_026c4cc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_kickUsers_fromRoom_reason_keywor_0269ed18,lVar6,IVar3,&cf___,&::cf___,0,
               0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_c5 = SUB81(puVar4,0);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf__Q1Y_Sd_O_Y_blg_tCgP);
      local_c4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__cN_Q);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
      local_d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_c0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar5;
      _memset(auStack_120,0,0x40);
      IVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allRows_026c4d70);
      _objc_retainAutoreleasedReturnValue();
      local_178 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != 0) {
        lVar6 = *local_110;
        local_180 = 0;
        do {
          do {
            if (*local_110 - lVar6 != 0) {
              _objc_enumerationMutation(*local_110 - lVar6,IVar3);
            }
            puVar4 = local_d8;
            uVar7 = *(undefined8 *)(local_118 + local_180 * 8);
            local_e0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if (((ulong)puVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_e0);
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAllRows__026c4d68,local_d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_reloadRows_026c4d18);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

