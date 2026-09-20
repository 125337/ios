// FUN_010da158 @ 010da158

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010da158(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *local_3f8;
  undefined1 *local_3e8;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3a8;
  cfstringStruct *local_378;
  void *local_348;
  void *local_340;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  undefined1 *local_2a0;
  undefined1 *local_290;
  undefined1 *local_280;
  undefined1 *local_270;
  cfstringStruct *local_268;
  bool local_259;
  cfstringStruct *local_258;
  byte local_249;
  undefined *local_248;
  cfstringStruct *local_240;
  bool local_231;
  cfstringStruct *local_230;
  byte local_221;
  undefined *local_220;
  cfstringStruct *local_218;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined1 *local_168;
  cfstringStruct *local_160;
  undefined4 local_154;
  cfstringStruct *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_150,param_1);
  pcVar3 = local_150;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    puVar4 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_154 = 1;
    local_148 = puVar4;
  }
  else {
    pcVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_exclusiveScenes);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_160 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_1b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar5;
      pvVar6 = _memset(auStack_208,0,0x40);
      FUN_010ecc84();
      _objc_retainAutoreleasedReturnValue();
      local_340 = pvVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_340 != (void *)0x0) {
        lVar7 = *local_1f8;
        local_348 = (void *)0x0;
        do {
          do {
            if (*local_1f8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar7,pvVar6);
            }
            lVar9 = *(long *)(local_200 + (long)local_348 * 8);
            local_1c8 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_integerValue_026ca750);
            FUN_010db7dc();
            _objc_retainAutoreleasedReturnValue();
            local_210 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
            pcVar3 = local_150;
            if (lVar9 == 0) {
              local_154 = 5;
            }
            else {
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf___Path);
              _objc_retainAutoreleasedReturnValue();
              FUN_010ecf24();
              local_378 = local_150;
              local_221 = 0;
              local_231 = false;
              bVar1 = ((ulong)pcVar3 & 1) == 0;
              if (bVar1) {
                local_378 = &cf___;
              }
              else {
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf___Path);
                _objc_retainAutoreleasedReturnValue();
                local_221 = 1;
                local_220 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_378,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                local_230 = local_378;
              }
              local_231 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_218 = local_378;
              if ((local_231 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_230);
              }
              if ((local_221 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_220);
              }
              (*(code *)PTR__objc_release_02578630)(puVar2);
              pcVar3 = local_150;
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf___NightPath);
              _objc_retainAutoreleasedReturnValue();
              FUN_010ecf24();
              local_3a8 = local_150;
              local_249 = 0;
              local_259 = false;
              bVar1 = ((ulong)pcVar3 & 1) == 0;
              if (bVar1) {
                local_3a8 = &cf___;
              }
              else {
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf___NightPath);
                _objc_retainAutoreleasedReturnValue();
                local_249 = 1;
                local_248 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3a8,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                local_258 = local_3a8;
              }
              local_259 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_240 = local_3a8;
              if ((local_259 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_258);
              }
              if ((local_249 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_248);
              }
              (*(code *)PTR__objc_release_02578630)(puVar2);
              pcVar3 = local_218;
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_length_0269cca0);
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_3c8 = local_240;
              }
              else {
                local_3c8 = local_218;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_268 = local_3c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_length_0269cca0);
              if (local_3c8 == (cfstringStruct *)0x0) {
                local_154 = 5;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_210)
                ;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_268)
                ;
                local_154 = 0;
              }
              _objc_storeStrong(&local_268);
              _objc_storeStrong(&local_240,0);
              _objc_storeStrong(&local_218,0);
            }
            _objc_storeStrong(&local_210,0);
            local_348 = (void *)((long)local_348 + 1);
          } while (local_348 < local_340);
          local_340 = pvVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                     0x10);
          local_348 = (void *)0x0;
        } while (local_340 != (void *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pvVar6);
      puVar4 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined1 *)0x0) {
        pcVar3 = local_150;
        FUN_010ecf24(local_150,&cf_path);
        bVar1 = false;
        if ((((ulong)pcVar3 & 1) == 0) &&
           (pcVar3 = local_150, FUN_010ecf24(local_150,&cf_nightPath), ((ulong)pcVar3 & 1) == 0)) {
          local_3e8 = *(undefined1 **)PTR____NSArray0___02578280;
        }
        else {
          local_130 = &cf_home;
          local_3e8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_130,1);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_270 = local_3e8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = local_3e8;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_270);
        }
      }
      else {
        puVar4 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
        if ((puVar4 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) ||
           (puVar4 = local_1c0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_count_0269cfe0),
           (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar4)) {
          puVar4 = local_1b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = puVar4;
        }
        else {
          puVar4 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_containsObject__0269cbb8,&cf_home);
          bVar1 = ((ulong)puVar4 & 1) == 0;
          if (bVar1) {
            local_290 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            local_3f8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_140 = local_290;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_140,1);
            _objc_retainAutoreleasedReturnValue();
            local_2a0 = local_3f8;
          }
          else {
            local_138 = &cf_home;
            local_3f8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_138,1);
            _objc_retainAutoreleasedReturnValue();
            local_280 = local_3f8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = local_3f8;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_2a0);
            (*(code *)PTR__objc_release_02578630)(local_290);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_280);
          }
        }
      }
      local_154 = 1;
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b8,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar2;
      _memset(auStack_1b0,0,0x40);
      pcVar3 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_2e8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10)
      ;
      if (local_2e8 != (cfstringStruct *)0x0) {
        lVar7 = *local_1a0;
        local_2f0 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_1a0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar7,pcVar3);
            }
            uVar8 = *(ulong *)(local_1a8 + (long)local_2f0 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_170 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((uVar8 & 1) != 0) &&
                (uVar8 = local_170,
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0), uVar8 != 0))
               && (puVar4 = local_168,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_containsObject__0269cbb8,local_170),
                  ((ulong)puVar4 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_170);
            }
            local_2f0 = (cfstringStruct *)((long)&local_2f0->field0_0x0 + 1);
          } while (local_2f0 < local_2e8);
          local_2e8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_2f0 = (cfstringStruct *)0x0;
        } while (local_2e8 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar4 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = puVar4;
      local_154 = 1;
      _objc_storeStrong(&local_168,0);
    }
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_148);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

