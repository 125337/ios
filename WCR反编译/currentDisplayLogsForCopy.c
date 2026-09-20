// currentDisplayLogsForCopy @ 00907d80

/* Function Stack Size: 0x10 bytes */

ID LogFloatingBall::currentDisplayLogsForCopy(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_258;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  long local_208;
  cfstringStruct *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  ID local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  ID local_148;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_activeLogType_026aa060);
  IVar1 = local_138;
  local_148 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isMonitorEnabledForCurrentMode_026a9f10);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &::cf___;
  }
  else {
    local_159 = 0;
    local_169 = 0;
    local_179 = 0;
    local_189 = 0;
    local_258 = PTR_WCNavigationMonitor_026cea60;
    if (local_148 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      local_158 = local_258;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = local_258;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      local_179 = 1;
      local_178 = local_258;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_189 = 1;
      local_188 = local_258;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_258;
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    if ((local_179 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_178);
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    puVar3 = local_150;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
       puVar3 == (undefined *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = &::cf___;
      local_190 = 1;
    }
    else {
      puVar3 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_componentsSeparatedByString__0269d3c0,&::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = puVar3;
      if (local_148 == 3) {
        IVar1 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_nsLogPreciseKeywords_026aa078);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
        if (IVar1 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar3;
          _memset(auStack_1f8,0,0x40);
          puVar3 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                     0x10);
          if (local_2a0 != (undefined *)0x0) {
            lVar5 = *local_1e8;
            local_2a8 = (undefined *)0x0;
            do {
              do {
                if (*local_1e8 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1e8 - lVar5,puVar3);
                }
                local_1b8 = *(undefined8 *)(local_1f0 + (long)local_2a8 * 8);
                IVar1 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_line_matchesAnyKeyword__026aa0a8,local_1b8,local_1a8);
                if ((IVar1 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b0,PTR_s_addObject__0269d180,local_1b8);
                }
                local_2a8 = local_2a8 + 1;
              } while (local_2a8 < local_2a0);
              local_2a0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                         auStack_a8,0x10);
              local_2a8 = (undefined *)0x0;
            } while (local_2a0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_1a0,local_1b0);
          _objc_storeStrong(&local_1b0,0);
        }
        _objc_storeStrong(&local_1a8,0);
      }
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_200 = pcVar4;
      _memset(auStack_248,0,0x40);
      puVar3 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_128,0x10
                );
      if (local_2f0 != (undefined *)0x0) {
        lVar5 = *local_238;
        local_2f8 = (undefined *)0x0;
        do {
          do {
            if (*local_238 - lVar5 != 0) {
              _objc_enumerationMutation(*local_238 - lVar5,puVar3);
            }
            lVar6 = *(long *)(local_240 + (long)local_2f8 * 8);
            local_208 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
            if (lVar6 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_208);
            }
            local_2f8 = local_2f8 + 1;
          } while (local_2f8 < local_2f0);
          local_2f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_128,
                     0x10);
          local_2f8 = (undefined *)0x0;
        } while (local_2f0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar4 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_200,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      local_190 = 1;
      local_130 = pcVar4;
      _objc_storeStrong(&local_200);
      _objc_storeStrong(&local_1a0,0);
      _objc_storeStrong(&local_198,0);
    }
    _objc_storeStrong(&local_150,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

