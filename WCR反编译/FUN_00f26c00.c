// FUN_00f26c00 @ 00f26c00

void FUN_00f26c00(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_398;
  undefined *local_390;
  undefined *local_358;
  undefined *local_350;
  undefined *local_308;
  undefined *local_300;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  char *local_250;
  char *local_248;
  ulong local_240;
  char *local_238;
  undefined8 local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  char *local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [128];
  undefined1 auStack_148 [128];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1d0 = 0;
  _objc_storeStrong(&local_1d0,param_1);
  pcVar1 = "VoipUIManager";
  FUN_00f27d14();
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_hideVoipCard_026abee0),
     ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_hideVoipCard_026abee0);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar2;
  _memset(auStack_228,0,0x40);
  local_c8 = &cf_getVoIPWindow;
  local_c0 = &cf_m_mainWindow;
  local_b8 = &cf_window;
  local_b0 = &cf_m_voipToastWindow;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_300 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_300 != (undefined *)0x0) {
    lVar5 = *local_218;
    local_308 = (undefined *)0x0;
    do {
      do {
        if (*local_218 - lVar5 != 0) {
          _objc_enumerationMutation(*local_218 - lVar5,puVar2);
        }
        uVar6 = *(undefined8 *)(local_220 + (long)local_308 * 8);
        local_1e8 = uVar6;
        _NSSelectorFromString();
        local_230 = uVar6;
        if ((local_1d8 != (char *)0x0) &&
           (pcVar1 = local_1d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_respondsToSelector__026ca818,uVar6)
           , ((ulong)pcVar1 & 1) != 0)) {
          pcVar1 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,local_230);
          _objc_retainAutoreleasedReturnValue();
          local_238 = pcVar1;
          if (pcVar1 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,pcVar1);
          }
          _objc_storeStrong(&local_238,0);
        }
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10)
      ;
      local_308 = (undefined *)0x0;
    } while (local_300 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar7 = local_1d0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar7 & 1) != 0) {
    uVar7 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_240 = uVar7;
    if (uVar7 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_1d0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,uVar7);
    }
    _objc_storeStrong(&local_240,0);
  }
  pcVar1 = "VoIPMainWindow";
  _objc_getClass();
  pcVar3 = "MMVoipToastWindow";
  local_248 = pcVar1;
  _objc_getClass();
  local_250 = pcVar3;
  _memset(auStack_298,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_350 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_148,0x10);
  if (local_350 != (undefined *)0x0) {
    lVar5 = *local_288;
    local_358 = (undefined *)0x0;
    do {
      do {
        if (*local_288 - lVar5 != 0) {
          _objc_enumerationMutation(*local_288 - lVar5,puVar4);
        }
        uVar7 = *(ulong *)(local_290 + (long)local_358 * 8);
        local_258 = uVar7;
        if (((local_248 != (char *)0x0) &&
            ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,local_248),
            (uVar7 & 1) != 0)) ||
           ((local_250 != (char *)0x0 &&
            (uVar7 = local_258,
            (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_isKindOfClass__0269cd68,local_250)
            , (uVar7 & 1) != 0)))) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_258);
        }
        local_358 = local_358 + 1;
      } while (local_358 < local_350);
      local_350 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_148,0x10
                );
      local_358 = (undefined *)0x0;
    } while (local_350 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_2e0,0,0x40);
  puVar2 = local_1e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_390 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1c8,0x10);
  if (local_390 != (undefined *)0x0) {
    lVar5 = *local_2d0;
    local_398 = (undefined *)0x0;
    do {
      do {
        if (*local_2d0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_2d0 - lVar5,puVar2);
        }
        local_2a0 = *(undefined8 *)(local_2d8 + (long)local_398 * 8);
        FUN_00f29864(local_2a0);
        local_398 = local_398 + 1;
      } while (local_398 < local_390);
      local_390 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1c8,0x10
                );
      local_398 = (undefined *)0x0;
    } while (local_390 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

