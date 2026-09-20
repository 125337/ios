// FUN_007d76a8 @ 007d76a8

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007d76a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_290;
  ulong local_258;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1a8;
  ulong local_178;
  ulong local_170;
  byte local_161;
  ulong local_160;
  ulong local_158;
  byte local_149;
  ulong local_148;
  ulong local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar4 = DAT_028ccd20;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((DAT_028ccd20 == (undefined *)0x0) || ((DAT_026f46c9 & 1) != 0)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_pluginFeatureCustomEntries_026a8400);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
    puVar2 = local_b8;
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pluginFeatureHiddenItems_026a8408);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_1a8 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithArray__0269d9a0,local_1a8);
    _objc_retainAutoreleasedReturnValue();
    local_d8[0] = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar4;
    _memset(auStack_128,0,0x40);
    puVar4 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1d8 != (undefined *)0x0) {
      lVar5 = *local_118;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,puVar4);
          }
          uVar6 = *(ulong *)(local_120 + (long)local_1e0 * 8);
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_e8;
            FUN_007d844c();
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
            if ((uVar6 == 0) ||
               (puVar1 = local_d8[0],
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_d8[0],PTR_s_containsObject__0269cbb8,local_130),
               ((ulong)puVar1 & 1) == 0)) {
              local_149 = 0;
              uVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_source_plugin);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              uVar3 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar3 & 1) == 0) {
                local_258 = 0;
              }
              else {
                local_258 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_source_plugin);
                _objc_retainAutoreleasedReturnValue();
                local_149 = 1;
                local_148 = local_258;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_140 = local_258;
              if ((local_149 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_148);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
              local_161 = 0;
              uVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              uVar3 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar3 & 1) == 0) {
                local_290 = 0;
              }
              else {
                local_290 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                _objc_retainAutoreleasedReturnValue();
                local_161 = 1;
                local_160 = local_290;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_158 = local_290;
              if ((local_161 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_160);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
              uVar6 = local_140;
              FUN_007d5f98();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_158;
              local_170 = uVar6;
              FUN_007d5f98();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_170;
              local_178 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
              if (uVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_170);
              }
              uVar6 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
              if (uVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_178);
              }
              _objc_storeStrong(&local_178);
              _objc_storeStrong(&local_170,0);
              _objc_storeStrong(&local_158,0);
              _objc_storeStrong(&local_140,0);
              local_134 = 0;
            }
            else {
              local_134 = 3;
            }
            _objc_storeStrong(&local_130,0);
          }
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    puVar4 = DAT_028ccd20;
    DAT_028ccd20 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    DAT_026f46c9 = 0;
    puVar4 = DAT_028ccd20;
    (*(code *)PTR__objc_retain_02578638)();
    local_134 = 1;
    local_b0 = puVar4;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(local_d8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

