// addCatalogItem:appName: @ 01e31e00

/* Function Stack Size: 0x20 bytes */

void WCRefineSuperFloatURLSchemeViewController::addCatalogItem_appName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *local_130;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  undefined *local_c8;
  undefined *local_c0;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  uint local_9c;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  long local_88;
  cfstringStruct *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)0x0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_4);
  pcVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_80;
  local_90 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_f8 = &cf__g_TT;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_f8;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_90;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_c_Nzz);
    local_9c = 1;
  }
  else {
    lVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    local_b1 = false;
    if (lVar5 == 0) {
      local_110 = local_98;
    }
    else {
      local_110 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_110;
    }
    local_b1 = lVar5 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_110;
    if ((local_b1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_130 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      local_c8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_130 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_130;
    if (puVar6 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_schemeList_containsURL__026c6308,local_c0,local_90);
    puVar4 = local_c0;
    bVar1 = (IVar7 & 1) == 0;
    if (bVar1) {
      local_68 = &cf_title;
      local_48 = local_a8;
      local_60 = &cf_url;
      local_40 = local_90;
      local_58 = &cf_icon;
      local_38 = &cf_icons_outlined_link;
      local_50 = &cf_enabled;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf__mR0R_wcR_O_mR_S_T_u);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___WRh_N);
    }
    local_9c = (uint)!bVar1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

