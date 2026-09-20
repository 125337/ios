// wcr_configureCard:withTask: @ 01bf16dc

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsDraftListViewController::wcr_configureCard_withTask_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  cfstringStruct *local_118;
  cfstringStruct *local_f8;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  byte local_92;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar3 = local_40;
  FUN_01bf1fb4();
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_48 = pcVar3;
  FUN_01bef300(pcVar3,&local_49);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_40;
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_69 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_c8 = &::cf___;
  }
  else {
    local_c8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_c8;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c8;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar4 = local_48;
    FUN_01bef094();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_60;
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_60,&cf_gSWQ_);
  }
  puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar5 = local_78;
  _WCRMomentsScheduledFormatFireDate();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_40;
  local_80 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_91 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_f8 = &::cf___;
  }
  else {
    local_f8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_f8;
  }
  local_91 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_f8;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_92 = (byte)pcVar4;
  local_a0 = 0;
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_pending);
  if ((((ulong)pcVar3 & 1) != 0) ||
     (pcVar3 = local_88,
     (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_failed),
     ((ulong)pcVar3 & 1) != 0)) {
    if ((local_92 & 1) == 0) {
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_failed);
      local_118 = &cf_e_;
      if (((ulong)pcVar3 & 1) == 0) {
        local_118 = &cf___;
      }
    }
    else {
      local_118 = &cf_f_P;
    }
    _objc_storeStrong(&local_a0,local_118);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar5;
  if ((local_49 & 1) == 0) {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    puVar6 = local_a8;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,&::cf__);
  }
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_poiInfo_026a4da0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_01bf1350();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (pcVar3 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_b0);
  }
  puVar6 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  puVar5 = local_a8;
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_S);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  uVar2 = local_38;
  pcVar3 = local_60;
  puVar5 = local_80;
  IVar7 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_statusTextForTask__026c0ae8,local_40);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_configureTitle_time_status_meta__026c0b40,pcVar3,puVar5,IVar7,puVar6,
             local_58,local_49 & 1,local_a0,&cf_O9ee,&cf_Rd);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

