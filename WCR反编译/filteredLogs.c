// filteredLogs @ 01720bb8

/* Function Stack Size: 0x10 bytes */

ID ThemeBoxAirDropLogViewController::filteredLogs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_168;
  ulong local_150;
  int local_144;
  ulong local_140;
  undefined *local_138;
  ulong local_130;
  byte local_121;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ID local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_168 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_168 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_168;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_b0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterThemeText_026b3aa8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterWxidText_026b3ab0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _memset(auStack_120,0,0x40);
  puVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar6 = *local_110;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,puVar1);
        }
        uVar7 = *(ulong *)(local_118 + (long)local_1d0 * 8);
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_success);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        local_121 = (byte)uVar5;
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterSuccess_026b3ab8);
        if (((IVar3 != 1) || ((local_121 & 1) != 0)) &&
           ((IVar3 = local_b0,
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterSuccess_026b3ab8), IVar3 != 2
            || ((local_121 & 1) == 0)))) {
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterNarrow_026b3ac0);
          if ((IVar3 == 1) &&
             (IVar3 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0), IVar3 != 0)) {
            uVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            FUN_017212bc();
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (uVar5 == 0) {
              _objc_storeStrong(&local_130,&cf__);
            }
            uVar5 = local_130;
            puVar2 = PTR_s_rangeOfString_options__0269d118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_rangeOfString_options__0269d118,local_d0,1);
            lVar8 = uVar5 + 0x8000000000000001;
            if (lVar8 == 0) {
              lVar8 = 3;
              local_144 = 3;
            }
            else {
              local_144 = 0;
            }
            local_140 = uVar5;
            local_138 = puVar2;
            _objc_storeStrong(lVar8,&local_130,0);
            if (local_144 != 0) goto LAB_017211c0;
          }
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterNarrow_026b3ac0);
          if ((IVar3 == 2) &&
             (IVar3 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0), IVar3 != 0)) {
            uVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_targetWxid);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            FUN_017212bc();
            _objc_retainAutoreleasedReturnValue();
            local_150 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_isEqualToString__0269ccc8,local_d8);
            if ((uVar5 & 1) == 0) {
              local_144 = 3;
            }
            else {
              local_144 = 0;
            }
            _objc_storeStrong(&local_150,0);
            if (local_144 != 0) goto LAB_017211c0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
        }
LAB_017211c0:
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_144 = 1;
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

