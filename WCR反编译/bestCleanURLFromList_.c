// bestCleanURLFromList: @ 01023378

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::bestCleanURLFromList_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  ID IVar11;
  ulong local_1f0;
  ulong local_1e0;
  ulong local_1d0;
  ulong local_198;
  ulong local_190;
  ulong local_158;
  ulong local_148;
  ulong local_138;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ID local_e0;
  ID local_d8;
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
  uVar5 = local_c8;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     uVar5 == 0)) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    local_d8 = 0;
    local_e0 = 0x8000000000000000;
    _memset(auStack_128,0,0x40);
    uVar5 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar9 = *local_118;
      local_198 = 0;
      do {
        do {
          if (*local_118 - lVar9 != 0) {
            _objc_enumerationMutation(*local_118 - lVar9,uVar5);
          }
          uVar10 = *(ulong *)(local_120 + local_198 * 8);
          local_130 = 0;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e8 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
          uVar6 = local_e8;
          if ((uVar10 & 1) == 0) {
            puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              bVar3 = false;
              bVar2 = false;
              bVar1 = false;
              local_1d0 = uVar6;
              if (uVar6 == 0) {
                local_138 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_uri);
                _objc_retainAutoreleasedReturnValue();
                bVar3 = true;
                local_1e0 = local_138;
                if (local_138 == 0) {
                  local_148 = local_e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_playAddr);
                  _objc_retainAutoreleasedReturnValue();
                  bVar2 = true;
                  bVar1 = local_148 == 0;
                  local_1f0 = local_148;
                  if (bVar1) {
                    local_158 = local_e8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_masterUrl);
                    _objc_retainAutoreleasedReturnValue();
                    local_1f0 = local_158;
                  }
                  local_1e0 = local_1f0;
                }
                local_1d0 = local_1e0;
              }
              _objc_storeStrong(&local_130,local_1d0);
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              if (bVar2) {
                (*(code *)PTR__objc_release_02578630)(local_148);
              }
              if (bVar3) {
                (*(code *)PTR__objc_release_02578630)(local_138);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
              IVar11 = local_130;
              puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(IVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((IVar11 & 1) != 0) {
                IVar7 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                IVar11 = local_130;
                local_130 = IVar7;
                (*(code *)PTR__objc_release_02578630)(IVar11);
              }
            }
          }
          else {
            _objc_storeStrong(&local_130,local_e8);
          }
          IVar11 = local_130;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(IVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((IVar11 & 1) == 0) ||
             (IVar7 = local_130,
             (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
             IVar11 = local_b8, IVar7 == 0)) {
            IVar11 = 3;
            local_cc = 3;
          }
          else {
            IVar8 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_unescapeJSONString__026adcb8,local_130);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar11,PTR_s_preferCleanMediaURL__026add40);
            _objc_retainAutoreleasedReturnValue();
            IVar7 = local_130;
            local_130 = IVar11;
            (*(code *)PTR__objc_release_02578630)(IVar7);
            (*(code *)PTR__objc_release_02578630)(IVar8);
            IVar11 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_hasPrefix__0269d320,&cf_http);
            if ((IVar11 & 1) == 0) {
              IVar11 = 3;
              local_cc = 3;
            }
            else {
              IVar7 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_cleanMediaScoreForURL__026add48,local_130);
              IVar11 = 0;
              if ((local_d8 == 0) ||
                 (IVar11 = IVar7 - local_e0, IVar11 != 0 && (long)local_e0 <= (long)IVar7)) {
                _objc_storeStrong(IVar11,&local_d8,local_130);
                IVar11 = IVar7;
                local_e0 = IVar7;
              }
              local_cc = 0;
            }
          }
          _objc_storeStrong(IVar11,&local_130,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    IVar11 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar11;
    local_cc = 1;
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

