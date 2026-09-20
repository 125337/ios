// profileBgHTMLRepositoryItems @ 020af128

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::profileBgHTMLRepositoryItems(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2a8;
  ulong local_250;
  ulong local_248;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  byte local_1c9;
  cfstringStruct *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  byte local_1a9;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  cfstringStruct *local_138;
  undefined1 *local_130;
  int local_124;
  ID local_120;
  ID local_118;
  SEL local_110;
  ID local_108;
  undefined1 *local_100;
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
  local_110 = param_2;
  local_108 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_110;
  local_118 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_120 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  IVar4 = local_120;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar4 & 1) == 0) {
    puVar5 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_124 = 1;
    local_100 = puVar5;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar3;
    _memset(auStack_178,0,0x40);
    IVar4 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_248 != 0) {
      lVar7 = *local_168;
      local_250 = 0;
      do {
        do {
          if (*local_168 - lVar7 != 0) {
            _objc_enumerationMutation(*local_168 - lVar7,IVar4);
          }
          pcVar8 = *(cfstringStruct **)(local_170 + local_250 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_138 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          pcVar6 = local_138;
          if (((ulong)pcVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_180 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar6;
            FUN_01fd868c();
            _objc_retainAutoreleasedReturnValue();
            local_188 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_124 = 3;
            }
            else {
              pcVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar6;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_190 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar6;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_198 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              pcVar8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_2a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
              local_1a9 = 0;
              local_1b9 = 0;
              local_1c9 = 0;
              if (((ulong)pcVar8 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                _objc_retainAutoreleasedReturnValue();
                local_1b9 = 1;
                local_1b8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_1c9 = 1;
                local_1c8 = local_2a8;
              }
              else {
                local_2a8 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
                _objc_retainAutoreleasedReturnValue();
                local_1a9 = 1;
                local_1a8 = local_2a8;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1a0 = local_2a8;
              if ((local_1c9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c8);
              }
              if ((local_1b9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b8);
              }
              if ((local_1a9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1a8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              pcVar8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              bVar1 = ((ulong)pcVar8 & 1) == 0;
              if (bVar1) {
                local_2d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                local_1f0 = local_2d0;
              }
              else {
                local_2d0 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = local_2d0;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1d8 = local_2d0;
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_1f0);
              }
              else {
                (*(code *)PTR__objc_release_02578630)(local_1e0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
              if (pcVar6 == (cfstringStruct *)0x0) {
                _objc_storeStrong(&local_190,&cf__g_TTQ_u);
              }
              puVar5 = local_130;
              local_f8 = &cf_id;
              local_d0 = local_188;
              local_f0 = &cf_name;
              local_c8 = local_190;
              local_e8 = &cf_author;
              pcVar6 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_2f0 = &cf_WCR;
              }
              else {
                local_2f0 = local_198;
              }
              local_c0 = local_2f0;
              local_e0 = &cf_createdAt;
              local_b8 = local_1a0;
              local_d8 = &cf_pinned;
              local_b0 = local_1d8;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar5 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
              if (puVar5 < &segment_command_00000020.filesize) {
                local_124 = 0;
              }
              else {
                local_124 = 2;
              }
              _objc_storeStrong(&local_1d8);
              _objc_storeStrong(&local_1a0,0);
              _objc_storeStrong(&local_198,0);
              _objc_storeStrong(&local_190,0);
            }
            _objc_storeStrong(&local_188);
            _objc_storeStrong(&local_180,0);
            if ((local_124 != 0) && (local_124 != 3)) goto LAB_020afb0c;
          }
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10
                  );
        local_250 = 0;
      } while (local_248 != 0);
    }
    local_124 = 0;
LAB_020afb0c:
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_0258d378);
    puVar5 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
    local_124 = 1;
    local_100 = puVar5;
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

