// addSliderCellToSection:title:tag:min:max:value: @ 01e1e08c

/* Function Stack Size: 0x40 bytes */

void WCRefineSuperFloatSettingsViewController::addSliderCellToSection_title_tag_min_max_value_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,double param_6,
               double param_7,double param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID local_60;
  char *local_58;
  double local_50;
  double local_48;
  double local_40;
  long_long local_38;
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
  pcVar3 = "WCTableViewCellManager";
  local_50 = param_8;
  local_48 = param_7;
  local_40 = param_6;
  local_38 = param_5;
  _objc_getClass();
  IVar4 = local_18;
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,local_48,local_50,local_18,PTR_s_sliderContainerForTag_min_max_va_026c5dd8,
             local_38);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar4;
  if (local_58 != (char *)0x0) {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,
               PTR_s_normalCellForSel_target_title_ri_026b2e78);
    uVar1 = local_28;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,local_18,local_30,
                 local_60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      goto LAB_01e1e2a8;
    }
  }
  IVar4 = local_18;
  uVar2 = local_28;
  uVar1 = local_30;
  puVar6 = PTR_WCRefineHelper_026ce000;
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,local_18,PTR_s_sliderDisplayTextForTag_value__026c5ef8,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_normalCellWithSel_target_title_r_0269e3f0,0,IVar4,uVar1,IVar5,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
LAB_01e1e2a8:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

