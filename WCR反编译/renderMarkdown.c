// renderMarkdown @ 01e84b20

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::renderMarkdown(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_378;
  undefined *local_360;
  undefined8 local_358;
  double local_340;
  cfstringStruct *local_300;
  undefined *local_2e8;
  undefined8 local_2e0;
  ulong local_260;
  ulong local_258;
  cfstringStruct *local_228;
  undefined *local_1f8;
  undefined *local_1e8;
  undefined *local_1d8;
  undefined *local_1c8;
  undefined1 *local_1b8;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  undefined1 local_14a;
  byte local_149;
  undefined1 *local_148;
  undefined *local_140;
  ID local_138;
  undefined1 local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined4 local_cc;
  ID local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsScrollView_026c6ea0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_228 = pcVar10;
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_228 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_228;
  (*(code *)PTR__objc_release_02578630)(pcVar10);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_parseMarkdown__026c71e8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_b0;
  local_c8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_emptyLabel_026a2668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (IVar3 == 0) {
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    IVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_258 != 0) {
      lVar9 = *local_108;
      local_260 = 0;
      do {
        do {
          if (*local_108 - lVar9 != 0) {
            _objc_enumerationMutation(*local_108 - lVar9,IVar3);
          }
          pcVar10 = *(cfstringStruct **)(local_110 + local_260 * 8);
          local_d8 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_d8;
          local_120 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = local_120;
          local_128 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_isEqualToString__0269ccc8,&cf_task);
          if (((ulong)pcVar10 & 1) == 0) {
            pcVar2 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_isEqualToString__0269ccc8,&cf_heading);
            if (((ulong)pcVar2 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              _objc_alloc_init();
              local_198 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
              puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              local_340 = 9.0;
              puVar7 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_340 = local_340 - 1.0;
              (*(code *)PTR__objc_release_02578630)(puVar7);
              if (local_340 <= 9.0) {
                local_340 = 9.0;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_340,puVar6,PTR_s_systemFontOfSize__0269cc50);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setFont__026ca958);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              puVar6 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = false;
              if (puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                local_358 = 1;
              }
              else {
                local_1b8 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                puVar8 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_358 = 2;
                if (puVar8 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                  local_358 = 0;
                }
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setTextAlignment__026caa90,local_358);
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_1b8);
              }
              (*(code *)PTR__objc_release_02578630)(puVar6);
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_isDarkModeForBackgroundMedia_026c6fd0);
              bVar1 = (IVar4 & 1) == 0;
              if (bVar1) {
                local_1e8 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_360 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_1f8 = local_360;
              }
              else {
                local_1c8 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_360 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_1d8 = local_360;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setTextColor__026caa98,local_360);
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_1f8);
                (*(code *)PTR__objc_release_02578630)(local_1e8);
              }
              else {
                (*(code *)PTR__objc_release_02578630)(local_1d8);
                (*(code *)PTR__objc_release_02578630)(local_1c8);
              }
              local_378 = local_128;
              if (local_128 == (cfstringStruct *)0x0) {
                local_378 = &::cf___;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setText__026caa88,local_378);
              puVar6 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_heightAnchor_0269ce50);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(0x4034000000000000);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_itemsStack_026c6eb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar4);
              _objc_storeStrong(&local_198,0);
            }
            else {
              puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              _objc_alloc_init();
              local_140 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
              puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              puVar7 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_systemFontOfSize_weight__026cab60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setFont__026ca958);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              puVar6 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_149 = 0;
              if (puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                local_2e0 = 1;
              }
              else {
                puVar7 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_149 = 1;
                local_148 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_2e0 = 2;
                if (puVar7 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                  local_2e0 = 0;
                }
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setTextAlignment__026caa90,local_2e0);
              if ((local_149 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_148);
              }
              (*(code *)PTR__objc_release_02578630)(puVar6);
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_isDarkModeForBackgroundMedia_026c6fd0);
              local_14a = (undefined1)IVar4;
              local_159 = 0;
              local_169 = 0;
              local_179 = 0;
              local_189 = 0;
              local_2e8 = PTR_WCRefineConfig_026cdf58;
              if ((IVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_179 = 1;
                local_178 = local_2e8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_189 = 1;
                local_188 = local_2e8;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_159 = 1;
                local_158 = local_2e8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_169 = 1;
                local_168 = local_2e8;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setTextColor__026caa98,local_2e8);
              if ((local_189 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_188);
              }
              if ((local_179 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_178);
              }
              if ((local_169 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_168);
              }
              if ((local_159 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              local_300 = local_128;
              if (local_128 == (cfstringStruct *)0x0) {
                local_300 = &::cf___;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setText__026caa88,local_300);
              puVar6 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_heightAnchor_0269ce50);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(0x4036000000000000);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_itemsStack_026c6eb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar4);
              _objc_storeStrong(&local_140,0);
            }
          }
          else {
            pcVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_done);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_129 = SUB81(pcVar10,0);
            IVar4 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_createItemRowWithText_done_index_026c71f0,local_128,
                       (uint)pcVar10 & 1,0,1);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_b0;
            local_138 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_itemsStack_026c6eb0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar5);
            _objc_storeStrong(&local_138,0);
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_260 = 0;
      } while (local_258 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layoutItemsStack_026c6f80);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

