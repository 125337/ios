// listCellForName: @ 01fbbd50

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::listCellForName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  char *pcVar6;
  ID local_90;
  cfstringStruct *local_80;
  char *local_70;
  cfstringStruct *local_68;
  char *local_60;
  bool local_51;
  ID local_50;
  ID local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf__N;
  }
  else {
    local_80 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_subtitleForName__026c9fb0,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_51 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_listIconForName__026c9fb8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  local_51 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (local_48 == 0) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_placeholderListIconForName__026c9fc0,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_48;
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  pcVar5 = "WCTableViewCellManager";
  _objc_getClass();
  pcVar2 = &
           cf_normalCellForSel_target_leftImage_title_badge_rightValue_rightImage_withRightRedDot_selected_
  ;
  local_60 = pcVar5;
  _NSSelectorFromString();
  local_68 = pcVar2;
  if (((local_48 != 0) && (local_60 != (char *)0x0)) &&
     (pcVar5 = local_60,
     (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar5 & 1) != 0)) {
    pcVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,local_68,PTR_s_selectThemeCell__026c9fc8,local_20,local_48,local_38,0,
               local_40,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "WCTableViewCellManager";
    local_70 = pcVar6;
    _objc_getClass("WCTableViewCellManager");
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,pcVar5);
    pcVar5 = local_70;
    bVar1 = ((ulong)pcVar6 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar5;
    }
    _objc_storeStrong(&local_70,0);
    if (bVar1) goto LAB_01fbc078;
  }
  pcVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_selectThemeCell__026c9fc8,local_20,local_38,local_40,0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar5;
LAB_01fbc078:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

