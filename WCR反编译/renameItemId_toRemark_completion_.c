// renameItemId:toRemark:completion: @ 010a96f0

/* Function Stack Size: 0x28 bytes */

bool WCRefineMessageRepositoryStore::renameItemId_toRemark_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ID IVar9;
  long lVar10;
  ulong uVar11;
  ulong local_338;
  ulong local_330;
  ulong local_2d8;
  ulong local_2d0;
  undefined *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  code *local_290;
  undefined *local_288;
  long local_280;
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  code *local_268;
  undefined *local_260;
  ID local_258;
  long local_250;
  undefined8 local_248;
  long local_240;
  ID local_238;
  ID local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  long local_178;
  ID local_170;
  undefined4 local_164;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  SEL local_140;
  ID local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_5);
  lVar10 = local_148;
  FUN_010a6348();
  _objc_retainAutoreleasedReturnValue();
  local_160 = lVar10;
  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
  if (lVar10 == 0) {
    local_129 = 0;
    local_164 = 1;
  }
  else {
    IVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_178 = 0;
    local_170 = IVar4;
    _memset(auStack_1c0,0,0x40);
    IVar4 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
    if (local_2d0 != 0) {
      lVar10 = *local_1b0;
      local_2d8 = 0;
      do {
        do {
          if (*local_1b0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar10,IVar4);
          }
          uVar11 = *(ulong *)(local_1b8 + local_2d8 * 8);
          local_180 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          FUN_010a6348();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(uVar11);
          if ((uVar6 & 1) != 0) {
            _objc_storeStrong(&local_178,local_180);
            local_164 = 2;
            goto LAB_010a9990;
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
                  );
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    local_164 = 0;
LAB_010a9990:
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (local_178 == 0) {
      local_129 = 0;
      local_164 = 1;
    }
    else {
      uVar7 = local_150;
      FUN_010a6348();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_138;
      local_1c8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_earliestItemWithRemark_excluding_026ae598,uVar7,local_160);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1d0 = IVar4;
      if (IVar4 == 0) {
        IVar4 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_arrayWithCapacity__0269d9b8,IVar4);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = puVar8;
        _memset(auStack_220,0,0x40);
        IVar4 = local_170;
        (*(code *)PTR__objc_retain_02578638)();
        local_330 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,
                   0x10);
        if (local_330 != 0) {
          lVar10 = *local_210;
          local_338 = 0;
          do {
            do {
              if (*local_210 - lVar10 != 0) {
                _objc_enumerationMutation(*local_210 - lVar10,IVar4);
              }
              uVar11 = *(ulong *)(local_218 + local_338 * 8);
              local_1e0 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar11;
              FUN_010a6348();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar5);
              (*(code *)PTR__objc_release_02578630)(uVar11);
              if ((uVar6 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObject__0269d180,local_1e0)
                ;
              }
              else {
                uVar5 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_mutableCopy_0269d8a0);
                local_228 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c8,&cf_remark);
                puVar8 = local_1d8;
                uVar5 = local_228;
                (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(uVar5);
                _objc_storeStrong(&local_228,0);
              }
              local_338 = local_338 + 1;
            } while (local_338 < local_330);
            local_330 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128
                       ,0x10);
            local_338 = 0;
          } while (local_330 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_persistItems__026ae590,local_1d8);
        if (local_158 != 0) {
          (**(code **)(local_158 + 0x10))(local_158,1,0,local_160);
        }
        local_129 = 1;
        local_164 = 1;
        _objc_storeStrong(&local_1d8,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        IVar9 = IVar4;
        FUN_010a6348();
        _objc_retainAutoreleasedReturnValue();
        local_230 = IVar9;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar3 = local_138;
        uVar7 = local_1c8;
        IVar9 = local_1d0;
        IVar4 = local_230;
        puVar8 = PTR___NSConcreteStackBlock_02578660;
        local_278 = PTR___NSConcreteStackBlock_02578660;
        local_270 = 0xc2000000;
        local_26c = 0;
        local_268 = FUN_010aa058;
        local_260 = &DAT_02581fc0;
        local_238 = local_138;
        (*(code *)PTR__objc_retain_02578638)();
        lVar10 = local_178;
        local_258 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_1c8;
        local_250 = lVar10;
        (*(code *)PTR__objc_retain_02578638)();
        lVar10 = local_158;
        local_248 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        lVar2 = local_158;
        local_240 = lVar10;
        local_2a0 = puVar8;
        local_298 = 0xc2000000;
        local_294 = 0;
        local_290 = FUN_010aa12c;
        local_288 = &DAT_025814c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_280 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_confirmReplaceRemark_existingIte_026ae5a8,uVar7,IVar9,1,&local_278,
                   &local_2a0);
        local_129 = 1;
        local_164 = 1;
        _objc_storeStrong(&local_280);
        _objc_storeStrong(&local_240,0);
        _objc_storeStrong(&local_248,0);
        _objc_storeStrong(&local_250,0);
        _objc_storeStrong(&local_258,0);
        _objc_storeStrong(&local_230,0);
      }
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_1c8,0);
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

