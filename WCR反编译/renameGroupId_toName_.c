// renameGroupId:toName: @ 00f2d188

/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonGroupStore::renameGroupId_toName_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  ulong local_190;
  ulong local_188;
  ID local_160;
  ID local_158;
  ID local_150;
  long local_148;
  byte local_139;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  int local_e4;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar1 = local_c8;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_d0;
  local_d8 = uVar1;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_d8;
  local_e0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_a9 = 0;
    local_e4 = 1;
  }
  else {
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf___all__);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__);
      if ((uVar1 & 1) == 0) {
        IVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groups_026a1048);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_138 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        local_139 = 0;
        for (local_148 = 0; lVar7 = local_148, IVar4 = local_138,
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0), uVar1 = local_e0,
            lVar7 < (long)IVar4; local_148 = local_148 + 1) {
          IVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_objectAtIndexedSubscript__0269cc78,local_148);
          _objc_retainAutoreleasedReturnValue();
          local_150 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar4;
          FUN_00f29cf4();
          _objc_retainAutoreleasedReturnValue();
          local_158 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          IVar4 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_d8);
          if ((IVar4 & 1) == 0) {
            IVar4 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = IVar4;
            FUN_00f29cf4();
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar5);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            if ((IVar6 & 1) == 0) goto LAB_00f2d7f0;
            local_a9 = 0;
            local_e4 = 1;
          }
          else {
            IVar4 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_mutableCopy_0269d8a0);
            local_160 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_setObject_forKeyedSubscript__0269d248,local_e0,&cf_name);
            IVar4 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_atIndexedSubscript__0269e970,IVar4,local_148);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            local_139 = 1;
            _objc_storeStrong(&local_160,0);
LAB_00f2d7f0:
            local_e4 = 0;
          }
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_150,0);
          if (local_e4 != 0) goto LAB_00f2d91c;
        }
        IVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_ungroupedDisplayName_026a1040);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if ((uVar1 & 1) == 0) {
          if ((local_139 & 1) == 0) {
            local_a9 = 0;
            local_e4 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setGroups__026abf30,local_138);
            FUN_00f2c2e0();
            local_a9 = 1;
            local_e4 = 1;
          }
        }
        else {
          local_a9 = 0;
          local_e4 = 1;
        }
LAB_00f2d91c:
        _objc_storeStrong(&local_138,0);
      }
      else {
        uVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_hQ);
        if ((uVar1 & 1) == 0) {
          _memset(auStack_130,0,0x40);
          IVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groups_026a1048);
          _objc_retainAutoreleasedReturnValue();
          local_188 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_188 != 0) {
            lVar7 = *local_120;
            local_190 = 0;
            do {
              do {
                if (*local_120 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_120 - lVar7,IVar4);
                }
                uVar8 = *(ulong *)(local_128 + local_190 * 8);
                local_f0 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar8;
                FUN_00f29cf4();
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar1);
                (*(code *)PTR__objc_release_02578630)(uVar8);
                if ((uVar2 & 1) != 0) {
                  local_a9 = 0;
                  local_e4 = 1;
                  goto LAB_00f2d4e0;
                }
                local_190 = local_190 + 1;
              } while (local_190 < local_188);
              local_188 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                         auStack_a8,0x10);
              local_190 = 0;
            } while (local_188 != 0);
          }
          local_e4 = 0;
LAB_00f2d4e0:
          (*(code *)PTR__objc_release_02578630)(IVar4);
          if (local_e4 == 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            FUN_00f2c2e0();
            local_a9 = 1;
            local_e4 = 1;
          }
        }
        else {
          local_a9 = 0;
          local_e4 = 1;
        }
      }
    }
    else {
      local_a9 = 0;
      local_e4 = 1;
    }
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

