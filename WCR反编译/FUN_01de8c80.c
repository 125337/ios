// FUN_01de8c80 @ 01de8c80

void FUN_01de8c80(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  cfstringStruct *local_320;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  cfstringStruct *local_280;
  ulong local_260;
  ulong local_258;
  undefined8 local_208;
  cfstringStruct *local_1d8;
  undefined8 local_1d0;
  byte local_1c2;
  bool local_1c1;
  cfstringStruct *local_1c0;
  undefined8 local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  int local_194;
  cfstringStruct *local_190;
  int local_184;
  undefined *local_180;
  cfstringStruct *local_178;
  char *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  long local_120;
  bool local_111;
  undefined8 local_110;
  byte local_101;
  undefined8 local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  long local_e8;
  undefined8 local_e0;
  ulong local_d8;
  cfstringStruct *local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (cfstringStruct *)0x0;
  local_c8 = param_1;
  _objc_storeStrong(&local_d0);
  pcVar2 = local_d0;
  local_e8 = param_1;
  local_e0 = param_4;
  local_d8 = param_3;
  _WCRefineSpecialTextStyle();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_f0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_d8;
  uVar4 = *(ulong *)(param_1 + 0x20);
  local_f8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_sectionTitles_026c58e0);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_101 = 0;
  local_111 = false;
  if (uVar13 <= uVar7) {
    local_208 = 0;
  }
  else {
    local_208 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_sectionTitles_026c58e0);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_208;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_110 = local_208;
  }
  local_111 = uVar13 > uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setHeaderTitle__0269e3c0,local_208);
  if ((local_111 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar7 = local_d8;
  uVar4 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_sectionFooters_026c58e8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (uVar7 < uVar13) {
    lVar5 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_sectionFooters_026c58e8);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_120 = lVar12;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar12 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
    if (lVar12 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setFooterTitle__0269e3c8,local_120);
    }
    _objc_storeStrong(&local_120,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  _memset(auStack_168,0,0x40);
  uVar7 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_fieldsForIdentifier__026c58f0,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_258 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_258 != 0) {
    lVar12 = *local_158;
    local_260 = 0;
    do {
      do {
        if (*local_158 - lVar12 != 0) {
          _objc_enumerationMutation(*local_158 - lVar12,uVar7);
        }
        uVar13 = *(ulong *)(local_160 + local_260 * 8);
        local_170 = (char *)0x0;
        local_128 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isEqualToString__0269ccc8,&cf_enabled);
        if ((((uVar13 & 1) == 0) &&
            (uVar13 = local_128,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_isEqualToString__0269ccc8,&cf_gradient), (uVar13 & 1) == 0))
           && (uVar13 = local_128,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_isEqualToString__0269ccc8,&cf_bold), (uVar13 & 1) == 0)) {
          uVar13 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_isEqualToString__0269ccc8,&cf_alignment);
          if ((uVar13 & 1) == 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_actionForIdentifier_field__026c5908,local_d0,local_128);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = local_128;
            local_1b8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_isEqualToString__0269ccc8,&cf_text);
            uVar6 = local_1b8;
            pcVar11 = PTR_WCRefineHelper_026ce000;
            puVar3 = PTR_s_perform_026c5910;
            if ((uVar13 & 1) == 0) {
              uVar13 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_isEqualToString__0269ccc8,&cf_gradientPalette);
              if ((uVar13 & 1) == 0) {
                pcVar2 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradient);
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                local_1c2 = (byte)pcVar10;
                local_1d0 = 0;
                (*(code *)PTR__objc_retain_02578638)();
                local_1d8 = &cf_e_gr;
                uVar13 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_isEqualToString__0269ccc8,&cf_endColor);
                if ((uVar13 & 1) == 0) {
                  uVar13 = local_128;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_128,PTR_s_isEqualToString__0269ccc8,&cf_midColor);
                  if ((uVar13 & 1) == 0) {
                    if ((local_1c2 & 1) != 0) {
                      _objc_storeStrong(&local_1d8,&cf_eW_wr);
                    }
                  }
                  else {
                    local_1d0 = 1;
                    _objc_storeStrong(&local_1d8,&cf_nS_Nr);
                  }
                }
                else {
                  local_1d0 = 2;
                  _objc_storeStrong(&local_1d8,&cf_nS>_r);
                }
                pcVar11 = "WCTableViewCellManager";
                _objc_getClass();
                uVar6 = local_1b8;
                pcVar2 = local_1d8;
                puVar3 = PTR_s_perform_026c5910;
                uVar9 = *(undefined8 *)(param_1 + 0x20);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_colorPreviewForStyle_stopIndex__026c5920,local_f0,local_1d0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar11,PTR_s_normalCellForSel_target_title_ri_026b2e78,puVar3,uVar6,
                           pcVar2);
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_170;
                local_170 = pcVar11;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
                (*(code *)PTR__objc_release_02578630)(uVar9);
                _objc_storeStrong(&local_1d8,0);
              }
              else {
                pcVar11 = "WCTableViewCellManager";
                _objc_getClass();
                uVar6 = local_1b8;
                puVar3 = PTR_s_perform_026c5910;
                uVar9 = *(undefined8 *)(param_1 + 0x20);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_gradientPreviewForStyle__026c5918,local_f0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar11,PTR_s_normalCellForSel_target_title_ri_026b2e78,puVar3,uVar6,
                           &cf_nSraS);
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_170;
                local_170 = pcVar11;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
                (*(code *)PTR__objc_release_02578630)(uVar9);
              }
            }
            else {
              pcVar2 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1c1 = false;
              if (pcVar10 == (cfstringStruct *)0x0) {
                local_320 = &cf__gn_;
              }
              else {
                local_320 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
                _objc_retainAutoreleasedReturnValue();
                local_1c0 = local_320;
              }
              local_1c1 = pcVar10 != (cfstringStruct *)0x0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar11,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar3,uVar6,
                         &cf_e_gQ_,local_320,0);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_170;
              local_170 = pcVar11;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              if ((local_1c1 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            _objc_storeStrong(&local_1b8,0);
          }
          else {
            puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
            _objc_alloc();
            local_c0 = &cf_E__;
            local_b8 = &cf_E__N;
            local_b0 = &cf_E_S;
            puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_c0,3);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
            local_180 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setTag__026caa80,local_d8);
            local_184 = 0;
            local_194 = 2;
            pcVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_alignment);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_2e0 = pcVar10;
            if ((long)local_194 < (long)pcVar10) {
              local_2e0 = (cfstringStruct *)(long)local_194;
            }
            local_1a8 = local_2e0;
            local_190 = local_2e0;
            if ((long)local_184 < (long)local_2e0) {
              local_2e8 = local_2e0;
            }
            else {
              local_2e8 = (cfstringStruct *)(long)local_184;
            }
            local_1b0 = local_2e8;
            local_1a0 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_setSelectedSegmentIndex__0269e9e0,local_2e8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_addTarget_action_forControlEvent_026ca4c8,
                       *(undefined8 *)(param_1 + 0x20),PTR_s_alignmentChanged__026c5900,0x1000);
            pcVar11 = "WCTableViewCellManager";
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_170;
            local_170 = pcVar11;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            _objc_storeStrong(&local_180,0);
          }
        }
        else {
          uVar13 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_isEqualToString__0269ccc8,&cf_enabled);
          if ((uVar13 & 1) == 0) {
            uVar13 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_isEqualToString__0269ccc8,&cf_gradient);
            local_280 = &cf_nSr;
            if ((uVar13 & 1) == 0) {
              local_280 = &cf__O_u_SO;
            }
          }
          else {
            local_280 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          pcVar11 = PTR_WCRefineHelper_026ce000;
          puVar3 = PTR_s_settingSwitchChanged__026c58f8;
          local_178 = local_280;
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          pcVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_objectForKeyedSubscript__0269d098,local_128);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar11,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,uVar6,local_280,
                     pcVar10);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_170;
          local_170 = pcVar11;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          _objc_storeStrong(&local_178,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addCell__0269e3f8,local_170);
        _objc_storeStrong(&local_170,0);
        local_260 = local_260 + 1;
      } while (local_260 < local_258);
      local_258 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
      local_260 = 0;
    } while (local_258 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

