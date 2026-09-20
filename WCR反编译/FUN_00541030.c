// FUN_00541030 @ 00541030

void FUN_00541030(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_2f8;
  ulong local_2f0;
  ulong local_260;
  ulong local_258;
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  ulong local_158;
  undefined4 local_150;
  undefined *local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  if (local_138 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
  }
  else {
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleList_026a0d78);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_itemArray_026a1328);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_itemArray_026a1328);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_1b0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) != 0) {
          _memset(auStack_1f8,0,0x40);
          uVar2 = local_1b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_2f0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          if (local_2f0 != 0) {
            lVar3 = *local_1e8;
            local_2f8 = 0;
            do {
              do {
                if (*local_1e8 - lVar3 != 0) {
                  _objc_enumerationMutation(*local_1e8 - lVar3,uVar2);
                }
                uVar4 = *(ulong *)(local_1f0 + local_2f8 * 8);
                local_1b8 = uVar4;
                FUN_00542164();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_200 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
                if (((uVar4 & 1) != 0) &&
                   (uVar4 = local_200,
                   (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0),
                   uVar4 != 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_addObject__0269d180,local_200);
                }
                _objc_storeStrong(&local_200,0);
                local_2f8 = local_2f8 + 1;
              } while (local_2f8 < local_2f0);
              local_2f0 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                         auStack_128,0x10);
              local_2f8 = 0;
            } while (local_2f0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        _objc_storeStrong(&local_1b0,0);
      }
    }
    else {
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_buttonTitleList_026a0d78);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        _memset(auStack_1a0,0,0x40);
        uVar2 = local_158;
        (*(code *)PTR__objc_retain_02578638)();
        local_258 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        if (local_258 != 0) {
          lVar3 = *local_190;
          local_260 = 0;
          do {
            do {
              if (*local_190 - lVar3 != 0) {
                _objc_enumerationMutation(*local_190 - lVar3,uVar2);
              }
              uVar4 = *(ulong *)(local_198 + local_260 * 8);
              local_160 = uVar4;
              FUN_00542164();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_1a8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((uVar4 & 1) != 0) &&
                 (uVar4 = local_1a8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0), uVar4 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1a8)
                ;
              }
              _objc_storeStrong(&local_1a8,0);
              local_260 = local_260 + 1;
            } while (local_260 < local_258);
            local_258 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                       0x10);
            local_260 = 0;
          } while (local_258 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_158,0);
    }
    puVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
  }
  local_150 = 1;
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

