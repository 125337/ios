// FUN_01065bac @ 01065bac

void FUN_01065bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_2dc;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b8;
  long local_280;
  cfstringStruct *local_270;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  uint local_214;
  cfstringStruct *local_208;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined8 local_178;
  byte local_169;
  cfstringStruct *local_168;
  bool local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  bool local_129;
  long local_128;
  byte local_119;
  cfstringStruct *local_118;
  long local_110;
  undefined *local_108;
  int local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_aa;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  pcVar3 = local_40;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf__rawBody);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_61 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_1c0 = &cf___;
  }
  else {
    local_1c0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf__rawBody);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_1c0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_1c0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_79 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_1d8 = &cf___;
  }
  else {
    local_1d8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_1d8;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_1d8;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_blocks_logging_data);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_91 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_1f0 = &cf___;
  }
  else {
    local_1f0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_blocks_logging_data);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_1f0;
  }
  local_91 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_1f0;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_a9 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_208 = &cf___;
  }
  else {
    local_208 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_208;
  }
  local_a9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_208;
  if ((local_a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_isEqualToString__0269ccc8,&cf_MIN_AGE_ACCOUNT);
  local_b9 = 0;
  local_c9 = 0;
  local_214 = 1;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_214 = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_214 = 1;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_containsString__0269d0b0,&cf_MIN_AGE_ACCOUNT);
        local_214 = 1;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_containsString__0269d0b0,&cf_Peopleunder18);
          local_214 = (uint)pcVar3;
        }
      }
    }
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  puVar4 = PTR___dispatch_main_q_02578680;
  local_aa = (byte)local_214 & 1;
  if ((local_214 & 1) == 0) {
    puVar4 = PTR_WCRefineLinkParseResult_026cecb0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
    local_108 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setPlatform__026adde8,6);
    local_250 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_250 == (cfstringStruct *)0x0) {
      local_250 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setSourceURL__026addf0,local_250);
    local_260 = *(cfstringStruct **)(param_1 + 0x28);
    if (local_260 == (cfstringStruct *)0x0) {
      local_270 = *(cfstringStruct **)(param_1 + 0x20);
      if (local_270 == (cfstringStruct *)0x0) {
        local_270 = &cf___;
      }
      local_260 = local_270;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setResolvedURL__026addf8,local_260);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbnail_url);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_119 = 0;
    local_129 = false;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_280 = 0;
    }
    else {
      local_280 = *(long *)(param_1 + 0x38);
      pcVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbnail_url);
      _objc_retainAutoreleasedReturnValue();
      local_119 = 1;
      local_118 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_unescapeJSONString__026adcb8);
      _objc_retainAutoreleasedReturnValue();
      local_128 = local_280;
    }
    local_129 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_280;
    if ((local_129 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    lVar7 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_preferCleanMediaURL__026add40,local_110);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setImageURLs__026add68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setIsImageNote__026adad0,1);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_141 = false;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_2b8 = (cfstringStruct *)0x0;
    }
    else {
      local_2b8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_140 = local_2b8;
    }
    local_141 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = local_2b8;
    if ((local_141 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_140);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_author_name);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_159 = false;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_2d0 = (cfstringStruct *)0x0;
    }
    else {
      local_2d0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_author_name);
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_2d0;
    }
    local_159 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_2d0;
    if ((local_159 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    local_169 = 0;
    local_2dc = 0;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2dc = (uint)pcVar3 ^ 1;
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_2dc & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setTitle__0269cef0,local_138);
    }
    pcVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setAuthor__026adda8,local_150);
    }
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_108;
    local_1a0 = PTR___NSConcreteStackBlock_02578660;
    local_198 = 0xc2000000;
    local_194 = 0;
    local_190 = FUN_01066ce4;
    local_188 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar2;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar6;
    _dispatch_async(puVar4,&local_1a0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    local_fc = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_01066bc0;
    local_e0 = &DAT_025814c8;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = uVar6;
    _dispatch_async(puVar4,&local_f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_fc = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  if (local_fc == 0) {
    local_fc = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

