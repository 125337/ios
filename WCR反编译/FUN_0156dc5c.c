// FUN_0156dc5c @ 0156dc5c

byte FUN_0156dc5c(byte param_1)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined *local_210;
  undefined *local_208;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  cfstringStruct *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  int local_11c;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  bool local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  byte local_c2;
  byte local_c1;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c2 = param_1;
  FUN_01578534();
  pcVar9 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar3 = &cf_currentDarkModeConfigType;
  local_d0 = pcVar9;
  _NSSelectorFromString();
  local_e0 = (cfstringStruct *)0x0;
  local_e1 = 0;
  local_d8 = pcVar3;
  if ((local_d0 != (cfstringStruct *)0x0) &&
     (pcVar9 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar9 & 1) != 0)) {
    pcVar9 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_d8);
    local_e1 = 1;
    local_e0 = pcVar9;
  }
  local_1a0 = &cf_SettingDarkModeViewController;
  _NSClassFromString();
  local_101 = false;
  bVar1 = local_1a0 == (cfstringStruct *)0x0;
  local_f0 = local_1a0;
  if (bVar1) {
    local_1a0 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc_init();
    local_100 = local_1a0;
  }
  local_101 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_1a0;
  if ((local_101 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  if (local_f8 != (cfstringStruct *)0x0) {
    pcVar9 = &cf_setPreviousSelectedType_;
    _NSSelectorFromString();
    local_110 = pcVar9;
    if (((local_e1 & 1) != 0) &&
       (pcVar3 = local_f8,
       (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_respondsToSelector__026ca818,pcVar9),
       ((ulong)pcVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_110,local_e0);
    }
    if ((local_c2 & 1) == 0) {
      local_1b0 = &cf_onSelectDarkMode;
      _NSSelectorFromString();
    }
    else {
      local_1b0 = &cf_onSelectLightMode;
      _NSSelectorFromString();
    }
    local_118 = local_1b0;
    pcVar9 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_respondsToSelector__026ca818,local_1b0);
    if (((ulong)pcVar9 & 1) != 0) {
      pcVar9 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_118);
      uVar2 = (uint)pcVar9;
      FUN_01578534();
      if (uVar2 != (local_c2 & 1)) {
        local_c1 = 1;
        local_11c = 1;
        goto LAB_0156e340;
      }
      if (((((local_e1 & 1) != 0) && (local_d0 != (cfstringStruct *)0x0)) &&
          (pcVar9 = local_d0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_respondsToSelector__026ca818,local_d8), ((ulong)pcVar9 & 1) != 0
          )) && (pcVar9 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_d8),
                local_128 = pcVar9, pcVar9 != local_e0)) {
        local_c1 = 1;
        local_11c = 1;
        goto LAB_0156e340;
      }
    }
  }
  pcVar9 = &cf_changeDarkModeConfigType_;
  _NSSelectorFromString();
  local_130 = pcVar9;
  if ((local_d0 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar9),
     ((ulong)pcVar3 & 1) == 0)) {
    local_c1 = 0;
    local_11c = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_180,0,0x40);
    puVar4 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_c0,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar8 = *local_170;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar8 != 0) {
            _objc_enumerationMutation(*local_170 - lVar8,puVar4);
          }
          pcVar9 = *(cfstringStruct **)(local_178 + (long)local_210 * 8);
          local_140 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_longLongValue_0269d5e0);
          if (((local_e1 & 1) == 0) || (pcVar9 != local_e0)) {
            pcVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_130,pcVar9);
            uVar2 = (uint)pcVar3;
            if ((((ulong)pcVar3 & 1) != 0) && (FUN_01578534(), uVar2 != (local_c2 & 1))) {
              local_c1 = 1;
              local_11c = 1;
              goto LAB_0156e2c8;
            }
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_c0,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    local_11c = 0;
LAB_0156e2c8:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_11c == 0) {
      if ((local_e1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_130,local_e0);
      }
      local_c1 = 0;
      local_11c = 1;
    }
    _objc_storeStrong(&local_138,0);
  }
LAB_0156e340:
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

