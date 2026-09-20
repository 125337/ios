// showActionsForIndex: @ 01e30214

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::showActionsForIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  long_long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  cfstringStruct *local_f0;
  int local_dc;
  char *local_98;
  undefined *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  char *local_70;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = pcVar3;
  if (((long)local_38 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0),
     (long)pcVar3 <= (long)lVar2)) {
    local_44 = 1;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_dc = 1;
    }
    else {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_dc = (int)pcVar4;
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar5 = "WCUIActionSheet";
    local_51 = local_dc != 0;
    _objc_getClass();
    local_70 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      local_44 = 1;
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_81 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_f0 = &::cf___;
      }
      else {
        local_f0 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_f0;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_f0;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar5 = local_70;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_98 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_urlscheme_try__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addBtnTitle_target_sel__0269d278,&cf__ul,local_28,puVar7);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_urlscheme_edittitle__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addBtnTitle_target_sel__0269d278,&cf_9eRTy,local_28,puVar7);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_urlscheme_editurl__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addBtnTitle_target_sel__0269d278,&cf_9e,local_28,puVar7);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_urlscheme_editicon__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addBtnTitle_target_sel__0269d278,&cf_9eVh,local_28,puVar7);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_urlscheme_toggle__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      pcVar3 = &cf_y_u;
      if ((local_51 & 1) == 0) {
        pcVar3 = &cf__T_u;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addBtnTitle_target_sel__0269d278,pcVar3,local_28,puVar7);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_urlscheme_del__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,puVar7);
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_Rd,local_28,puVar7);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar5 = local_98;
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_78,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

