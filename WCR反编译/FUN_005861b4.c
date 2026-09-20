// FUN_005861b4 @ 005861b4

/* WARNING: Removing unreachable block (ram,0x00587cc0) */

void FUN_005861b4(double param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  undefined8 *local_508;
  uint local_2e4;
  undefined *local_298;
  undefined *local_290;
  undefined *local_1d8;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  undefined *local_110;
  double local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  byte local_da;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  byte local_c1;
  int local_c0;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_00588bf0();
  if (((param_2 & 1) != 0) && ((DAT_028cb628 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar2;
    FUN_0057bc48();
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8);
    if (DAT_028cb5f8 <= param_1) {
      DAT_028cb628 = 1;
      _WCRefineCrashReporterBreadcrumb(&cf_moments_sched_tickbegin);
      local_c1 = 0;
      puVar2 = DAT_028cb5b0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb5b0,PTR_s_mutableCopy_0269d8a0);
      local_d9 = 0;
      local_1d8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_1d8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_1d8;
      }
      local_d9 = puVar2 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = local_1d8;
      if ((local_d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_da = 0;
      local_e8 = (undefined *)0x0;
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      local_f0 = puVar2;
      while (local_f0 = local_f0 + -1, -1 < (long)local_f0) {
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_f0);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        FUN_0057a910();
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_triggeredAt);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_100;
        local_108 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_isEqualToString__0269ccc8,&cf_triggered);
        if (((((ulong)puVar2 & 1) == 0) ||
            (puVar2 = local_f8, FUN_0057aaf8(), ((ulong)puVar2 & 1) != 0)) ||
           (param_1 = local_108, local_108 <= 0.0)) {
LAB_005866e0:
          puVar2 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_isEqualToString__0269ccc8,&cf_firing);
          if (((ulong)puVar2 & 1) != 0) {
            puVar2 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_mutableCopy_0269d8a0);
            local_110 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257dee0,&cf_state);
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_enabled);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_setObject_atIndexedSubscript__0269e970,local_110,local_f0);
            local_da = 1;
            _objc_storeStrong(&local_110,0);
          }
          local_c0 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8);
          param_1 = param_1 - local_108;
          if (param_1 < 86400.0) goto LAB_005866e0;
          puVar2 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          FUN_0058abd8();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_removeObjectAtIndex__0269d530,local_f0);
          local_da = 1;
          local_c0 = 5;
        }
        _objc_storeStrong(&local_100);
        _objc_storeStrong(&local_f8,0);
      }
      _memset(auStack_158,0,0x40);
      puVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_290 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10)
      ;
      if (local_290 != (undefined *)0x0) {
        lVar7 = *local_148;
        local_298 = (undefined *)0x0;
        do {
          do {
            if (*local_148 - lVar7 != 0) {
              _objc_enumerationMutation(*local_148 - lVar7,puVar2);
            }
            uVar8 = *(ulong *)(local_150 + (long)local_298 * 8);
            local_118 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            FUN_0057a910();
            _objc_retainAutoreleasedReturnValue();
            local_160 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar3 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2e4 = 1;
            if ((uVar8 & 1) != 0) {
              uVar8 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_isEqualToString__0269ccc8,&cf_pending);
              local_2e4 = (uint)uVar8 ^ 1;
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if ((local_2e4 & 1) == 0) {
              uVar3 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar9 = param_1;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8);
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if (dVar9 < param_1) {
                local_c0 = 0;
              }
              else {
                _objc_storeStrong(&local_e8,local_118);
                local_c0 = 6;
              }
            }
            else {
              local_c0 = 7;
            }
            _objc_storeStrong(&local_160,0);
            if ((local_c0 != 0) && (local_c0 != 7)) goto LAB_00586ca8;
            local_298 = local_298 + 1;
          } while (local_298 < local_290);
          local_290 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_298 = (undefined *)0x0;
        } while (local_290 != (undefined *)0x0);
      }
      local_c0 = 0;
LAB_00586ca8:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_e8 != (undefined *)0x0) {
        puVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        FUN_0057a910();
        _objc_retainAutoreleasedReturnValue();
        local_168 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        for (local_170 = (undefined *)0x0; puVar2 = local_170, puVar4 = local_d0,
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0), puVar2 < puVar4;
            local_170 = local_170 + 1) {
          puVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_170);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar6 & 1) != 0) {
            puVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_170);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_178 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257ded0,&cf_state)
            ;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_setObject_atIndexedSubscript__0269e970,local_178,local_170);
            puVar4 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_copy_0269d150);
            puVar2 = local_e8;
            local_e8 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_da = 1;
            local_c0 = 8;
            _objc_storeStrong(&local_178,0);
            break;
          }
        }
        _objc_storeStrong(&local_168,0);
      }
      if ((local_da & 1) != 0) {
        FUN_00588e58(local_d0);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (local_e8 != (undefined *)0x0) {
        puVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        FUN_0057a910();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_moments_sched_firetask___);
        _objc_retainAutoreleasedReturnValue();
        _WCRefineCrashReporterBreadcrumb();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar2 = local_e8;
        FUN_0058f760();
        local_179 = (byte)puVar2;
        puVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        FUN_0057a910();
        _objc_retainAutoreleasedReturnValue();
        local_188 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        for (local_190 = (undefined *)0x0; puVar2 = local_190, puVar4 = local_d0,
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0), puVar2 < puVar4;
            local_190 = local_190 + 1) {
          puVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_190);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar6 & 1) != 0) {
            puVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_190);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_198 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_198;
            FUN_005820e8(local_198,&cf_fireCount,0);
            local_1a0 = puVar2;
            if ((local_179 & 1) != 0) {
              local_1a0 = puVar2 + 1;
            }
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_1a0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_fireCount);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_198;
            FUN_005820e8(local_198,&cf_repeatLimit,0);
            local_1a9 = false;
            local_1a8 = puVar2;
            if ((local_179 & 1) != 0) {
              puVar2 = local_198;
              FUN_0057aaf8();
              local_1a9 = false;
              if ((((ulong)puVar2 & 1) != 0) && (local_1a9 = false, 0 < (long)local_1a8)) {
                local_1a9 = (long)local_1a8 <= (long)local_1a0;
              }
            }
            if ((((local_179 & 1) == 0) ||
                (puVar2 = local_198, FUN_0057aaf8(), ((ulong)puVar2 & 1) == 0)) ||
               ((local_1a9 & 1) != 0)) {
              if ((local_179 & 1) == 0) {
                local_508 = &DAT_0257dee0;
              }
              else {
                local_508 = &DAT_0257ded8;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,*local_508,&cf_state)
              ;
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_enabled);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              if ((local_179 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8)
                ;
                (*(code *)PTR__objc_msgSend_02578628)
                          (param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                           &cf_triggeredAt);
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257dec8,
                         &cf_state);
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_enabled);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8);
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                         &cf_lastFiredAt);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_timeIntervalSince1970_0269cfc8);
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                         &cf_triggeredAt);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              FUN_0057ea3c(local_198);
              puVar4 = local_198;
              FUN_0058020c(local_198,local_b0);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_1b8 = puVar4;
              if (puVar4 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_timeIntervalSince1970_0269cfc8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_fireAt);
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
              _objc_storeStrong(&local_1b8,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_setObject_atIndexedSubscript__0269e970,local_198,local_190);
            local_c0 = 0xb;
            _objc_storeStrong(&local_198,0);
            break;
          }
        }
        FUN_00588e58(local_d0);
        _objc_storeStrong(&local_188,0);
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_d0,0);
      local_c0 = 0;
      _WCRefineCrashReporterBreadcrumb(&cf_moments_sched_tickend);
      DAT_028cb628 = 0;
      if ((local_c1 & 1) != 0) {
        _objc_exception_rethrow();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x587cb0);
        (*pcVar1)();
      }
      local_c0 = 0;
    }
    else {
      local_c0 = 1;
    }
    _objc_storeStrong(&local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

