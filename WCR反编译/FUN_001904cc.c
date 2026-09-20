// FUN_001904cc @ 001904cc

void FUN_001904cc(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_3a0;
  undefined *local_398;
  uint local_2d4;
  ulong local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined1 *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined **local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  byte local_129;
  undefined *local_128;
  undefined *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  uint local_e0;
  undefined **local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar2 = &local_b8;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  local_c8 = param_3;
  local_c0 = param_2;
  FUN_001903f8();
  local_d0 = ppuVar2;
  if ((((long)ppuVar2 < 1) || (local_c0 < 0)) || (local_c8 < 1)) {
    local_b0 = (undefined1 *)0x0;
    local_e0 = 1;
    goto LAB_00191188;
  }
  puVar3 = local_b8;
  FUN_001911e8(local_c8,local_b8,local_c0);
  local_e8 = puVar3;
  if ((long)puVar3 < 0) {
    local_b0 = (undefined1 *)0x0;
    local_e0 = 1;
    goto LAB_00191188;
  }
  puVar4 = local_b8;
  FUN_0019131c(local_b8,"m_contactsDataLogic");
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_b8;
  local_f0 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    pcVar5 = &cf_m_contactsDataLogic;
    _NSSelectorFromString();
    FUN_0019143c(puVar3,pcVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_f0;
    local_f0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  if (local_f0 == (undefined1 *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_e0 = 1;
  }
  else {
    pcVar5 = &cf_getKeysArray;
    _NSSelectorFromString();
    pcVar6 = &cf_getContactsArrayWith_;
    local_f8 = pcVar5;
    _NSSelectorFromString();
    puVar7 = local_f0;
    local_100 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_respondsToSelector__026ca818,local_f8);
    if ((((ulong)puVar7 & 1) == 0) ||
       (puVar7 = local_f0,
       (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_respondsToSelector__026ca818,local_100),
       ((ulong)puVar7 & 1) == 0)) {
      local_b0 = (undefined1 *)0x0;
      local_e0 = 1;
    }
    else {
      puVar8 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_f8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_108 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
      puVar7 = local_108;
      if (((ulong)puVar8 & 1) == 0) {
        local_b0 = (undefined1 *)0x0;
        local_e0 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        puVar8 = local_e8;
        local_110 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_count_0269cfe0);
        if ((long)puVar8 < (long)puVar7) {
          puVar7 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_objectAtIndexedSubscript__0269cc78,local_e8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_118 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar7 & 1) == 0) {
LAB_00190af0:
            puVar8 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_100,local_118);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_138 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
            puVar7 = local_138;
            if (((ulong)puVar8 & 1) == 0) {
              local_b0 = (undefined1 *)0x0;
              local_e0 = 1;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_140 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_count_0269cfe0);
              puVar8 = local_140;
              puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar7) {
                puVar7 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_140;
                local_170 = PTR___NSConcreteGlobalBlock_02578658;
                local_168 = 0xd0800000;
                local_164 = 0;
                local_160 = FUN_0019153c;
                local_158 = &DAT_0257aa90;
                local_148 = puVar3;
                (*(code *)PTR__objc_retain_02578638)();
                local_150 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_170);
                local_198 = PTR___NSConcreteGlobalBlock_02578658;
                local_190 = 0xd0800000;
                local_18c = 0;
                local_188 = FUN_00191a24;
                local_180 = &DAT_0257aab0;
                local_178 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_sortUsingComparator__0269d168,&local_198);
                puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                puVar4 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar4);
                _objc_retainAutoreleasedReturnValue();
                local_1a0 = puVar3;
                _memset(auStack_1e8,0,0x40);
                puVar3 = local_148;
                (*(code *)PTR__objc_retain_02578638)();
                local_398 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                           auStack_a8,0x10);
                if (local_398 != (undefined *)0x0) {
                  lVar9 = *local_1d8;
                  local_3a0 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_1d8 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_1d8 - lVar9,puVar3);
                      }
                      uVar10 = *(ulong *)(local_1e0 + (long)local_3a0 * 8);
                      local_1a8 = uVar10;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_contact);
                      _objc_retainAutoreleasedReturnValue();
                      local_1f0 = uVar10;
                      if (uVar10 != 0) {
                        puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
                        if ((uVar10 & 1) == 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1a0,PTR_s_addObject__0269d180,local_1f0);
                        }
                      }
                      _objc_storeStrong(&local_1f0,0);
                      local_3a0 = local_3a0 + 1;
                    } while (local_3a0 < local_398);
                    local_398 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                               auStack_a8,0x10);
                    local_3a0 = (undefined *)0x0;
                  } while (local_398 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar3);
                puVar7 = local_1a0;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar7;
                local_e0 = 1;
                _objc_storeStrong(&local_1a0);
                _objc_storeStrong(&local_150,0);
                _objc_storeStrong(&local_148,0);
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar8;
                local_e0 = 1;
              }
              _objc_storeStrong(&local_140,0);
            }
            _objc_storeStrong(&local_138,0);
          }
          else {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_118;
            local_129 = 0;
            local_120 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_contactsRecentAddedSectionTitle_0269fa78);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isEqualToString__0269ccc8);
            puVar8 = local_118;
            local_2d4 = 1;
            if (((ulong)puVar7 & 1) == 0) {
              puVar4 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_contactsEarliestAddedSectionTitl_0269fa80);
              _objc_retainAutoreleasedReturnValue();
              local_129 = 1;
              local_128 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isEqualToString__0269ccc8);
              local_2d4 = (uint)puVar8;
            }
            if ((local_129 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_128);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            bVar1 = (local_2d4 & 1) != 0;
            if (bVar1) {
              local_b0 = (undefined1 *)0x0;
            }
            local_e0 = (uint)bVar1;
            _objc_storeStrong(&local_120,0);
            if (local_e0 == 0) goto LAB_00190af0;
          }
          _objc_storeStrong(&local_118,0);
        }
        else {
          local_b0 = (undefined1 *)0x0;
          local_e0 = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_108,0);
    }
  }
  _objc_storeStrong(&local_f0,0);
LAB_00191188:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

