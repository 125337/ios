// addColorCellToSection:title:action:light:dark: @ 01e29774

/* Function Stack Size: 0x38 bytes */

void WCRefineSuperFloatSettingsViewController::addColorCellToSection_title_action_light_dark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,SEL param_5,ID param_6,ID param_7)

{
  SEL SVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  ID local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_38 = param_5;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  pcVar4 = "WCTableViewCellManager";
  _objc_getClass();
  IVar5 = local_18;
  local_50 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_dayNightColorPreviewLight_dark__026c6240,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar5;
  if (local_50 != (char *)0x0) {
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,
               PTR_s_normalCellForSel_target_title_ri_026b2e78);
    uVar2 = local_28;
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_normalCellForSel_target_title_ri_026b2e78,local_38,local_18,local_30
                 ,local_58);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      goto LAB_01e29994;
    }
  }
  IVar5 = local_18;
  uVar3 = local_28;
  uVar2 = local_30;
  SVar1 = local_38;
  puVar7 = PTR_WCRefineHelper_026ce000;
  IVar6 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_dayNightColorRightValueLight_dar_026c6248,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_normalCellWithSel_target_title_r_0269e3f0,SVar1,IVar5,uVar2,IVar6,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
LAB_01e29994:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

