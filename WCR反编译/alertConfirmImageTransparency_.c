// alertConfirmImageTransparency: @ 016df188

/* Function Stack Size: 0x18 bytes */

void __thiscall
RepeatEnhanceViewController::alertConfirmImageTransparency_
          (RepeatEnhanceViewController *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  float in_s0;
  double dVar4;
  float local_bc;
  float local_ac;
  cfstringStruct *local_a0;
  bool local_79;
  cfstringStruct *local_78;
  double local_70;
  bool local_61;
  cfstringStruct *local_60;
  double local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  local_ac = in_s0;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &cf_1_00_1_00;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_ac = 1.0;
    }
    else {
      local_60 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_61 = pcVar1 != (cfstringStruct *)0x0;
    local_58 = (double)local_ac;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar1 = local_50;
    dVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    local_bc = SUB84(dVar4,0);
    if (pcVar1 < (cfstringStruct *)0x2) {
      local_bc = 1.0;
    }
    else {
      local_78 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_79 = pcVar1 >= (cfstringStruct *)0x2;
    local_70 = (double)local_bc;
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (local_58 < 0.0) {
      local_58 = 0.0;
    }
    if (1.0 < local_58) {
      local_58 = 1.0;
    }
    if (local_70 < 0.0) {
      local_70 = 0.0;
    }
    if (1.0 < local_70) {
      local_70 = 1.0;
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348);
  _objc_storeStrong(&local_38,0);
  return;
}

