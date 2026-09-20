// rememberItemOrder:intoPack: @ 0107e510

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonStore::rememberItemOrder_intoPack_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_270;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  undefined *local_1d0;
  ID local_1c8;
  bool local_1b9;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  uVar7 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if (uVar7 == 0) {
    local_14c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    uVar7 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_240 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_240 != 0) {
      lVar5 = *local_198;
      local_248 = 0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,uVar7);
          }
          uVar6 = *(ulong *)(local_1a0 + local_248 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_168 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0), uVar6 != 0)) {
            uVar6 = local_168;
            FUN_0107bd28();
            local_1b9 = false;
            bVar1 = (uVar6 & 1) == 0;
            if (bVar1) {
              local_270 = local_168;
            }
            else {
              local_270 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_1b8 = local_270;
            }
            local_1b9 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = local_270;
            if ((local_1b9 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1b8);
            }
            puVar2 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_containsObject__0269cbb8,local_1b0);
            if (((ulong)puVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1b0);
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1b0);
              local_14c = 0;
            }
            else {
              local_14c = 3;
            }
            _objc_storeStrong(&local_1b0,0);
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar7);
    puVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_14c = 1;
    }
    else {
      IVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_itemOrderMutableForPack__026ae260,local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1c8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = puVar2;
      _memset(auStack_218,0,0x40);
      IVar4 = local_1c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a0 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10)
      ;
      if (local_2a0 != 0) {
        lVar5 = *local_208;
        local_2a8 = 0;
        do {
          do {
            if (*local_208 - lVar5 != 0) {
              _objc_enumerationMutation(*local_208 - lVar5,IVar4);
            }
            uVar7 = *(ulong *)(local_210 + local_2a8 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1d8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar7 & 1) != 0) &&
               (puVar2 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_160,PTR_s_containsObject__0269cbb8,local_1d8),
               ((ulong)puVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_1d8);
            }
            local_2a8 = local_2a8 + 1;
          } while (local_2a8 < local_2a0);
          local_2a0 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                     0x10);
          local_2a8 = 0;
        } while (local_2a0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObjectsFromArray__0269d540,local_1d0)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setArray__026a30c0,local_158);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_saveIndex_026ae268);
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_1c8,0);
      local_14c = 0;
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

