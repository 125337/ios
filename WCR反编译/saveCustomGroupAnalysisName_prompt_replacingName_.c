// saveCustomGroupAnalysisName:prompt:replacingName: @ 009b1148

/* Function Stack Size: 0x28 bytes */

bool WCRefineAIStore::saveCustomGroupAnalysisName_prompt_replacingName_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_208;
  ulong local_200;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  ulong local_150;
  ulong local_148;
  ID local_140;
  int local_134;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  SEL local_100;
  ID local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  local_100 = param_2;
  local_f8 = param_1;
  _objc_storeStrong(&local_108,param_3);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_4);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_5);
  lVar8 = local_108;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_110;
  local_120 = lVar8;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_118;
  local_128 = lVar2;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_120;
  local_130 = lVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar8 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
     lVar8 == 0)) {
    local_e9 = 0;
    local_134 = 1;
  }
  else {
    IVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_wcrIsPresetGroupAnalysisName__026aac70,local_120);
    if ((IVar3 & 1) == 0) {
      IVar3 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_customGroupAnalysisPersonas_026aac68);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_140 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_148 = 0x7fffffffffffffff;
      for (local_150 = 0; uVar1 = local_150, IVar3 = local_140,
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0), uVar1 < IVar3;
          local_150 = local_150 + 1) {
        IVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_objectAtIndexedSubscript__0269cc78,local_150);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_158 = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        lVar8 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
        if ((lVar8 == 0) ||
           (IVar3 = local_158,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_158,PTR_s_isEqualToString__0269ccc8,local_130), (IVar3 & 1) == 0)) {
          IVar3 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_120)
          ;
          if ((IVar3 & 1) == 0) {
            local_134 = 0;
          }
          else {
            local_e9 = 0;
            local_134 = 1;
          }
        }
        else {
          local_148 = local_150;
          local_134 = 4;
        }
        _objc_storeStrong(&local_158,0);
        if ((local_134 != 0) && (local_134 != 4)) goto LAB_009b1804;
      }
      local_48 = &cf_name;
      local_38 = local_120;
      local_40 = &cf_prompt;
      local_30 = local_128;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar5;
      if (local_148 == 0x7fffffffffffffff) {
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,puVar5);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_setObject_atIndexedSubscript__0269e970,puVar5,local_148);
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar5;
      _memset(auStack_1b0,0,0x40);
      IVar3 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_c8,0x10);
      if (local_200 != 0) {
        lVar8 = *local_1a0;
        local_208 = 0;
        do {
          do {
            if (*local_1a0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar8,IVar3);
            }
            puVar5 = local_168;
            uVar9 = *(undefined8 *)(local_1a8 + local_208 * 8);
            local_e8 = &cf_name;
            local_170 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = &cf_prompt;
            uVar6 = local_170;
            local_d8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_objectForKeyedSubscript__0269d098)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_d0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_c8,
                     0x10);
          local_208 = 0;
        } while (local_200 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar5 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_e9 = 1;
      local_134 = 1;
      _objc_storeStrong(&local_168);
      _objc_storeStrong(&local_160,0);
LAB_009b1804:
      _objc_storeStrong(&local_140,0);
    }
    else {
      local_e9 = 0;
      local_134 = 1;
    }
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_e9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

