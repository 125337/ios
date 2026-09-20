// buildColorSection @ 01e4d744

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineTelegramGroupingViewController::buildColorSection
          (WCRefineTelegramGroupingViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  undefined *puVar9;
  undefined8 in_x7;
  double in_d0;
  cfstringStruct *local_280;
  cfstringStruct *local_1f8;
  double local_78;
  bool local_69;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  undefined *local_48;
  byte local_39;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_homeTelegramGroupingAppearanceSe_026c66e8);
  local_39 = (byte)pcVar2;
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0);
  pcVar2 = &cf__g;
  if ((local_39 & 1) == 0) {
    pcVar2 = &cf_of0c_yhV0eW_rTh__W_S0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFooterTitle__0269e3c8,pcVar2);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar3 = local_48;
  pcVar2 = &cf_bS;
  if ((local_39 & 1) == 0) {
    pcVar2 = &cf_U_;
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_toggleAppearanceExpanded_026c66f0,local_28,&cf_Yr,pcVar2,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  IVar4 = local_28;
  puVar1 = local_48;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleCustomCardColor__026c66f8;
  if ((local_39 & 1) != 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomCardCo_026c6700);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf__INofr,pcVar2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomCardCo_026c6700);
    puVar3 = local_48;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar6 = "WCTableViewCellManager";
      _objc_getClass();
      IVar4 = local_28;
      puVar5 = PTR_s_editCardColor_026c6708;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingCardColorLig_026c6710);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingCardColorDar_026c6718);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_colorPreviewWithLightHex_darkHex_026c6720,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_normalCellForSel_target_title_ri_026b2e78,puVar5,IVar4,&cf_ofr);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    IVar4 = local_28;
    puVar1 = local_48;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleCustomIndicatorColor__026c6728;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomIndica_026c6730);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_c_yhVr,pcVar2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomIndica_026c6730);
    puVar3 = local_48;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar6 = "WCTableViewCellManager";
      _objc_getClass();
      IVar4 = local_28;
      puVar5 = PTR_s_editIndicatorColor_026c6738;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingIndicatorCol_026c6740);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingIndicatorCol_026c6748);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_colorPreviewWithLightHex_darkHex_026c6720,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_normalCellForSel_target_title_ri_026b2e78,puVar5,IVar4,&cf_c_yhVr);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    IVar4 = local_28;
    puVar1 = local_48;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleCustomTextColor__026c6750;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomTextCo_026c6758);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_e_gr,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomTextCo_026c6758);
    puVar3 = local_48;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar6 = "WCTableViewCellManager";
      _objc_getClass();
      IVar4 = local_28;
      puVar5 = PTR_s_editTextColor_026c6760;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingTextColorLig_026c6768);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_1f8 = &cf__333333;
      }
      else {
        local_1f8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_homeTelegramGroupingTextColorLig_026c6768);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_1f8;
      }
      local_59 = pcVar7 != (cfstringStruct *)0x0;
      pcVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingTextColorDar_026c6770);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_colorPreviewWithLightHex_darkHex_026c6720,local_1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_normalCellForSel_target_title_ri_026b2e78,puVar5,IVar4,&cf_e_gr);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      if (local_59) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    IVar4 = local_28;
    puVar1 = local_48;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleCustomHighlightColor__026c6778;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomHighli_026c6780);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_Ne_gr,pcVar2)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomHighli_026c6780);
    puVar3 = local_48;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar6 = "WCTableViewCellManager";
      _objc_getClass();
      IVar4 = local_28;
      puVar5 = PTR_s_editHighlightColor_026c6788;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6790);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_280 = &cf__111111;
      }
      else {
        local_280 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6790);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_280;
      }
      local_69 = pcVar7 != (cfstringStruct *)0x0;
      pcVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingHighlightCol_026c6798);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_colorPreviewWithLightHex_darkHex_026c6720,local_280);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_normalCellForSel_target_title_ri_026b2e78,puVar5,IVar4,&cf_Ne_gr);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    IVar4 = local_28;
    puVar1 = local_48;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleCustomTitleFont__026c67a0;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomTitleF_026c67a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf__INh__W_S,
               pcVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeTelegramGroupingCustomTitleF_026c67a8);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_homeTelegramGroupingTitleFontSiz_026c67b0);
      IVar4 = local_28;
      puVar1 = local_48;
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR_s_editFontSize_026c67b8;
      if ((in_d0 < 12.0) || (local_78 = in_d0, 20.0 < in_d0)) {
        local_78 = 17.0;
      }
      puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar4,&cf_h__W_SO_Y_,
                 puVar9,1,in_x7,local_78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar9);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

