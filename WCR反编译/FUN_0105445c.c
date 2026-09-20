// FUN_0105445c @ 0105445c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0105445c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_280;
  cfstringStruct *local_270;
  cfstringStruct *local_250;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  cfstringStruct *local_1a0;
  cfstringStruct *local_188;
  cfstringStruct *local_170;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  bool local_121;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  bool local_109;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  undefined *local_e0;
  int local_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined8 local_a8;
  bool local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  lVar2 = local_40[2];
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_length_0269cca0);
  local_59 = false;
  if (lVar2 == 0) {
    local_170 = (cfstringStruct *)0x0;
  }
  else {
    local_170 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_40[2],0,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_170;
  }
  local_59 = lVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_170;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_71 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_188 = (cfstringStruct *)0x0;
  }
  else {
    local_188 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_188;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_188;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_cid);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_89 = 0;
  local_99 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_1a0 = (cfstringStruct *)0x0;
  }
  else {
    local_1a0 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_cid);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_1a0;
  }
  local_99 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_1a0;
  if ((local_99 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if ((local_40[0] == 0) &&
     (pcVar3 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
     pcVar3 != (cfstringStruct *)0x0)) {
    puVar4 = PTR_WCRefineLinkParseResult_026cecb0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
    local_e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setPlatform__026adde8,3);
    local_200 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_200 == (cfstringStruct *)0x0) {
      local_200 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setSourceURL__026addf0,local_200);
    local_210 = *(cfstringStruct **)(param_1 + 0x28);
    if (local_210 == (cfstringStruct *)0x0) {
      local_220 = *(cfstringStruct **)(param_1 + 0x20);
      if (local_220 == (cfstringStruct *)0x0) {
        local_220 = &cf___;
      }
      local_210 = local_220;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setResolvedURL__026addf8,local_210);
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_e9 = false;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_230 = (cfstringStruct *)0x0;
    }
    else {
      local_230 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_230;
    }
    local_e9 = !bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTitle__0269cef0,local_230);
    if ((local_e9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_owner);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar7 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_f9 = 0;
    local_109 = false;
    bVar1 = ((ulong)pcVar7 & 1) == 0;
    if (bVar1) {
      local_250 = (cfstringStruct *)0x0;
    }
    else {
      local_250 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_owner);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_250;
    }
    local_109 = !bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setAuthor__026adda8,local_250);
    if ((local_109 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_pic);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_121 = ((ulong)pcVar5 & 1) == 0;
    if (local_121) {
      local_270 = (cfstringStruct *)0x0;
    }
    else {
      local_270 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_pic);
      _objc_retainAutoreleasedReturnValue();
      local_120 = local_270;
    }
    local_121 = !local_121;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = local_270;
    if (local_121) {
      (*(code *)PTR__objc_release_02578630)(local_120);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf_http___);
    local_141 = ((ulong)pcVar3 & 1) == 0;
    if (local_141) {
      local_280 = local_118;
    }
    else {
      local_130 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringFromIndex__0269d120,7);
      _objc_retainAutoreleasedReturnValue();
      local_280 = &cf_https___;
      (*(code *)PTR__objc_msgSend_02578628)(&cf_https___,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      local_140 = local_280;
    }
    local_141 = !local_141;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setCoverURL__026add60,local_280);
    if (local_141) {
      (*(code *)PTR__objc_release_02578630)(local_140);
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_applyDurationFromValue_toResult__026addb8,pcVar3,local_e0,0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchBilibiliStreamsForBVID_cid__026ae088,
               *(undefined8 *)(param_1 + 0x30),local_80,local_e0,*(undefined8 *)(param_1 + 0x38));
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  else {
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_01055110;
    local_b8 = &DAT_0257ca68;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_40[0];
    local_a8 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar2;
    _dispatch_async(puVar4,&local_d0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_d4 = 1;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  if (local_d4 == 0) {
    local_d4 = 0;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

