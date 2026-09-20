// FUN_007e89c8 @ 007e89c8

void FUN_007e89c8(undefined8 param_1,long param_2)

{
  long lVar1;
  u_int32_t uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  dispatch_time_t dVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  ulong local_7f8;
  ulong local_7f0;
  ulong local_798;
  ulong local_790;
  byte local_648;
  ulong local_618;
  ulong local_610;
  ulong local_550;
  ulong local_548;
  long local_4e0;
  ulong local_4d8;
  undefined1 auStack_4d0 [8];
  long local_4c8;
  long *local_4c0;
  undefined8 local_490;
  double local_488;
  ulong local_480;
  undefined1 auStack_478 [8];
  long local_470;
  long *local_468;
  undefined8 local_438;
  long local_430;
  byte local_421;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  code *local_410;
  undefined *local_408;
  long local_400;
  undefined8 local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  long local_3d0;
  long local_3c8;
  undefined8 local_3c0;
  long local_3b8;
  long local_3b0;
  long local_3a8;
  long local_3a0;
  long local_398;
  long local_390;
  undefined1 local_381;
  undefined *local_380;
  byte local_371;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  undefined8 local_320;
  undefined *local_318;
  undefined *local_310;
  ulong local_308;
  ulong local_300;
  ulong local_2f8;
  ulong local_2f0;
  ulong local_2e8;
  long local_2e0;
  double local_2d8;
  byte local_2c9;
  long local_2c8;
  int local_2bc;
  ulong local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  ulong local_268;
  ulong local_260;
  ulong local_258;
  ulong local_250 [3];
  long local_238;
  long local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_238 = param_2;
  local_230 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  **(undefined8 **)(param_2 + 0x20) = param_1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = DAT_028cce88;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce88,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_250[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_mutableCopy_0269d8a0);
  local_258 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
  local_260 = uVar4;
  while (local_260 = local_260 - 1, 0 < (long)local_260) {
    uVar2 = _arc4random_uniform((int)local_260 + 1);
    local_268 = (ulong)uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_258,PTR_s_exchangeObjectAtIndex_withObject_026a84f8,local_260,local_268);
  }
  _memset(auStack_2b0,0,0x40);
  uVar4 = local_258;
  (*(code *)PTR__objc_retain_02578638)();
  local_548 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_a8,0x10);
  if (local_548 != 0) {
    lVar11 = *local_2a0;
    local_550 = 0;
    do {
      do {
        if (*local_2a0 - lVar11 != 0) {
          _objc_enumerationMutation(*local_2a0 - lVar11,uVar4);
        }
        local_270 = *(undefined8 *)(local_2a8 + local_550 * 8);
        uVar5 = DAT_028cce88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cce88,PTR_s_objectForKeyedSubscript__0269d098,local_270);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = uVar5;
        if ((uVar5 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0), uVar5 == 0)) {
          local_2bc = 6;
        }
        else {
          lVar12 = DAT_028cce80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cce80,PTR_s_objectForKeyedSubscript__0269d098,local_270);
          _objc_retainAutoreleasedReturnValue();
          local_2c9 = 1;
          local_2d8 = 0.0;
          local_2c8 = lVar12;
          if (lVar12 != 0) {
            dVar14 = **(double **)(param_2 + 0x20);
            dVar15 = dVar14;
            (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_doubleValue_026ca608);
            local_2d8 = dVar14 - dVar15;
            if (local_2d8 < *(double *)(param_2 + 0x28)) {
              local_2c9 = 0;
            }
          }
          if (((local_2c9 & 1) == 0) ||
             (uVar5 = local_2b8,
             (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0), uVar5 == 0)) {
            local_2bc = 0;
          }
          else {
            local_2e0 = 0;
            local_2e8 = 0xffffffffffffffff;
            for (local_2f0 = 0; uVar5 = local_2f0, uVar6 = local_2b8,
                (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0), uVar5 < uVar6
                ; local_2f0 = local_2f0 + 1) {
              uVar5 = local_2b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f0);
              _objc_retainAutoreleasedReturnValue();
              local_2f8 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_2f8;
              local_300 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageId);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_308 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf______);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = DAT_028ccea0;
              local_310 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028ccea0,PTR_s_containsObject__0269cbb8,puVar3);
              if ((uVar5 & 1) == 0) {
                uVar5 = DAT_028cce70;
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_028cce70,PTR_s_containsObject__0269cbb8,local_300);
                if (((uVar5 & 1) == 0) &&
                   (uVar5 = DAT_028cce78,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (DAT_028cce78,PTR_s_containsObject__0269cbb8,local_300),
                   (uVar5 & 1) == 0)) {
                  _objc_storeStrong(&local_2e0,local_2f8);
                  local_2e8 = local_2f0;
                  local_2bc = 7;
                }
                else {
                  local_2bc = 0;
                }
              }
              else {
                local_2bc = 9;
              }
              _objc_storeStrong(&local_310);
              _objc_storeStrong(&local_308,0);
              _objc_storeStrong(&local_300,0);
              _objc_storeStrong(&local_2f8,0);
              if ((local_2bc != 0) && (local_2bc == 7)) break;
            }
            if ((local_2e0 == 0) &&
               (uVar5 = local_2b8,
               (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0), uVar5 != 0)) {
              puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_318 = puVar3;
              _memset(auStack_360,0,0x40);
              uVar5 = local_2b8;
              (*(code *)PTR__objc_retain_02578638)();
              local_610 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                         auStack_128,0x10);
              if (local_610 != 0) {
                lVar12 = *local_350;
                local_618 = 0;
                do {
                  do {
                    if (*local_350 - lVar12 != 0) {
                      _objc_enumerationMutation(*local_350 - lVar12,uVar5);
                    }
                    uVar13 = *(undefined8 *)(local_358 + local_618 * 8);
                    local_320 = uVar13;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = local_320;
                    local_368 = uVar13;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_320,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageId);
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = DAT_028cce70;
                    local_370 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_028cce70,PTR_s_containsObject__0269cbb8,local_368);
                    local_648 = 1;
                    if ((uVar6 & 1) == 0) {
                      uVar6 = DAT_028cce78;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_028cce78,PTR_s_containsObject__0269cbb8,local_368);
                      local_648 = (byte)uVar6;
                    }
                    local_371 = local_648 & 1;
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf______);
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = DAT_028ccea0;
                    local_380 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_028ccea0,PTR_s_containsObject__0269cbb8,puVar3);
                    local_381 = (undefined1)uVar6;
                    if (((local_371 & 1) != 0) || ((uVar6 & 1) != 0)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_318,PTR_s_addObject__0269d180,local_320);
                    }
                    _objc_storeStrong(&local_380);
                    _objc_storeStrong(&local_370,0);
                    _objc_storeStrong(&local_368,0);
                    local_618 = local_618 + 1;
                  } while (local_618 < local_610);
                  local_610 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                             auStack_128,0x10);
                  local_618 = 0;
                } while (local_610 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar5);
              puVar3 = local_318;
              (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_count_0269cfe0);
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2b8,PTR_s_removeObjectsInArray__026a8500,local_318);
              }
              _objc_storeStrong(&local_318,0);
            }
            if (local_2e0 == 0) {
              local_2bc = 6;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2b8,PTR_s_removeObjectAtIndex__0269d530,local_2e8);
              lVar12 = local_2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = local_2e0;
              local_390 = lVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageId);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = DAT_028cce70;
              local_398 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028cce70,PTR_s_containsObject__0269cbb8,local_390);
              if (((uVar5 & 1) == 0) &&
                 (uVar5 = DAT_028cce78,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (DAT_028cce78,PTR_s_containsObject__0269cbb8,local_390), (uVar5 & 1) == 0
                 )) {
                lVar12 = DAT_028cce98;
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_028cce98,PTR_s_objectForKeyedSubscript__0269d098,local_398);
                _objc_retainAutoreleasedReturnValue();
                local_3a0 = lVar12;
                if (lVar12 == 0) {
                  local_2bc = 6;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (lVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_codeIndexMap);
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = local_3a0;
                  local_3a8 = lVar12;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_3a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_errorCountMap);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_3b0 = lVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (**(undefined8 **)(param_2 + 0x20),PTR__OBJC_CLASS___NSNumber_026ce038,
                             PTR_s_numberWithDouble__0269d6d0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028cce80,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                             local_270);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028cce70,PTR_s_addObject__0269d180,local_390);
                  lVar12 = local_390;
                  **(undefined1 **)(param_2 + 0x30) = 1;
                  (*(code *)PTR__objc_retain_02578638)();
                  uVar7 = local_270;
                  local_3b8 = lVar12;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar12 = local_398;
                  local_3c0 = uVar7;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar8 = local_3a8;
                  local_3c8 = lVar12;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar12 = local_3b0;
                  local_3d0 = lVar8;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar1 = local_3b8;
                  uVar7 = local_3c0;
                  local_3d8 = lVar12;
                  local_420 = PTR___NSConcreteStackBlock_02578660;
                  local_418 = 0xc2000000;
                  local_414 = 0;
                  local_410 = FUN_007ea9c4;
                  local_408 = &DAT_025801a0;
                  (*(code *)PTR__objc_retain_02578638)();
                  uVar13 = local_3c0;
                  local_400 = lVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar12 = local_3c8;
                  local_3f8 = uVar13;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar8 = local_3d0;
                  local_3f0 = lVar12;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar12 = local_3d8;
                  local_3e8 = lVar8;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_3e0 = lVar12;
                  FUN_007ea400(lVar1,uVar7,&local_420);
                  local_2bc = 5;
                  _objc_storeStrong(&local_3e0);
                  _objc_storeStrong(&local_3e8,0);
                  _objc_storeStrong(&local_3f0,0);
                  _objc_storeStrong(&local_3f8,0);
                  _objc_storeStrong(&local_400,0);
                  _objc_storeStrong(&local_3d8,0);
                  _objc_storeStrong(&local_3d0,0);
                  _objc_storeStrong(&local_3c8,0);
                  _objc_storeStrong(&local_3c0,0);
                  _objc_storeStrong(&local_3b8,0);
                  _objc_storeStrong(&local_3b0,0);
                  _objc_storeStrong(&local_3a8,0);
                }
                _objc_storeStrong(&local_3a0,0);
              }
              else {
                local_2bc = 6;
              }
              _objc_storeStrong(&local_398);
              _objc_storeStrong(&local_390,0);
            }
            _objc_storeStrong(&local_2e0,0);
          }
          _objc_storeStrong(&local_2c8,0);
        }
        _objc_storeStrong(&local_2b8,0);
        if ((local_2bc != 0) && (local_2bc != 6)) goto LAB_007e9cbc;
        local_550 = local_550 + 1;
      } while (local_550 < local_548);
      local_548 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_a8,0x10);
      local_550 = 0;
    } while (local_548 != 0);
  }
  local_2bc = 0;
LAB_007e9cbc:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_421 = 0;
  local_430 = 0;
  _memset(auStack_478,0,0x40);
  uVar4 = DAT_028cce88;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce88,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_790 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_790 != 0) {
    lVar11 = *local_468;
    local_798 = 0;
    do {
      do {
        if (*local_468 - lVar11 != 0) {
          _objc_enumerationMutation(*local_468 - lVar11,uVar4);
        }
        local_438 = *(undefined8 *)(local_470 + local_798 * 8);
        uVar5 = DAT_028cce88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cce88,PTR_s_objectForKeyedSubscript__0269d098,local_438);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = 0;
        local_480 = uVar5;
        if (uVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
          lVar12 = 0;
          if (uVar5 != 0) {
            local_421 = 1;
            uVar5 = local_480;
            (*(code *)PTR__objc_msgSend_02578628)(local_480,PTR_s_count_0269cfe0);
            lVar12 = local_430 + uVar5;
            local_430 = lVar12;
          }
        }
        _objc_storeStrong(lVar12,&local_480,0);
        local_798 = local_798 + 1;
      } while (local_798 < local_790);
      local_790 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_478,auStack_1a8,0x10)
      ;
      local_798 = 0;
    } while (local_790 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (((local_421 & 1) != 0) && ((**(byte **)(param_2 + 0x30) & 1) == 0)) {
    local_488 = *(double *)(param_2 + 0x28);
    _memset(auStack_4d0,0,0x40);
    uVar4 = DAT_028cce88;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce88,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_7f0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_7f0 != 0) {
      lVar11 = *local_4c0;
      local_7f8 = 0;
      do {
        do {
          if (*local_4c0 - lVar11 != 0) {
            _objc_enumerationMutation(*local_4c0 - lVar11,uVar4);
          }
          local_490 = *(undefined8 *)(local_4c8 + local_7f8 * 8);
          uVar5 = DAT_028cce88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cce88,PTR_s_objectForKeyedSubscript__0269d098,local_490);
          _objc_retainAutoreleasedReturnValue();
          local_4d8 = uVar5;
          iVar10 = 0;
          if (uVar5 == 0) {
LAB_007ea23c:
            local_2bc = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
            iVar10 = 0;
            if (uVar5 == 0) goto LAB_007ea23c;
            lVar12 = DAT_028cce80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028cce80,PTR_s_objectForKeyedSubscript__0269d098,local_490);
            _objc_retainAutoreleasedReturnValue();
            local_4e0 = lVar12;
            if (lVar12 == 0) {
              local_488 = DAT_02323c68;
              local_2bc = 0xe;
            }
            else {
              dVar14 = **(double **)(param_2 + 0x20);
              dVar15 = dVar14;
              (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_doubleValue_026ca608);
              dVar15 = *(double *)(param_2 + 0x28) - (dVar14 - dVar15);
              if ((0.0 < dVar15) && (dVar15 < local_488)) {
                local_488 = dVar15;
              }
              local_2bc = 0;
            }
            _objc_storeStrong(&local_4e0,0);
            iVar10 = local_2bc;
            if (local_2bc == 0) goto LAB_007ea23c;
          }
          _objc_storeStrong(iVar10,&local_4d8,0);
          if (local_2bc != 0) goto LAB_007ea2d0;
          local_7f8 = local_7f8 + 1;
        } while (local_7f8 < local_7f0);
        local_7f0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4d0,auStack_228,
                   0x10);
        local_7f8 = 0;
      } while (local_7f0 != 0);
    }
    local_2bc = 0;
LAB_007ea2d0:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    dVar9 = _dispatch_time(0,(long)(local_488 * 1000000000.0));
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar9,puVar3,&PTR___NSConcreteGlobalBlock_025801d0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_258);
  _objc_storeStrong(local_250,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

