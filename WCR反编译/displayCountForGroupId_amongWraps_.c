// displayCountForGroupId:amongWraps: @ 00f2ca24

/* Function Stack Size: 0x20 bytes */

long_long WCRefineEmoticonGroupStore::displayCountForGroupId_amongWraps_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_198;
  ulong local_190;
  ID local_158;
  ID local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  ID local_100;
  byte local_f2;
  byte local_f1;
  ID local_f0;
  ID local_e8;
  undefined4 local_dc;
  long local_d8;
  ulong local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  lVar5 = local_c8;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  uVar2 = local_d0;
  if (lVar5 == 0) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_memberCountForGroupId__026a1078,local_d8)
      ;
      local_dc = 1;
      local_b0 = IVar3;
    }
    else {
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_membership_026abf38);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_b8;
      local_e8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_validGroupIdSet_026abf40);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_d8;
      local_f0 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf___all__);
      local_f1 = (byte)lVar5;
      lVar5 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__);
      local_f2 = (byte)lVar5;
      local_100 = 0;
      _memset(auStack_148,0,0x40);
      uVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      if (local_190 != 0) {
        lVar5 = *local_138;
        local_198 = 0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,uVar2);
            }
            local_108 = *(undefined8 *)(local_140 + local_198 * 8);
            IVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_isAddButtonWrap__026abf48,local_108);
            if ((IVar3 & 1) == 0) {
              IVar3 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_md5FromEmoticonWrap__026abf08,local_108);
              _objc_retainAutoreleasedReturnValue();
              local_150 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
              if (IVar3 == 0) {
                local_dc = 3;
              }
              else if ((local_f1 & 1) == 0) {
                IVar3 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_150);
                _objc_retainAutoreleasedReturnValue();
                IVar4 = IVar3;
                FUN_00f29cf4();
                _objc_retainAutoreleasedReturnValue();
                local_158 = IVar4;
                (*(code *)PTR__objc_release_02578630)(IVar3);
                IVar3 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
                if ((IVar3 != 0) &&
                   (IVar3 = local_f0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_f0,PTR_s_containsObject__0269cbb8,local_158), (IVar3 & 1) == 0))
                {
                  _objc_storeStrong(&local_158,&::cf___);
                }
                if ((local_f2 & 1) == 0) {
                  IVar3 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_isEqualToString__0269ccc8,local_d8);
                  if ((IVar3 & 1) != 0) {
                    local_100 = local_100 + 1;
                  }
                }
                else {
                  IVar3 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
                  if (IVar3 == 0) {
                    local_100 = local_100 + 1;
                  }
                }
                _objc_storeStrong(&local_158,0);
                local_dc = 0;
              }
              else {
                local_100 = local_100 + 1;
                local_dc = 3;
              }
              _objc_storeStrong(&local_150,0);
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_198 = 0;
        } while (local_190 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_b0 = local_100;
      local_dc = 1;
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
    }
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

