// FUN_003d4050 @ 003d4050

void FUN_003d4050(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong local_220;
  ulong local_218;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined4 local_174;
  ulong local_170;
  undefined1 local_161;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  ulong local_110;
  undefined *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_1);
  local_100 = param_3;
  local_f8 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_f8 = &cf___;
  }
  if (local_100 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_100 = &cf___;
  }
  local_108 = (undefined *)0x0;
  local_110 = 0;
  _memset(auStack_158,0,0x40);
  uVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
  if (local_218 != 0) {
    lVar7 = *local_148;
    local_220 = 0;
    do {
      do {
        if (*local_148 - lVar7 != 0) {
          _objc_enumerationMutation(*local_148 - lVar7,uVar2);
        }
        uVar8 = *(ulong *)(local_150 + local_220 * 8);
        puVar4 = PTR_WCRGroupingItem_026ce5c8;
        local_118 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRGroupingItem_026ce5c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_161 = 0;
        bVar3 = true;
        uVar1 = (uVar8 & 1) != 0;
        if ((bool)uVar1) {
          uVar8 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = uVar8 == 0;
          local_161 = uVar1;
          local_160 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar1 = local_161;
        }
        local_161 = uVar1;
        if (!bVar3) {
          uVar8 = local_118;
          FUN_003b6e7c();
          lVar9 = 0;
          local_170 = uVar8;
          if ((local_108 == (undefined *)0x0) ||
             (lVar9 = uVar8 - local_110, local_110 <= uVar8 && lVar9 != 0)) {
            _objc_storeStrong(lVar9,&local_108,local_118);
            local_110 = local_170;
          }
        }
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_108 == (undefined *)0x0) {
    local_174 = 1;
  }
  else {
    puVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_cellData_026a27b0);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_nativeCellDataForSession__026a2810);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setCellData__026a2818);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_cellData_026a27b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_180;
      local_180 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = local_180;
    local_b8 = &cf_m_textForMessageLabel;
    local_b0 = &cf_textForMessageLabel;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_003afe84();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    FUN_003d4f28();
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = local_188;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar4 & 1) == 0) {
      _objc_storeStrong(&local_188,&cf___);
    }
    puVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_00395724();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_180;
    if (((ulong)puVar5 & 1) == 0) {
      local_c8 = &cf_m_textForNameLabel;
      local_c0 = &cf_textForNameLabel;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003afe84();
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = local_190;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_storeStrong(&local_190,&cf___);
      }
      puVar4 = local_188;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = puVar4;
      puVar4 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
      if ((puVar4 == (undefined *)0x0) ||
         (puVar4 = local_188, (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0)
         , puVar4 == (undefined *)0x0)) {
        puVar4 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
        if (puVar4 != (undefined *)0x0) {
          _objc_storeStrong(puVar4,&local_198,local_190);
        }
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_198;
        local_198 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_198;
      if (local_f8 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_f8 = puVar4;
      }
      puVar4 = local_198;
      if (local_100 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_100 = puVar4;
      }
      local_174 = 1;
      _objc_storeStrong(&local_198);
      _objc_storeStrong(&local_190,0);
    }
    else {
      local_d8 = &cf_m_textForNameLabel;
      local_d0 = &cf_textForNameLabel;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003afe84();
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = local_1a0;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_storeStrong(&local_1a0,&cf___);
      }
      puVar5 = local_1a0;
      puVar6 = PTR_s_length_0269cca0;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = local_188;
      if (puVar5 == (undefined *)0x0) {
        if (local_f8 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_f8 = puVar4;
        }
        puVar4 = local_188;
        if (local_100 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_100 = puVar4;
        }
        local_174 = 1;
      }
      else {
        FUN_003d5148();
        local_1b0 = puVar4;
        local_1a8 = puVar6;
        if (puVar4 == (undefined *)0x7fffffffffffffff) {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = puVar4;
          if (local_f8 != (undefined8 *)0x0) {
            _objc_retainAutorelease();
            *local_f8 = puVar4;
          }
          puVar4 = local_1b8;
          if (local_100 != (undefined8 *)0x0) {
            _objc_retainAutorelease();
            *local_100 = puVar4;
          }
          local_174 = 1;
          _objc_storeStrong(&local_1b8,0);
        }
        else {
          puVar5 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_substringToIndex__0269d6c0,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_188;
          local_1c0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_188,PTR_s_substringWithRange__0269d138,local_1b0,local_1a8);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_1b0;
          local_e0 = local_1a8;
          puVar5 = local_188;
          local_1c8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_188,PTR_s_substringFromIndex__0269d120,local_1b0 + (long)local_1a8);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = puVar5;
          if (local_f8 != (undefined8 *)0x0) {
            puVar4 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
            if (puVar4 == (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_______);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *local_f8 = puVar4;
            }
            else {
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf___________);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *local_f8 = puVar4;
            }
          }
          if (local_100 != (undefined8 *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_______);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *local_100 = puVar4;
          }
          _objc_storeStrong(&local_1d0);
          _objc_storeStrong(&local_1c8,0);
          _objc_storeStrong(&local_1c0,0);
          local_174 = 0;
        }
      }
      _objc_storeStrong(&local_1a0,0);
    }
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

