// previewForItem: @ 01134914

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyStore::previewForItem_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1a0;
  ID local_180;
  ID local_150;
  ID local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ID local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  int local_d4;
  ID local_d0;
  ID local_c8;
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
  IVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  IVar1 = local_d0;
  if (IVar2 == 0) {
    IVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_type)
    ;
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_invite);
    if ((IVar1 & 1) == 0) {
      IVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_repository)
      ;
      IVar1 = local_e8;
      if ((IVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = IVar1;
        local_d4 = 1;
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          local_1a0 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = local_1a0;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _memset(auStack_140,0,0x40);
        puVar3 = local_f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        if (local_1c8 != (undefined *)0x0) {
          lVar6 = *local_130;
          local_1d0 = (undefined *)0x0;
          do {
            do {
              if (*local_130 - lVar6 != 0) {
                _objc_enumerationMutation(*local_130 - lVar6,puVar3);
              }
              uVar7 = *(ID *)(local_138 + (long)local_1d0 * 8);
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_100 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar7 & 1) != 0) {
                IVar1 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                IVar2 = IVar1;
                FUN_01130f58();
                _objc_retainAutoreleasedReturnValue();
                IVar5 = IVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar2);
                (*(code *)PTR__objc_release_02578630)(IVar1);
                if ((IVar5 & 1) != 0) {
                  IVar1 = local_100;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
                  _objc_retainAutoreleasedReturnValue();
                  IVar2 = IVar1;
                  FUN_01130f58();
                  _objc_retainAutoreleasedReturnValue();
                  local_148 = IVar2;
                  (*(code *)PTR__objc_release_02578630)(IVar1);
                  IVar2 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
                  IVar1 = local_148;
                  if (IVar2 == 0) {
                    IVar1 = local_100;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
                    _objc_retainAutoreleasedReturnValue();
                    IVar2 = IVar1;
                    FUN_01130f58();
                    _objc_retainAutoreleasedReturnValue();
                    local_150 = IVar2;
                    (*(code *)PTR__objc_release_02578630)(IVar1);
                    IVar2 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
                    local_b0 = local_b8;
                    IVar1 = local_150;
                    if (IVar2 == 0) {
                      IVar1 = local_100;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_b0,PTR_s_repositoryTypeTitle__026af358);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_release_02578630)(IVar1);
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_b0 = IVar1;
                    }
                    local_d4 = 1;
                    _objc_storeStrong(&local_150,0);
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_b0 = IVar1;
                    local_d4 = 1;
                  }
                  _objc_storeStrong(&local_148,0);
                  goto LAB_01134fdc;
                }
              }
              local_1d0 = local_1d0 + 1;
            } while (local_1d0 < local_1c8);
            local_1c8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_1d0 = (undefined *)0x0;
          } while (local_1c8 != (undefined *)0x0);
        }
        local_d4 = 0;
LAB_01134fdc:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        IVar1 = local_e8;
        if (local_d4 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar1;
          local_d4 = 1;
        }
        _objc_storeStrong(&local_f8,0);
      }
    }
    else {
      IVar1 = local_e8;
      FUN_011350d4();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
      if (IVar1 == 0) {
        local_180 = local_e8;
      }
      else {
        local_180 = local_f0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_180;
      local_d4 = 1;
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar1;
    local_d4 = 1;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

