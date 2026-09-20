// normalizedStrokes @ 019e2724

/* Function Stack Size: 0x10 bytes */

ID WCRefineGlyphDrawingCanvasView::normalizedStrokes(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_3c0;
  double local_3b8;
  double local_3a0;
  double local_398;
  ulong local_368;
  ulong local_360;
  ulong local_320;
  ulong local_318;
  double local_2f8;
  double local_2f0;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  undefined *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  undefined *local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_170;
  double local_168;
  double local_160;
  SEL local_158;
  ID local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar9 = 1.0;
  local_168 = 1.0;
  local_158 = param_2;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  local_190 = dVar9;
  _CGRectGetWidth(dVar9,in_d1);
  local_2f0 = dVar9;
  if (dVar9 <= local_168) {
    local_2f0 = local_168;
  }
  local_198 = local_2f0;
  local_160 = local_2f0;
  local_3b8 = 1.0;
  local_1a8 = 1.0;
  local_170 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_bounds_026ca548);
  local_1d0 = local_3b8;
  local_1c8 = dVar9;
  _CGRectGetHeight(local_3b8,dVar9,in_d2,in_d3);
  local_2f8 = local_3b8;
  if (local_3b8 <= local_1a8) {
    local_2f8 = local_1a8;
  }
  local_1d8 = local_2f8;
  local_1a0 = local_2f8;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1b0 = local_3b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar1;
  _memset(auStack_228,0,0x40);
  IVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_strokes_026bb048);
  _objc_retainAutoreleasedReturnValue();
  local_318 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_318 != 0) {
    lVar6 = *local_218;
    local_320 = 0;
    do {
      do {
        local_3c0 = local_2f8;
        if (*local_218 - lVar6 != 0) {
          _objc_enumerationMutation(*local_218 - lVar6,IVar2);
          local_3c0 = local_2f8;
        }
        uVar7 = *(ulong *)(local_220 + local_320 * 8);
        local_1e8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_count_0269cfe0);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_2f8 = local_3c0;
        if (uVar7 != 0) {
          uVar7 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,uVar7);
          _objc_retainAutoreleasedReturnValue();
          local_230 = puVar1;
          _memset(auStack_278,0,0x40);
          uVar7 = local_1e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_360 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128,
                     0x10);
          if (local_360 != 0) {
            lVar8 = *local_268;
            local_368 = 0;
            do {
              do {
                if (*local_268 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_268 - lVar8,uVar7);
                }
                local_238 = *(undefined8 *)(local_270 + local_368 * 8);
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_CGPointValue_0269e330);
                puVar1 = local_230;
                local_148 = &cf_x;
                local_398 = local_3c0 / local_160;
                if (1.0 < local_398) {
                  local_398 = 1.0;
                }
                if (local_398 <= 0.0) {
                  local_3a0 = 0.0;
                }
                else {
                  local_3a0 = local_398;
                }
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3a0,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_140 = &cf_y;
                local_3b8 = local_3b8 / local_1a0;
                if (1.0 < local_3b8) {
                  local_3b8 = 1.0;
                }
                if (local_3b8 <= 0.0) {
                  local_3c0 = 0.0;
                }
                else {
                  local_3c0 = local_3b8;
                }
                puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_138 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_130 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148,2);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                local_368 = local_368 + 1;
              } while (local_368 < local_360);
              local_360 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                         auStack_128,0x10);
              local_368 = 0;
            } while (local_360 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_230);
          _objc_storeStrong(&local_230,0);
          local_2f8 = local_3c0;
        }
        local_320 = local_320 + 1;
      } while (local_320 < local_318);
      local_318 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
      local_320 = 0;
    } while (local_318 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_1e0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

