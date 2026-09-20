// saveSchemeTitle:url:icon:editIndex: @ 01e369d8

/* Function Stack Size: 0x30 bytes */

void WCRefineSuperFloatURLSchemeViewController::saveSchemeTitle_url_icon_editIndex_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *local_278;
  cfstringStruct *local_240;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1d8;
  int local_1c4;
  cfstringStruct *local_1a8;
  undefined *local_170;
  long local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  bool local_111;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  long local_f8;
  long local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  ulong local_c0;
  byte local_b2;
  byte local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  int local_9c;
  cfstringStruct *local_98;
  long local_90;
  long local_88;
  long local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_4);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_5);
  lVar2 = local_88;
  local_98 = (cfstringStruct *)param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPendingTitle__026c6338);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPendingURL__026c6340,0);
    local_9c = 1;
  }
  else {
    lVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      _objc_storeStrong(&local_90,&cf_icons_outlined_link);
    }
    lVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      _objc_storeStrong(&local_80,local_88);
    }
    pcVar3 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b1 = 0;
    local_1a8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_1a8;
    }
    local_b1 = pcVar4 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_1a8;
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_98;
    local_b2 = 1;
    local_c0 = 0;
    if (((local_98 != (cfstringStruct *)0x7fffffffffffffff) && (-1 < (long)local_98)) &&
       (pcVar4 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0),
       (long)pcVar3 < (long)pcVar4)) {
      pcVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_98);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1c4 = 1;
      }
      else {
        pcVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1c4 = (int)pcVar4;
      }
      local_b2 = local_1c4 != 0;
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_e1 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_1d8 = (cfstringStruct *)0x0;
      }
      else {
        local_1d8 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_1d8;
      }
      local_e1 = !bVar1;
      _objc_storeStrong(&local_c0,local_1d8);
      if ((local_e1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_removeObjectAtIndex__0269d530,local_98);
      _objc_storeStrong(&local_c8,0);
    }
    local_f0 = 0x7fffffffffffffff;
    for (local_f8 = 0; lVar2 = local_f8, pcVar3 = local_a8,
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0), lVar2 < (long)pcVar3;
        local_f8 = local_f8 + 1) {
      pcVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_100 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar3 & 1) == 0) {
        local_9c = 4;
      }
      else {
        pcVar3 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_111 = false;
        bVar1 = ((ulong)pcVar4 & 1) == 0;
        if (bVar1) {
          local_1f8 = &::cf___;
        }
        else {
          local_1f8 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          local_110 = local_1f8;
        }
        local_111 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_108 = local_1f8;
        if ((local_111 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_110);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isEqualToString__0269ccc8,local_88);
        if (((ulong)pcVar3 & 1) == 0) {
          local_9c = 0;
        }
        else {
          local_f0 = local_f8;
          local_9c = 2;
        }
        _objc_storeStrong(&local_108,0);
      }
      _objc_storeStrong(&local_100,0);
      if ((local_9c != 0) && (local_9c == 2)) break;
    }
    local_68 = &cf_title;
    local_48 = local_80;
    local_60 = &cf_url;
    local_40 = local_88;
    local_58 = &cf_icon;
    local_38 = local_90;
    local_50 = &cf_enabled;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_b2 & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar3 = local_98;
    if (local_f0 == 0x7fffffffffffffff) {
      if ((local_98 == (cfstringStruct *)0x7fffffffffffffff) ||
         (pcVar7 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0),
         pcVar4 = local_a8, puVar5 = local_120, (long)pcVar7 < (long)pcVar3)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_120);
      }
      else {
        local_128 = local_98;
        pcVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
        local_240 = pcVar3;
        if ((long)local_128 < (long)pcVar3) {
          local_240 = local_128;
        }
        local_138 = local_240;
        local_130 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_insertObject_atIndex__0269eac0,puVar5,local_240);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_setObject_atIndexedSubscript__0269e970,local_120,local_f0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_a8);
    uVar8 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
    if ((uVar8 != 0) &&
       (uVar8 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,local_88),
       (uVar8 & 1) == 0)) {
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_140 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRSuperFloatProfileStore_026cee48;
      local_148 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_profileActions_026b1a38);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_159 = 0;
      local_278 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_278 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_158 = local_278;
      }
      local_159 = puVar6 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = local_278;
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      for (local_168 = 0; lVar2 = local_168, puVar5 = local_150,
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0),
          lVar2 < (long)puVar5; local_168 = local_168 + 1) {
        puVar5 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,local_168);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        puVar9 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (((ulong)puVar9 & 1) != 0) {
          puVar5 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,local_168);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_170 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (((ulong)puVar6 & 1) == 0) {
            local_9c = 7;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_148,
                       _WCRSuperFloatActionKey);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,
                       _WCRSuperFloatTitleKey);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,
                       _WCRSuperFloatIconKey);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_88,
                       _WCRSuperFloatCustomPayloadKey);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_url,
                       _WCRSuperFloatCustomKindKey);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_setObject_atIndexedSubscript__0269e970,local_170,local_168);
            local_9c = 5;
          }
          _objc_storeStrong(&local_170,0);
          if (local_9c == 5) break;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_150)
      ;
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_140,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPendingTitle__026c6338);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPendingURL__026c6340,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_notifyChanged_026b43a0);
    pcVar3 = &cf__OX_;
    if (local_98 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = &cf__mR0R_wcR_O_mR_S_T_u;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar3);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_a8,0);
    local_9c = 0;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

