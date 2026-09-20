// displayDetailForItem: @ 01a09158

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordMultiReplyEditorViewController::displayDetailForItem_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_198;
  undefined *local_190;
  undefined *local_168;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_c8;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_d0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_168 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_168 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_168;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_120,0,0x40);
  puVar4 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_190 != (undefined *)0x0) {
    lVar7 = *local_110;
    local_198 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,puVar4);
        }
        pcVar8 = *(cfstringStruct **)(local_118 + (long)local_198 * 8);
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_e0 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
        pcVar6 = local_e0;
        if (((ulong)pcVar8 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar6;
          FUN_01a08fe8();
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          pcVar6 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isEqualToString__0269ccc8,local_d0);
          local_131 = (byte)pcVar6;
          if ((((ulong)pcVar6 & 1) == 0) &&
             (pcVar8 = local_130,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_130,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix),
             pcVar6 = local_130, ((ulong)pcVar8 & 1) != 0)) {
            uVar3 = _kWCRefineMessageRepositoryIDPrefix;
            (*(code *)PTR__objc_msgSend_02578628)
                      (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_substringFromIndex__0269d120,uVar3);
            _objc_retainAutoreleasedReturnValue();
            local_140 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isEqualToString__0269ccc8,local_d0);
            local_131 = (byte)pcVar6;
            _objc_storeStrong(&local_140,0);
          }
          pcVar6 = local_130;
          bVar1 = (local_131 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar6;
          }
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
          bVar2 = true;
          if (bVar1) goto LAB_01a09584;
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_198 = (undefined *)0x0;
    } while (local_190 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_01a09584:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_e_g;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

