// themeIconSelectorDidSelectIcon:forType:isDark: @ 01e33da0

/* Function Stack Size: 0x24 bytes */

void WCRefineSuperFloatURLSchemeViewController::themeIconSelectorDidSelectIcon_forType_isDark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_1d8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_178;
  cfstringStruct *local_120;
  undefined *local_100;
  long local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  bool local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  int local_7c;
  ID local_78;
  bool local_69;
  cfstringStruct *local_68;
  byte local_59;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined1 local_41;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar4 = local_38;
  local_41 = (undefined1)param_5;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_120 = local_38;
  local_59 = 0;
  local_69 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_120 = &::cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_120;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_120;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_50,&cf_icons_outlined_link);
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingIndex_026c6368);
  local_78 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEditingIndex__026c62e8,DAT_0233a538);
  if (local_78 == 0x7fffffffffffffff) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingURL_026c6370);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    if (IVar6 == 0) {
      local_7c = 1;
    }
    else {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingTitle_026c6378);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingURL_026c6370);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_saveSchemeTitle_url_icon_editInd_026c6380,IVar6,IVar7,local_50,
                 0x7fffffffffffffff);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      local_7c = 1;
    }
  }
  else {
    pcVar4 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_91 = 0;
    local_178 = pcVar8;
    if (pcVar8 == (cfstringStruct *)0x0) {
      local_178 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_178;
    }
    local_91 = pcVar8 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_178;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    IVar5 = local_78;
    if (((long)local_78 < 0) ||
       (pcVar4 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
       (long)pcVar4 <= (long)IVar5)) {
      local_7c = 1;
    }
    else {
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_icon);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_atIndexedSubscript__0269e970,local_a0,local_78);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_88);
      pcVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_b1 = false;
      bVar1 = ((ulong)pcVar8 & 1) == 0;
      if (bVar1) {
        local_1a0 = &::cf___;
      }
      else {
        local_1a0 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_1a0;
      }
      local_b1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_1a0;
      if ((local_b1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_c9 = false;
      bVar1 = ((ulong)pcVar8 & 1) == 0;
      if (bVar1) {
        local_1b8 = &::cf___;
      }
      else {
        local_1b8 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_1b8;
      }
      local_c9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_1b8;
      if ((local_c9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
      if (pcVar4 != (cfstringStruct *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_WCRSuperFloatProfileStore_026cee48;
        local_d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_profileActions_026b1a38);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e9 = 0;
        local_1d8 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_1d8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_1d8;
        }
        local_e9 = puVar3 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = local_1d8;
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        for (local_f8 = 0; lVar2 = local_f8, puVar3 = local_e0,
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
            lVar2 < (long)puVar3; local_f8 = local_f8 + 1) {
          puVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          puVar10 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (((ulong)puVar10 & 1) != 0) {
            puVar3 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_100 = puVar9;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (((ulong)puVar9 & 1) == 0) {
              local_7c = 4;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,
                         _WCRSuperFloatIconKey);
              pcVar4 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
              if (pcVar4 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,
                           _WCRSuperFloatTitleKey);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_setObject_atIndexedSubscript__0269e970,local_100,local_f8);
              local_7c = 2;
            }
            _objc_storeStrong(&local_100,0);
            if (local_7c == 2) break;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_e0
                  );
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Vh_OX_);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      local_7c = 0;
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

