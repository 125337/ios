// FUN_00f0ea34 @ 00f0ea34

void FUN_00f0ea34(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong local_230;
  ulong local_228;
  ulong local_200;
  ulong local_1e8;
  cfstringStruct *local_1d8;
  undefined8 local_1a0;
  long local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  bool local_139;
  ulong local_138;
  ulong local_130;
  bool local_121;
  ulong local_120;
  ulong local_118;
  undefined4 local_110;
  byte local_109;
  ulong local_108;
  long local_100;
  cfstringStruct *local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  local_f8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f8,param_4);
  local_109 = 0;
  bVar1 = true;
  local_100 = param_1;
  if (local_e8 == 200) {
    uVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_109 = 1;
    local_108 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar2 != 200;
  }
  if ((local_109 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  if (bVar1) {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)PTR____NSArray0___02578280;
    pcVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1d8 = &cf_O;
    }
    else {
      local_1d8 = local_f8;
    }
    (**(code **)(lVar8 + 0x10))(lVar8,uVar9,local_1d8);
    local_110 = 1;
  }
  else {
    uVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    uVar10 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_121 = false;
    bVar1 = (uVar10 & 1) == 0;
    if (bVar1) {
      local_1e8 = 0;
    }
    else {
      local_1e8 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      local_120 = local_1e8;
    }
    local_121 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = local_1e8;
    if ((local_121 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_120);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    uVar10 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_139 = false;
    bVar1 = (uVar10 & 1) == 0;
    if (bVar1) {
      local_200 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_200 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_200;
    }
    local_139 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_200;
    if ((local_139 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar4;
    _memset(auStack_190,0,0x40);
    uVar2 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar8 = *local_180;
      local_230 = 0;
      do {
        do {
          if (*local_180 - lVar8 != 0) {
            _objc_enumerationMutation(*local_180 - lVar8,uVar2);
          }
          uVar10 = *(ulong *)(local_188 + local_230 * 8);
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_150 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar10 & 1) != 0) {
            uVar10 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_is_dir);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar10);
            if ((uVar5 & 1) == 0) {
              lVar11 = *(long *)(param_1 + 0x28);
              uVar10 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_trimmed__026aba28);
              _objc_retainAutoreleasedReturnValue();
              local_198 = lVar11;
              (*(code *)PTR__objc_release_02578630)(uVar10);
              lVar11 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
              if (lVar11 == 0) {
                local_110 = 3;
              }
              else {
                uVar9 = *(undefined8 *)(param_1 + 0x28);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_pathByAppendingFileName__026abb78,local_198);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_148;
                local_d8 = &cf_name;
                local_c0 = local_198;
                local_d0 = &cf_path;
                local_c8 = &cf_title;
                uVar6 = *(undefined8 *)(param_1 + 0x28);
                local_1a0 = uVar9;
                local_b8 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_displayTitleForBackupName__026abc90,local_198);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_b0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                _objc_storeStrong(&local_1a0,0);
                local_110 = 0;
              }
              _objc_storeStrong(&local_198,0);
            }
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_148);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_118,0);
    local_110 = 0;
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

