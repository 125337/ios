// showCatalogActionsForGroup:item: @ 01e31208

/* Function Stack Size: 0x20 bytes */

void WCRefineSuperFloatURLSchemeViewController::showCatalogActionsForGroup_item_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  bool bVar1;
  long_long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_148;
  cfstringStruct *local_130;
  cfstringStruct *local_118;
  char *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined *local_a0;
  char *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  long_long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _WCRSFURLSchemeCatalogGroups();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_48 = pcVar3;
  if (((long)local_38 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0),
     (long)pcVar3 <= (long)lVar2)) {
    local_4c = 1;
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_58;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    lVar2 = local_40;
    if ((((ulong)pcVar3 & 1) == 0) ||
       (((long)local_40 < 0 ||
        (pcVar3 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
        (long)pcVar3 <= (long)lVar2)))) {
      local_4c = 1;
    }
    else {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_48;
      local_60 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_118 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_118;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_130 = &cf__g_TT;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_130;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      local_148 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_148 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_148;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_89 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_160 = &::cf___;
      }
      else {
        local_160 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_desc);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_160;
      }
      local_89 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_160;
      if ((local_89 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar6 = "WCUIActionSheet";
      _objc_getClass();
      local_98 = pcVar6;
      if (pcVar6 == (char *)0x0) {
        local_4c = 1;
      }
      else {
        pcVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        local_a9 = 0;
        local_b9 = 0;
        local_170 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_b8 = local_170;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 1;
          local_a8 = local_170;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_170;
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        pcVar6 = local_98;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_wcr_sf_catalog_try__ld__ld_);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        _NSSelectorFromString();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
        if ((IVar8 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
          _class_addMethod();
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_addBtnTitle_target_sel__0269d278,&cf__ul,local_28,puVar7);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_wcr_sf_catalog_add__ld__ld_);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        _NSSelectorFromString();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
        if ((IVar8 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
          _class_addMethod();
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR0RbvRh,local_28,puVar7);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        pcVar6 = local_c8;
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showInView__0269d310);
        (*(code *)PTR__objc_release_02578630)(IVar8);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_a0,0);
        local_4c = 0;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

