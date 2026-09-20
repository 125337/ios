// FUN_0064e414 @ 0064e414

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0064e414(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *local_498;
  cfstringStruct *local_478;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  cfstringStruct *local_380;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  cfstringStruct *local_2a8;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  long local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  long local_230;
  cfstringStruct *local_228;
  undefined *local_220;
  undefined4 local_218;
  undefined4 local_214;
  code *local_210;
  undefined *local_208;
  cfstringStruct *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined4 local_148;
  undefined8 local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_130,param_1);
  uVar2 = (uint)param_2;
  local_138 = param_2;
  FUN_0064d8b4();
  if ((uVar2 & 1) == 0) {
    pcVar3 = local_130;
    FUN_0064f7f4(local_130,local_138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_148 = 1;
  }
  else {
    pcVar3 = local_130;
    FUN_0064f7f4(local_130,local_138);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_130;
    local_150 = pcVar3;
    FUN_0064fac4(local_130,local_138);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar5;
    _memset(auStack_1a8,0,0x40);
    pcVar3 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_330 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_330 != (cfstringStruct *)0x0) {
      lVar8 = *local_198;
      local_338 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_198 - lVar8 != 0) {
            _objc_enumerationMutation(*local_198 - lVar8,pcVar3);
          }
          lVar9 = *(long *)(local_1a0 + (long)local_338 * 8);
          local_168 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = lVar9;
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,lVar9);
          }
          _objc_storeStrong(&local_1b0,0);
          local_338 = (cfstringStruct *)((long)&local_338->field0_0x0 + 1);
        } while (local_338 < local_330);
        local_330 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_338 = (cfstringStruct *)0x0;
      } while (local_330 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
    pcVar4 = local_130;
    local_1b8 = pcVar3;
    FUN_0064f9ac();
    _objc_retainAutoreleasedReturnValue();
    local_380 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_380 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = local_380;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar3 = local_130;
    FUN_00658d7c(local_130,local_138);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_130;
    local_1c8 = pcVar3;
    FUN_00659318(local_130,local_138);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_150;
    local_1d0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
    if (((pcVar3 == (cfstringStruct *)0x0) &&
        (pcVar3 = local_1c8, (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0),
        pcVar3 == (cfstringStruct *)0x0)) &&
       (pcVar3 = local_1d0, (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0),
       pcVar3 == (cfstringStruct *)0x0)) {
      local_148 = 1;
    }
    else {
      pcVar3 = local_158;
      ppuVar6 = &local_220;
      local_220 = PTR___NSConcreteStackBlock_02578660;
      local_218 = 0xc2000000;
      local_214 = 0;
      local_210 = FUN_0065ae00;
      local_208 = &DAT_0257e738;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_160;
      local_200 = pcVar3;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar4 = local_150;
      local_1f8 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar3 = local_1c0;
      local_1f0 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = pcVar3;
      local_1e0 = local_138;
      _objc_retainBlock();
      local_1d8 = ppuVar6;
      (*(code *)ppuVar6[2])(ppuVar6,local_1d0);
      (*(code *)local_1d8[2])(local_1d8,local_1c8);
      pcVar3 = local_130;
      FUN_0065b250();
      _objc_retainAutoreleasedReturnValue();
      local_228 = pcVar3;
      _memset(auStack_270,0,0x40);
      pcVar3 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
      local_418 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10
                );
      if (local_418 != (cfstringStruct *)0x0) {
        lVar8 = *local_260;
        local_420 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_260 - lVar8 != 0) {
              _objc_enumerationMutation(*local_260 - lVar8,pcVar3);
            }
            lVar9 = *(long *)(local_268 + (long)local_420 * 8);
            local_230 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
            _objc_retainAutoreleasedReturnValue();
            local_278 = lVar9;
            if ((lVar9 == 0) ||
               (pcVar4 = local_158,
               (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_containsObject__0269cbb8,lVar9)
               , ((ulong)pcVar4 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_removeObject__0269d678,local_230);
              local_148 = 5;
            }
            else {
              pcVar4 = local_228;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_228,PTR_s_objectForKeyedSubscript__0269d098,local_278);
              _objc_retainAutoreleasedReturnValue();
              local_280 = pcVar4;
              if (pcVar4 == (cfstringStruct *)0x0) {
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
                           0xffffffff);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_section)
                ;
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
                           0xffffffff);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_row);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                           &cf_hasPosition);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_280;
                local_288 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_objectForKeyedSubscript__0269d098,&cf_node);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = local_280;
                local_290 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_objectForKeyedSubscript__0269d098,&cf_section);
                _objc_retainAutoreleasedReturnValue();
                local_478 = pcVar4;
                if (pcVar4 == (cfstringStruct *)0x0) {
                  local_298 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
                  _objc_retainAutoreleasedReturnValue();
                  local_478 = local_298;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,local_478,
                           &cf_section);
                if (pcVar4 == (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_release_02578630)(local_298);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                pcVar4 = local_280;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_objectForKeyedSubscript__0269d098,&cf_row);
                _objc_retainAutoreleasedReturnValue();
                local_498 = pcVar4;
                if (pcVar4 == (cfstringStruct *)0x0) {
                  local_2a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
                  _objc_retainAutoreleasedReturnValue();
                  local_498 = local_2a8;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,local_498,&cf_row);
                if (pcVar4 == (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_release_02578630)(local_2a8);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                pcVar4 = local_288;
                bVar1 = false;
                if (local_288 != (cfstringStruct *)0x0) {
                  pcVar7 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = pcVar4 != pcVar7;
                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                }
                if (bVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,local_288,&cf_msg
                            );
                }
                pcVar4 = local_290;
                bVar1 = false;
                if (local_290 != (cfstringStruct *)0x0) {
                  pcVar7 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = pcVar4 != pcVar7;
                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                }
                if (bVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,local_290,
                             &cf_node);
                }
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                           &cf_hasPosition);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                _objc_storeStrong(&local_290);
                _objc_storeStrong(&local_288,0);
              }
              _objc_storeStrong(&local_280,0);
              local_148 = 0;
            }
            _objc_storeStrong(&local_278,0);
            local_420 = (cfstringStruct *)((long)&local_420->field0_0x0 + 1);
          } while (local_420 < local_418);
          local_418 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                     0x10);
          local_420 = (cfstringStruct *)0x0;
        } while (local_418 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      FUN_0065b41c(local_150);
      _objc_storeStrong(&local_228);
      _objc_storeStrong(&local_1d8,0);
      _objc_storeStrong(&local_1e8,0);
      _objc_storeStrong(&local_1f0,0);
      _objc_storeStrong(&local_1f8,0);
      _objc_storeStrong(&local_200,0);
      local_148 = 0;
    }
    _objc_storeStrong(&local_1d0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

