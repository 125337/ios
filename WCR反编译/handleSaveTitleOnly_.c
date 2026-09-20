// handleSaveTitleOnly: @ 01e349e8

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::handleSaveTitleOnly_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_130;
  cfstringStruct *local_110;
  cfstringStruct *local_e8;
  undefined *local_b8;
  long local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  int local_4c;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textFromSender__026b1b18,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveAlert__026b1ad0,0);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingIndex_026c6368);
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEditingIndex__026c62e8,DAT_0233a538);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_TyN_Nzz);
    local_4c = 1;
  }
  else {
    pcVar6 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 0;
    local_e8 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_e8;
    }
    local_61 = pcVar7 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_e8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    IVar3 = local_48;
    if (((long)local_48 < 0) ||
       (pcVar6 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
       (long)pcVar6 <= (long)IVar3)) {
      local_4c = 1;
    }
    else {
      pcVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_title);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,local_70,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_58);
      pcVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_81 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_110 = &::cf___;
      }
      else {
        local_110 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_110;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_110;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (pcVar6 != (cfstringStruct *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_WCRSuperFloatProfileStore_026cee48;
        local_90 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_profileActions_026b1a38);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a1 = 0;
        local_130 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          local_130 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = local_130;
        }
        local_a1 = puVar4 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_130;
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        for (local_b0 = 0; lVar2 = local_b0, puVar4 = local_98,
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0),
            lVar2 < (long)puVar4; local_b0 = local_b0 + 1) {
          puVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          puVar9 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (((ulong)puVar9 & 1) != 0) {
            puVar4 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_b8 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (((ulong)puVar8 & 1) == 0) {
              local_4c = 4;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,
                         _WCRSuperFloatTitleKey);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98,PTR_s_setObject_atIndexedSubscript__0269e970,local_b8,local_b0);
              local_4c = 2;
            }
            _objc_storeStrong(&local_b8,0);
            if (local_4c == 2) break;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_98
                  );
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ty_OX_);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

