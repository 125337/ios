// FUN_00181d40 @ 00181d40

void FUN_00181d40(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong local_2e0;
  ulong local_2d8;
  ulong local_268;
  ulong local_260;
  long local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  long local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  undefined4 local_158;
  cfstringStruct *local_148;
  ulong local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  pcVar1 = &cf_getContactsArrayWith_;
  _NSSelectorFromString();
  uVar2 = local_138;
  local_148 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = 1;
    local_130 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_160 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar4;
    _memset(auStack_1b0,0,0x40);
    uVar2 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
    if (local_260 != 0) {
      lVar5 = *local_1a0;
      local_268 = 0;
      do {
        do {
          if (*local_1a0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_1a8 + local_268 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_170 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar6 & 1) != 0) && (uVar6 = local_170, FUN_00182714(), (uVar6 & 1) == 0)) {
            uVar6 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,local_148,local_170);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_1b8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar6 & 1) == 0) {
              local_158 = 3;
            }
            else {
              _memset(auStack_200,0,0x40);
              uVar6 = local_1b8;
              (*(code *)PTR__objc_retain_02578638)();
              local_2d8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_128,0x10);
              if (local_2d8 != 0) {
                lVar7 = *local_1f0;
                local_2e0 = 0;
                do {
                  do {
                    if (*local_1f0 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_1f0 - lVar7,uVar6);
                    }
                    lVar8 = *(long *)(local_1f8 + local_2e0 * 8);
                    local_1c0 = lVar8;
                    if ((lVar8 != 0) && (FUN_00182618(), (int)lVar8 != 0)) {
                      lVar8 = local_1c0;
                      FUN_0017be3c(local_1c0,&cf_m_nsUsrName);
                      _objc_retainAutoreleasedReturnValue();
                      local_208 = lVar8;
                      (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
                      if (lVar8 == 0) {
LAB_00182264:
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_160,PTR_s_addObject__0269d180,local_1c0);
                        local_158 = 0;
                      }
                      else {
                        puVar3 = local_168;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_168,PTR_s_containsObject__0269cbb8,local_208);
                        if (((ulong)puVar3 & 1) == 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_168,PTR_s_addObject__0269d180,local_208);
                          goto LAB_00182264;
                        }
                        local_158 = 5;
                      }
                      _objc_storeStrong(&local_208,0);
                    }
                    local_2e0 = local_2e0 + 1;
                  } while (local_2e0 < local_2d8);
                  local_2d8 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                             auStack_128,0x10);
                  local_2e0 = 0;
                } while (local_2d8 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
              local_158 = 0;
            }
            _objc_storeStrong(&local_1b8,0);
          }
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        local_268 = 0;
      } while (local_260 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar3;
    local_158 = 1;
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

