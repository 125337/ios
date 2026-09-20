// toggleWeChatDarkMode @ 00f98a98

/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::toggleWeChatDarkMode(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined *local_278;
  undefined *local_270;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  undefined1 *local_1e8;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  int local_160;
  byte local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  byte local_121;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  byte local_109;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  SEL local_d8;
  ID local_d0;
  byte local_c1;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar9 = &cf_MMDarkModeConfigUtil;
  local_d8 = param_2;
  local_d0 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_isDarkMode;
  local_e0 = pcVar9;
  _NSSelectorFromString();
  local_e9 = 0;
  local_e8 = pcVar2;
  if ((local_e0 == (cfstringStruct *)0x0) ||
     (pcVar9 = local_e0,
     (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar9 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    local_109 = 0;
    local_1e8 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_1e8 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_1e8;
    }
    local_109 = puVar4 == (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_1e8;
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_userInterfaceStyle_026cabc8);
    local_e9 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  else {
    pcVar9 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_e8);
    local_e9 = (byte)pcVar9;
  }
  pcVar9 = &cf_currentDarkModeConfigType;
  _NSSelectorFromString();
  local_120 = (cfstringStruct *)0x0;
  local_121 = 0;
  local_118 = pcVar9;
  if ((local_e0 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_e0,
     (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar9),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar9 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_118);
    local_121 = 1;
    local_120 = pcVar9;
  }
  local_208 = &cf_SettingDarkModeViewController;
  _NSClassFromString();
  local_141 = false;
  bVar1 = local_208 == (cfstringStruct *)0x0;
  local_130 = local_208;
  if (bVar1) {
    local_208 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc_init();
    local_140 = local_208;
  }
  local_141 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_208;
  if ((local_141 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  if (local_138 != (cfstringStruct *)0x0) {
    pcVar9 = &cf_setPreviousSelectedType_;
    _NSSelectorFromString();
    local_150 = pcVar9;
    if (((local_121 & 1) != 0) &&
       (pcVar2 = local_138,
       (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_respondsToSelector__026ca818,pcVar9),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,local_150,local_120);
    }
    if ((local_e9 & 1) == 0) {
      local_218 = &cf_onSelectDarkMode;
      _NSSelectorFromString();
    }
    else {
      local_218 = &cf_onSelectLightMode;
      _NSSelectorFromString();
    }
    local_158 = local_218;
    pcVar9 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_respondsToSelector__026ca818,local_218);
    if (((ulong)pcVar9 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,local_158);
      if ((local_e0 != (cfstringStruct *)0x0) &&
         (pcVar9 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,local_e8)
         , ((ulong)pcVar9 & 1) != 0)) {
        pcVar9 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_e8);
        local_159 = (byte)pcVar9;
        if ((local_159 & 1) != (local_e9 & 1)) {
          local_c1 = 1;
          local_160 = 1;
          goto LAB_00f99428;
        }
      }
      if (((((local_121 & 1) != 0) && (local_e0 != (cfstringStruct *)0x0)) &&
          (pcVar9 = local_e0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_respondsToSelector__026ca818,local_118),
          ((ulong)pcVar9 & 1) != 0)) &&
         (pcVar9 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_118),
         local_168 = pcVar9, pcVar9 != local_120)) {
        local_c1 = 1;
        local_160 = 1;
        goto LAB_00f99428;
      }
    }
  }
  pcVar9 = &cf_changeDarkModeConfigType_;
  _NSSelectorFromString();
  local_170 = pcVar9;
  if ((local_e0 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_e0,
     (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar9),
     ((ulong)pcVar2 & 1) == 0)) {
    local_c1 = 0;
    local_160 = 1;
  }
  else {
    _memset(auStack_1b8,0,0x40);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_b8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_270 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_270 != (undefined *)0x0) {
      lVar8 = *local_1a8;
      local_278 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar8,puVar7);
          }
          pcVar9 = *(cfstringStruct **)(local_1b0 + (long)local_278 * 8);
          local_178 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_longLongValue_0269d5e0);
          if ((((local_121 & 1) == 0) || (pcVar9 != local_120)) &&
             ((pcVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_170,pcVar9),
              ((ulong)pcVar2 & 1) != 0 &&
              (((local_e0 != (cfstringStruct *)0x0 &&
                (pcVar9 = local_e0,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_respondsToSelector__026ca818,local_e8),
                ((ulong)pcVar9 & 1) != 0)) &&
               (pcVar9 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_e8),
               ((byte)pcVar9 & 1) != (local_e9 & 1))))))) {
            local_c1 = 1;
            local_160 = 1;
            goto LAB_00f993c0;
          }
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_278 = (undefined *)0x0;
      } while (local_270 != (undefined *)0x0);
    }
    local_160 = 0;
LAB_00f993c0:
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if (local_160 == 0) {
      if ((local_121 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_170,local_120);
      }
      local_c1 = 0;
      local_160 = 1;
    }
  }
LAB_00f99428:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_c1 & 1;
}

