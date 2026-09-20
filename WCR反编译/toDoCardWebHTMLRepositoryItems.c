// toDoCardWebHTMLRepositoryItems @ 02171748

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::toDoCardWebHTMLRepositoryItems(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_358;
  cfstringStruct *local_338;
  cfstringStruct *local_310;
  cfstringStruct *local_2d8;
  ulong local_2a0;
  ulong local_298;
  bool local_241;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  byte local_229;
  cfstringStruct *local_228;
  byte local_219;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  byte local_201;
  cfstringStruct *local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  undefined1 *local_150;
  int local_144;
  ID local_140;
  ID local_138;
  SEL local_130;
  ID local_128;
  undefined1 *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = param_2;
  local_128 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_130;
  local_138 = param_1;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_140 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  IVar4 = local_140;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar4 & 1) == 0) {
    puVar5 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_144 = 1;
    local_120 = puVar5;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar3;
    _memset(auStack_198,0,0x40);
    IVar4 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_298 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_298 != 0) {
      lVar7 = *local_188;
      local_2a0 = 0;
      do {
        do {
          if (*local_188 - lVar7 != 0) {
            _objc_enumerationMutation(*local_188 - lVar7,IVar4);
          }
          pcVar8 = *(cfstringStruct **)(local_190 + local_2a0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_158 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          pcVar6 = local_158;
          if (((ulong)pcVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1a0 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar8 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_1b1 = false;
            bVar1 = ((ulong)pcVar8 & 1) == 0;
            if (bVar1) {
              local_2d8 = &::cf___;
            }
            else {
              local_2d8 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = local_2d8;
            }
            local_1b1 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_1a8 = local_2d8;
            if ((local_1b1 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1b0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_144 = 3;
            }
            else {
              pcVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar6;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_1c0 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar6;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_1c8 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar6;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_1d0 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              pcVar8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_310 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
              local_1e1 = 0;
              local_1f1 = 0;
              local_201 = 0;
              if (((ulong)pcVar8 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                _objc_retainAutoreleasedReturnValue();
                local_1f1 = 1;
                local_1f0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_201 = 1;
                local_200 = local_310;
              }
              else {
                local_310 = local_1a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
                _objc_retainAutoreleasedReturnValue();
                local_1e1 = 1;
                local_1e0 = local_310;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1d8 = local_310;
              if ((local_201 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_200);
              }
              if ((local_1f1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1f0);
              }
              if ((local_1e1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1e0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              pcVar8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_219 = 0;
              local_229 = 0;
              if (((ulong)pcVar8 & 1) == 0) {
                local_338 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                local_229 = 1;
                local_228 = local_338;
              }
              else {
                local_338 = local_1a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
                _objc_retainAutoreleasedReturnValue();
                local_219 = 1;
                local_218 = local_338;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_210 = local_338;
              if ((local_229 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_228);
              }
              if ((local_219 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_218);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              pcVar8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_241 = ((ulong)pcVar8 & 1) == 0;
              if (local_241) {
                local_358 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
              }
              else {
                local_358 = local_1a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
                _objc_retainAutoreleasedReturnValue();
                local_240 = local_358;
              }
              local_241 = !local_241;
              (*(code *)PTR__objc_retain_02578638)();
              local_238 = local_358;
              if (local_241) {
                (*(code *)PTR__objc_release_02578630)(local_240);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar8 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
              pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              if (pcVar8 == (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_longLongValue_0269d5e0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar6,PTR_s_stringWithFormat__0269cca8,&cf_WCR_HTML__lld);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_1d0;
                local_1d0 = pcVar6;
                (*(code *)PTR__objc_release_02578630)(pcVar8);
              }
              pcVar6 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
              if (pcVar6 == (cfstringStruct *)0x0) {
                _objc_storeStrong(&local_1c0,&cf__g_TTNx);
              }
              puVar5 = local_150;
              local_118 = &cf_id;
              local_e0 = local_1d0;
              local_110 = &cf_name;
              local_d8 = local_1c0;
              local_108 = &cf_author;
              local_d0 = local_1c8;
              local_100 = &cf_html;
              local_c8 = local_1a8;
              local_f8 = &cf_storage;
              local_c0 = local_238;
              local_f0 = &cf_createdAt;
              local_b8 = local_1d8;
              local_e8 = &cf_pinned;
              local_b0 = local_210;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e0,&local_118,7);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar5 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
              if (puVar5 < &segment_command_00000020.filesize) {
                local_144 = 0;
              }
              else {
                local_144 = 2;
              }
              _objc_storeStrong(&local_238);
              _objc_storeStrong(&local_210,0);
              _objc_storeStrong(&local_1d8,0);
              _objc_storeStrong(&local_1d0,0);
              _objc_storeStrong(&local_1c8,0);
              _objc_storeStrong(&local_1c0,0);
            }
            _objc_storeStrong(&local_1a8);
            _objc_storeStrong(&local_1a0,0);
            if ((local_144 != 0) && (local_144 != 3)) goto LAB_0217244c;
          }
          local_2a0 = local_2a0 + 1;
        } while (local_2a0 < local_298);
        local_298 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_2a0 = 0;
      } while (local_298 != 0);
    }
    local_144 = 0;
LAB_0217244c:
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_0258d398);
    puVar5 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    local_144 = 1;
    local_120 = puVar5;
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_120;
}

