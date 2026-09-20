// FUN_003a1fd4 @ 003a1fd4

void FUN_003a1fd4(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong local_1e0;
  ulong local_178;
  ulong local_170;
  ulong local_150;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  undefined1 local_129;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = 0;
  local_d8 = 0;
  _memset(auStack_120,0,0x40);
  uVar4 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar6 = *local_110;
    local_178 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,uVar4);
        }
        uVar7 = *(ulong *)(local_118 + local_178 * 8);
        puVar3 = PTR_WCRGroupingItem_026ce5c8;
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRGroupingItem_026ce5c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_129 = 0;
        bVar2 = true;
        uVar1 = (uVar7 & 1) != 0;
        if ((bool)uVar1) {
          uVar7 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = uVar7 == 0;
          local_129 = uVar1;
          local_128 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar7);
          uVar1 = local_129;
        }
        local_129 = uVar1;
        if (!bVar2) {
          uVar7 = local_e0;
          FUN_003b6e7c();
          lVar8 = 0;
          local_138 = uVar7;
          if ((local_d0 == 0) || (lVar8 = uVar7 - local_d8, local_d8 <= uVar7 && lVar8 != 0)) {
            _objc_storeStrong(lVar8,&local_d0,local_e0);
            local_d8 = local_138;
          }
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (local_d0 == 0) {
    local_c0 = 0;
    local_13c = 1;
  }
  else {
    uVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_cellData_026a27b0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar4;
    if (uVar4 == 0) {
      puVar3 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_nativeCellDataForSession__026a2810);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setCellData__026a2818);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar7 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_cellData_026a27b0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_148;
      local_148 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_148;
    local_b8 = &cf_m_textForTimeLabel;
    local_b0 = &cf_textForTimeLabel;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_003afe84();
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_150;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
       uVar4 == 0)) {
      local_1e0 = 0;
    }
    else {
      local_1e0 = local_150;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_1e0;
    local_13c = 1;
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

