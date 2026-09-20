// confirmCustomBullet: @ 01ec69e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListSettingsViewController::confirmCustomBullet_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_150;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_108;
  cfstringStruct *local_f0;
  undefined *local_e0;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  bool local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_49 = 0;
  local_59 = 0;
  local_69 = 0;
  local_79 = 0;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_120 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_120 = &::cf___;
    }
    local_108 = local_120;
    local_78 = pcVar1;
  }
  else {
    local_108 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_108;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_108;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
  local_99 = 0;
  local_a9 = 0;
  local_b9 = false;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_130 = &::cf__;
  }
  else {
    local_130 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_98 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_130;
  }
  local_b9 = pcVar1 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_130;
  if ((local_b9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  pcVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
  if (pcVar1 < (cfstringStruct *)0x2) {
    local_150 = &::cf__;
  }
  else {
    local_d0 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_150 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_150;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_150;
  if (pcVar1 >= (cfstringStruct *)0x2) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
    (*(code *)PTR__objc_release_02578630)(local_e0);
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

