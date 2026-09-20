// previewTitleForItem: @ 0095f884

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardHistoryStore::previewTitleForItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  double in_d0;
  double dVar7;
  double dVar8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_188;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  double local_80;
  double local_70;
  double local_58;
  ID local_50;
  uint local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_44 = 1;
    goto LAB_009601c8;
  }
  pcVar3 = local_40;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) != 0) {
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageForItem__026aa848,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar5;
    if (IVar5 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &::cf__;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_size_026cab00);
      dVar7 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_scale_026ca830);
      in_d0 = in_d0 * dVar7;
      local_58 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_size_026cab00);
      dVar8 = dVar7;
      local_80 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_scale_026ca830);
      local_70 = dVar7 * dVar8;
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar3;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
    goto LAB_009601c8;
  }
  pcVar3 = local_40;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_91 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_150 = &::cf___;
    }
    else {
      local_150 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileName);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_150;
    }
    local_91 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_150;
    if ((local_91 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_160 = &::cf__;
    }
    else {
      local_160 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_160;
    local_44 = 1;
    _objc_storeStrong(&local_88,0);
    goto LAB_009601c8;
  }
  pcVar3 = local_40;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_d9 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_1b8 = &::cf___;
    }
    else {
      local_1b8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1b8;
    }
    local_d9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1b8;
    if ((local_d9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_newline_s_,
               &::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (&segment_command_00000020.filesize < pcVar3) {
      pcVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_substringToIndex__0269d6c0,0x50);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_e8;
      local_e8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
    local_44 = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d0,0);
    goto LAB_009601c8;
  }
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_a9 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_188 = &::cf___;
  }
  else {
    local_188 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_188;
  }
  local_a9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_188;
  if ((local_a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_a0;
  puVar2 = PTR_s_rangeOfString__0269d838;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_rangeOfString__0269d838,&::cf__);
  local_c0 = pcVar3;
  local_b8 = puVar2;
  if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
    pcVar4 = (cfstringStruct *)PTR_WCRClipboardCapture_026ceac8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardCapture_026ceac8,PTR_s_resolvedPreviewForItem__026aabc0,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    pcVar3 = local_c8;
    bVar1 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_c8,0);
    if (local_44 == 0) goto LAB_0095ff14;
  }
  else {
LAB_0095ff14:
    pcVar3 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1a0 = &::cf__;
    }
    else {
      local_1a0 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_1a0;
    local_44 = 1;
  }
  _objc_storeStrong(&local_a0,0);
LAB_009601c8:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

