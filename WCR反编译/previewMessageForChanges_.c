// previewMessageForChanges: @ 01865620

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineBatchRemarkViewController::previewMessageForChanges_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_178;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sourceTitle_026b6958);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_egn_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_P_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,&::cf___);
  local_50 = (cfstringStruct *)0x6;
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  local_140 = pcVar4;
  if (local_50 < pcVar4) {
    local_140 = local_50;
  }
  local_60 = local_140;
  local_48 = local_140;
  local_58 = pcVar4;
  for (local_68 = (cfstringStruct *)0x0; local_68 < local_48;
      local_68 = (cfstringStruct *)((long)&local_68->field0_0x0 + 1)) {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_candidate);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_currentRemark_026b6a58);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_89 = 0;
    local_99 = 0;
    local_a9 = 0;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_160 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_160;
      if (local_160 == (cfstringStruct *)0x0) {
        local_160 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_160;
      }
      local_150 = local_160;
    }
    else {
      local_150 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_currentRemark_026b6a58);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_150;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_150;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_newRemark);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_178 = &cf_nzz;
    }
    else {
      local_178 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_newRemark);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_178;
    }
    local_c1 = pcVar5 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_178;
    if (local_c1) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar3 = local_40;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu____>__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  puVar1 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_48 < pcVar4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

