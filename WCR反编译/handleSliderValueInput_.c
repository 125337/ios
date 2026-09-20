// handleSliderValueInput: @ 01c4e2b0

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::handleSliderValueInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  float fVar5;
  cfstringStruct *local_d0;
  double local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_70;
  double local_68;
  double local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6868);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  local_40 = pcVar2;
  _objc_getAssociatedObject(local_28,DAT_028c6878);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  _objc_setAssociatedObject(local_28,DAT_028c6878,0,1);
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &::cf___;
  if ((local_48 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      _objc_storeStrong(&local_50,local_b0);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_58,0);
  }
  pcVar1 = local_50;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_50;
  local_50 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  fVar5 = 1.0;
  if (local_40 != (cfstringStruct *)0x3) {
    fVar5 = 0.0;
  }
  local_c8 = (double)fVar5;
  pcVar1 = local_50;
  local_60 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_c8 = local_60;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_doubleValue_026ca608);
  }
  local_68 = local_c8;
  FUN_01c4a010(local_40);
  if (local_40 == (cfstringStruct *)0x1) {
    local_d0 = &cf_OffsetX;
  }
  else {
    local_d0 = &cf_OffsetY;
    if (local_40 != (cfstringStruct *)0x2) {
      local_d0 = &cf_Scale;
    }
  }
  local_68 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_d0;
  pcVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6870);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_28;
  pcVar1 = local_70;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_writeVisualSuffix_value_scene__026c1c68,pcVar1,puVar3,pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

