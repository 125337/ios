// FUN_0179c910 @ 0179c910

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0179c910(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_2b8;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  undefined1 local_f1;
  ulong local_f0;
  undefined *local_e8 [2];
  ulong local_d8 [3];
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reportTag_026b4a18);
  uVar3 = local_b0;
  if (param_1 == 0x5ea0) {
    _WCRefineSessionSelectCompletionAssociationKey();
    _objc_getAssociatedObject(uVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_c0;
    local_c0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_c0 == 0) {
      uVar4 = local_b0;
      _objc_getAssociatedObject(local_b0,"completionBlock");
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_c0;
      local_c0 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reportTag_026b4a18);
  if ((uVar3 == 0x5ea0) && (local_c0 != 0)) {
    local_d8[0] = 0;
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_m_selectView);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_d8[0];
    local_d8[0] = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    bVar2 = false;
    uVar1 = local_d8[0] != 0;
    local_e8[0] = puVar5;
    if ((bool)uVar1) {
      uVar3 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_m_dicMultiSelect_026b4a20);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar3 != 0;
      local_f1 = uVar1;
      local_f0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar1 = local_f1;
    }
    local_f1 = uVar1;
    if (bVar2) {
      uVar3 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_m_dicMultiSelect_026b4a20);
      _objc_retainAutoreleasedReturnValue();
      local_100 = uVar3;
      _memset(auStack_148,0,0x40);
      uVar3 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      if (local_1f0 != 0) {
        lVar7 = *local_138;
        local_1f8 = 0;
        do {
          do {
            if (*local_138 - lVar7 != 0) {
              _objc_enumerationMutation(*local_138 - lVar7,uVar3);
            }
            local_108 = *(ulong *)(local_140 + local_1f8 * 8);
            uVar4 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_objectForKeyedSubscript__0269d098,local_108);
            _objc_retainAutoreleasedReturnValue();
            local_158 = 0;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_150 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((uVar4 & 1) == 0) {
              uVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
              if ((uVar4 & 1) == 0) {
                uVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_158;
                local_158 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
              else {
                uVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_m_nsUsrName_0269d638);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_158;
                local_158 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
            }
            else {
              _objc_storeStrong(&local_158,local_150);
            }
            uVar6 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
            uVar4 = local_108;
            if (uVar6 == 0) {
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((uVar4 & 1) != 0) {
                _objc_storeStrong(&local_158,local_108);
              }
            }
            uVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
            if (uVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_addObject__0269d180,local_158)
              ;
            }
            _objc_storeStrong(&local_158);
            _objc_storeStrong(&local_150,0);
            local_1f8 = local_1f8 + 1;
          } while (local_1f8 < local_1f0);
          local_1f0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1f8 = 0;
        } while (local_1f0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_100,0);
    }
    uVar3 = local_c0;
    puVar5 = local_e8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2b8 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_2b8 = *(undefined **)PTR____NSArray0___02578280;
    }
    (**(code **)(uVar3 + 0x10))(uVar3,local_2b8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
    _objc_storeStrong(local_e8);
    _objc_storeStrong(local_d8,0);
  }
  else {
    (*DAT_028e40d8)(local_b0,local_b8);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

