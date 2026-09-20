// addColorPreviewsToVisibleCells @ 018c23f0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatTimeViewController::addColorPreviewsToVisibleCells(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong local_190;
  ulong local_188;
  ID local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ID local_e0;
  undefined1 local_d1;
  ID local_d0;
  byte local_c1;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  local_c1 = 0;
  local_d1 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  if ((bool)uVar1) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_d1 = uVar1;
    local_d0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_d1;
  }
  local_d1 = uVar1;
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_128,0,0x40);
    IVar3 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar11 = *local_118;
      local_190 = 0;
      do {
        do {
          if (*local_118 - lVar11 != 0) {
            _objc_enumerationMutation(*local_118 - lVar11,IVar3);
          }
          uVar12 = *(ulong *)(local_120 + local_190 * 8);
          local_e8 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_textLabel_0269fd00);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar12);
          if (local_130 == 0) {
            local_134 = 3;
          }
          else {
            local_140 = 0;
            uVar6 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_isEqualToString__0269ccc8,&cf_bveW_r);
            IVar4 = local_b0;
            if ((uVar6 & 1) == 0) {
              uVar6 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_isEqualToString__0269ccc8,&cf_bvofr);
              IVar4 = local_b0;
              if ((uVar6 & 1) == 0) {
                uVar6 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_isEqualToString__0269ccc8,&cf__eeW_r);
                IVar4 = local_b0;
                if ((uVar6 & 1) == 0) {
                  uVar6 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_isEqualToString__0269ccc8,&cf__eofr);
                  IVar4 = local_b0;
                  if ((uVar6 & 1) != 0) {
                    puVar7 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = puVar7;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar4,PTR_s_createColorPreviewViewWithLight__026b2f18,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    IVar5 = local_140;
                    local_140 = IVar4;
                    (*(code *)PTR__objc_release_02578630)(IVar5);
                    (*(code *)PTR__objc_release_02578630)(puVar10);
                    (*(code *)PTR__objc_release_02578630)(puVar9);
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    (*(code *)PTR__objc_release_02578630)(puVar7);
                  }
                }
                else {
                  puVar7 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar9;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar4,PTR_s_createColorPreviewViewWithLight__026b2f18,puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  IVar5 = local_140;
                  local_140 = IVar4;
                  (*(code *)PTR__objc_release_02578630)(IVar5);
                  (*(code *)PTR__objc_release_02578630)(puVar10);
                  (*(code *)PTR__objc_release_02578630)(puVar9);
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                }
              }
              else {
                puVar7 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar4,PTR_s_createColorPreviewViewWithLight__026b2f18,puVar8);
                _objc_retainAutoreleasedReturnValue();
                IVar5 = local_140;
                local_140 = IVar4;
                (*(code *)PTR__objc_release_02578630)(IVar5);
                (*(code *)PTR__objc_release_02578630)(puVar10);
                (*(code *)PTR__objc_release_02578630)(puVar9);
                (*(code *)PTR__objc_release_02578630)(puVar8);
                (*(code *)PTR__objc_release_02578630)(puVar7);
              }
            }
            else {
              puVar7 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_createColorPreviewViewWithLight__026b2f18,puVar8);
              _objc_retainAutoreleasedReturnValue();
              IVar5 = local_140;
              local_140 = IVar4;
              (*(code *)PTR__objc_release_02578630)(IVar5);
              (*(code *)PTR__objc_release_02578630)(puVar10);
              (*(code *)PTR__objc_release_02578630)(puVar9);
              (*(code *)PTR__objc_release_02578630)(puVar8);
              (*(code *)PTR__objc_release_02578630)(puVar7);
            }
            if (local_140 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAccessoryType__026a3220,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_setAccessoryView__026b03e8,local_140);
            }
            _objc_storeStrong(&local_140,0);
            local_134 = 0;
          }
          _objc_storeStrong(&local_130,0);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_e0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

