// FUN_0185771c @ 0185771c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0185771c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint local_2fc;
  ulong local_2e0;
  ulong local_2d8;
  ulong local_290;
  ulong local_288;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  int local_14c;
  ulong local_148;
  long local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  local_148 = param_3;
  if (((local_138 == 0) ||
      (lVar4 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0),
      uVar2 = local_138, lVar4 == 0)) || (4 < local_148)) {
    local_129 = 0;
    local_14c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar5 = local_138;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_138;
      if ((uVar5 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar5 = local_138;
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar2 = local_138;
          if ((uVar5 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar2 & 1) != 0) {
              uVar2 = local_138;
              (*(code *)PTR__objc_retain_02578638)();
              local_1a0 = uVar2;
              _memset(auStack_1e8,0,0x40);
              uVar2 = local_1a0;
              (*(code *)PTR__objc_retain_02578638)();
              local_2d8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                         auStack_128,0x10);
              if (local_2d8 != 0) {
                lVar4 = *local_1d8;
                local_2e0 = 0;
                do {
                  do {
                    if (*local_1d8 - lVar4 != 0) {
                      _objc_enumerationMutation(*local_1d8 - lVar4,uVar2);
                    }
                    uVar5 = *(ulong *)(local_1e0 + local_2e0 * 8);
                    local_1a8 = uVar5;
                    FUN_0185771c(uVar5,local_140,local_148 + 1);
                    local_2fc = 1;
                    if ((uVar5 & 1) == 0) {
                      uVar5 = local_1a0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,local_1a8);
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = uVar5;
                      FUN_0185771c();
                      local_2fc = (uint)uVar3;
                      (*(code *)PTR__objc_release_02578630)(uVar5);
                    }
                    if ((local_2fc & 1) != 0) {
                      local_129 = 1;
                      local_14c = 1;
                      goto LAB_01857e88;
                    }
                    local_2e0 = local_2e0 + 1;
                  } while (local_2e0 < local_2d8);
                  local_2d8 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                             auStack_128,0x10);
                  local_2e0 = 0;
                } while (local_2d8 != 0);
              }
              local_14c = 0;
LAB_01857e88:
              (*(code *)PTR__objc_release_02578630)(uVar2);
              if (local_14c == 0) {
                local_14c = 0;
              }
              _objc_storeStrong(&local_1a0,0);
              if (local_14c != 0) goto LAB_01857ef8;
            }
            local_129 = 0;
            local_14c = 1;
            goto LAB_01857ef8;
          }
        }
        _memset(auStack_198,0,0x40);
        uVar2 = local_138;
        (*(code *)PTR__objc_retain_02578638)();
        local_288 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        if (local_288 != 0) {
          lVar4 = *local_188;
          local_290 = 0;
          do {
            do {
              if (*local_188 - lVar4 != 0) {
                _objc_enumerationMutation(*local_188 - lVar4,uVar2);
              }
              uVar5 = *(ulong *)(local_190 + local_290 * 8);
              local_158 = uVar5;
              FUN_0185771c(uVar5,local_140,local_148 + 1);
              if ((uVar5 & 1) != 0) {
                local_129 = 1;
                local_14c = 1;
                goto LAB_01857bd0;
              }
              local_290 = local_290 + 1;
            } while (local_290 < local_288);
            local_288 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                       0x10);
            local_290 = 0;
          } while (local_288 != 0);
        }
        local_14c = 0;
LAB_01857bd0:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_14c == 0) {
          local_129 = 0;
          local_14c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_129 = (byte)uVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_14c = 1;
      }
    }
    else {
      uVar2 = local_138;
      FUN_01856468();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_129 = (byte)uVar5 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_14c = 1;
    }
  }
LAB_01857ef8:
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

