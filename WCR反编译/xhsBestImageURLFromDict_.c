// xhsBestImageURLFromDict: @ 0104d3d4

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::xhsBestImageURLFromDict_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  ID local_350;
  uint local_32c;
  ulong local_320;
  uint local_2fc;
  ulong local_2f0;
  ulong local_210;
  ulong local_208;
  ID local_1c8;
  undefined *local_1c0;
  ID local_1b8;
  byte local_1a9;
  ID local_1a8;
  ID local_1a0;
  byte local_191;
  ulong local_190;
  bool local_181;
  ulong local_180;
  ulong local_178;
  byte local_169;
  ulong local_168;
  bool local_159;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    local_e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c8;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_infoList);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      _memset(auStack_138,0,0x40);
      uVar3 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_208 != 0) {
        lVar7 = *local_128;
        local_210 = 0;
        do {
          do {
            if (*local_128 - lVar7 != 0) {
              _objc_enumerationMutation(*local_128 - lVar7,uVar3);
            }
            uVar8 = *(ulong *)(local_130 + local_210 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_f8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if ((uVar8 & 1) != 0) {
              uVar8 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_imageScene);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_140 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_148 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((uVar8 & 1) == 0) ||
                 (uVar8 = local_148,
                 (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0), uVar8 == 0)
                 ) {
                local_cc = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_appendString__0269ccb0,local_148);
                puVar2 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_containsString__0269d0b0,&cf_watermark);
                if (((((ulong)puVar2 & 1) == 0) &&
                    (puVar2 = local_140,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_140,PTR_s_containsString__0269d0b0,&cf_h5),
                    ((ulong)puVar2 & 1) == 0)) &&
                   (puVar2 = local_140,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_140,PTR_s_containsString__0269d0b0,&cf_wm),
                   ((ulong)puVar2 & 1) == 0)) {
                  puVar2 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_containsString__0269d0b0,&cf_original);
                  if ((((ulong)puVar2 & 1) == 0) &&
                     (puVar2 = local_140,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_140,PTR_s_containsString__0269d0b0,&cf_wb_dft),
                     ((ulong)puVar2 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_addObject__0269d180,local_148);
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_addObject__0269d180,local_148);
                  }
                  local_cc = 0;
                }
                else {
                  local_cc = 3;
                }
              }
              _objc_storeStrong(&local_148);
              _objc_storeStrong(&local_140,0);
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_210 = 0;
        } while (local_208 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlDefault);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_e0;
    if ((uVar8 & 1) != 0) {
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = local_e8;
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlDefault);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendString__0269ccb0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_e0;
    if ((uVar8 & 1) != 0) {
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = local_e8;
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendString__0269ccb0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_traceId);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_159 = false;
    bVar1 = (uVar8 & 1) == 0;
    if (bVar1) {
      local_2f0 = 0;
    }
    else {
      local_2f0 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_traceId);
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_2f0;
    }
    local_159 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_2f0;
    if ((local_159 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    local_169 = 0;
    local_2fc = 0;
    if (uVar3 == 0) {
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_trace_id);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_2fc = (uint)uVar3;
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_2fc & 1) != 0) {
      uVar8 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_trace_id);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_150;
      local_150 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileId);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_181 = false;
    bVar1 = (uVar8 & 1) == 0;
    if (bVar1) {
      local_320 = 0;
    }
    else {
      local_320 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileId);
      _objc_retainAutoreleasedReturnValue();
      local_180 = local_320;
    }
    local_181 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = local_320;
    if ((local_181 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
    local_191 = 0;
    local_32c = 0;
    if (uVar3 == 0) {
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_file_id);
      _objc_retainAutoreleasedReturnValue();
      local_191 = 1;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_190 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_32c = (uint)uVar3;
    }
    if ((local_191 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    if ((local_32c & 1) != 0) {
      uVar8 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_file_id);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_178;
      local_178 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendString__0269ccb0,local_178);
    }
    IVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_xhsFileTokenFromString__026add08,local_150)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_1a9 = 0;
    local_350 = IVar5;
    if (IVar5 == 0) {
      local_350 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_xhsFileTokenFromString__026add08,local_178);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = local_350;
    }
    local_1a9 = IVar5 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = local_350;
    if ((local_1a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1a8);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
    if (IVar5 != 0) {
      IVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_xhsPublicImageURLWithToken_pathH_026add10,local_1a0,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      if (IVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_insertObject_atIndex__0269eac0,local_1b8,0);
      }
      _objc_storeStrong(&local_1b8,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObjectsFromArray__0269d540,local_e0);
    IVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bestCleanURLFromList__026adf50,local_1c0);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_b8;
    local_1c8 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_preferCleanMediaURL__026add40,IVar5);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = IVar6;
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}

