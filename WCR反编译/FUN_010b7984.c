// FUN_010b7984 @ 010b7984

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010b7984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  cfstringStruct *local_208;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a0;
  bool local_169;
  cfstringStruct *local_168;
  bool local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined4 local_f4;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  long local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e8,param_3);
  pcVar1 = local_d8;
  FUN_010b66f4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_e0;
  local_f0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (pcVar1 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    local_d0 = (undefined *)0x0;
    local_f4 = 1;
  }
  else {
    pcVar1 = local_d8;
    FUN_010c86d4(local_d8,&cf_contentObj);
    _objc_retainAutoreleasedReturnValue();
    local_109 = 0;
    local_1a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1a0 = local_d8;
      FUN_010c86d4(local_d8,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_1a0;
    }
    local_109 = pcVar1 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_1a0;
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_100;
    FUN_010c86d4(local_100,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_118 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_1b8 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    else {
      local_1b8 = local_118;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = local_1b8;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar3;
    for (local_130 = (cfstringStruct *)0x0; pcVar1 = local_130, pcVar4 = local_120,
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0), puVar6 = local_128,
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038, pcVar1 < pcVar4;
        local_130 = (cfstringStruct *)((long)&local_130->field0_0x0 + 1)) {
      local_48 = &cf_type;
      pcVar4 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar4;
      FUN_010c86d4();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_130;
      local_40 = &cf_localPaths;
      pcVar5 = local_e8;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      local_139 = false;
      if (pcVar5 <= pcVar1) {
        local_208 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
      }
      else {
        local_208 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
        _objc_retainAutoreleasedReturnValue();
        local_138 = local_208;
      }
      local_139 = pcVar5 > pcVar1;
      local_30 = local_208;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      if ((local_139 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar1 = local_d8;
    FUN_010c86d4(local_d8,&cf_contentDesc);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_148 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      pcVar4 = local_100;
      FUN_010c86d4(local_100,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_148;
      local_148 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_d8;
    FUN_010c86d4(local_d8,&cf_nickname);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = &cf_username;
    lVar2 = local_e0;
    local_150 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_a0 = &cf_tid;
    pcVar4 = local_f0;
    local_78 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = &cf_createtime;
    pcVar1 = local_d8;
    local_70 = pcVar4;
    FUN_010c18d0(local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithUnsignedInt__0269d800,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_148;
    local_90 = &cf_contentDesc;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_159 = ((ulong)pcVar1 & 1) == 0;
    if (local_159) {
      local_250 = &cf___;
    }
    else {
      local_250 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
      local_158 = local_250;
    }
    pcVar1 = local_150;
    local_159 = !local_159;
    local_60 = local_250;
    local_88 = &cf_nickname;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_169 = ((ulong)pcVar1 & 1) == 0;
    if (local_169) {
      local_260 = &cf___;
    }
    else {
      local_260 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
      local_168 = local_260;
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_169 = !local_169;
    local_58 = local_260;
    local_80 = &cf_contentObj;
    local_c8 = &cf_type;
    pcVar1 = local_100;
    FUN_010c86d4();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithInteger__0269e080,pcVar7);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = &cf_mediaList;
    puVar8 = local_128;
    local_b8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_b0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_a8,6);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_169) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if (local_159) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_f4 = 1;
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

