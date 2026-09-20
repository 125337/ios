// selectedFilterGroupId @ 00f2fab8

/* Function Stack Size: 0x10 bytes */

ID WCRefineEmoticonGroupStore::selectedFilterGroupId(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  pcVar1 = DAT_028e2d08;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  if ((DAT_028e2d08 == (cfstringStruct *)0x0) || (DAT_028e2d38 != DAT_0280e080)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_00f29cf4();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &cf___all__;
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      _objc_storeStrong(&local_d0,&cf___all__);
    }
    else {
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf___all__);
      if ((((ulong)puVar2 & 1) == 0) &&
         (puVar2 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_c8,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__),
         ((ulong)puVar2 & 1) == 0)) {
        _objc_storeStrong(&local_d0,&cf___all__);
        _memset(auStack_118,0,0x40);
        IVar5 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groups_026a1048);
        _objc_retainAutoreleasedReturnValue();
        local_160 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_160 != 0) {
          lVar8 = *local_108;
          local_168 = 0;
          do {
            do {
              if (*local_108 - lVar8 != 0) {
                _objc_enumerationMutation(*local_108 - lVar8,IVar5);
              }
              uVar9 = *(ulong *)(local_110 + local_168 * 8);
              local_d8 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar9;
              FUN_00f29cf4();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              (*(code *)PTR__objc_release_02578630)(uVar9);
              if ((uVar7 & 1) != 0) {
                _objc_storeStrong(&local_d0,local_c8);
                goto LAB_00f2fe40;
              }
              local_168 = local_168 + 1;
            } while (local_168 < local_160);
            local_160 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                       0x10);
            local_168 = 0;
          } while (local_160 != 0);
        }
LAB_00f2fe40:
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      else {
        _objc_storeStrong(&local_d0,local_c8);
      }
    }
    _objc_storeStrong(&DAT_028e2d08,local_d0);
    pcVar1 = local_d0;
    DAT_028e2d38 = DAT_0280e080;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

