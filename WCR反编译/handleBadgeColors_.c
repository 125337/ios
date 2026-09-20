// handleBadgeColors: @ 01c33de4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateBeautifyViewController::handleBadgeColors_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  uint local_e0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf___;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_e0 = 0;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e0 = (uint)pcVar3;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if ((local_e0 & 1) != 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_58 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_118 = &::cf___;
      }
      _objc_storeStrong(&local_40,local_118);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_58,0);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  local_71 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_120 = &::cf___;
  }
  else {
    local_120 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_120;
  }
  local_71 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_120;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
  local_89 = false;
  if (pcVar2 < (cfstringStruct *)0x2) {
    local_130 = &::cf___;
  }
  else {
    local_130 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_130;
  }
  local_89 = pcVar2 >= (cfstringStruct *)0x2;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_130;
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  pcVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_componentsSeparatedByString__0269d3c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_80;
  local_98 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_98;
  local_a0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
  bVar1 = false;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (bVar1) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
  bVar1 = false;
  if ((cfstringStruct *)0x1 < pcVar2) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (bVar1) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
  bVar1 = false;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (bVar1) {
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
  bVar1 = false;
  if ((cfstringStruct *)0x1 < pcVar2) {
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (bVar1) {
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_postSettingsChanged_026c1808);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

