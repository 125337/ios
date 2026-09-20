// FUN_0031cff4 @ 0031cff4

void FUN_0031cff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint local_27c;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined8 local_148;
  ulong local_140;
  ulong local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_5);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_6);
  local_148 = param_1;
  if ((local_138 == 0) ||
     (uVar1 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_130 = (undefined *)0x0;
    local_158 = 1;
  }
  else {
    local_160 = (undefined *)0x0;
    _memset(auStack_1a8,0,0x40);
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_240 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_240 != 0) {
      lVar13 = *local_198;
      local_248 = 0;
      do {
        do {
          if (*local_198 - lVar13 != 0) {
            _objc_enumerationMutation(*local_198 - lVar13,uVar2);
          }
          uVar14 = *(ulong *)(local_1a0 + local_248 * 8);
          local_168 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar1 = local_168;
          local_27c = 0;
          if ((uVar3 & 1) != 0) {
            puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
            local_27c = (uint)uVar1;
          }
          (*(code *)PTR__objc_release_02578630)(uVar14);
          if ((local_27c & 1) != 0) {
            _objc_storeStrong(&local_160,local_168);
            local_158 = 2;
            goto LAB_0031d3a0;
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    local_158 = 0;
LAB_0031d3a0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_160 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_160;
      local_160 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setName__0269e0c8,local_140);
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_160,PTR_s_setContentsScale__026ca8f0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_128 = &cf_bounds;
      puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_120 = &cf_position;
      puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_e8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_118 = &cf_path;
      puVar6 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_e0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_110 = &cf_fillColor;
      puVar7 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_d8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_108 = &cf_strokeColor;
      puVar8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_d0 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_100 = &cf_lineWidth;
      puVar9 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_c8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = &cf_opacity;
      puVar10 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_c0 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = &cf_hidden;
      puVar11 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      local_b8 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_128,8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setActions__0269f1c0);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,local_160,PTR_s_setZPosition__026a01a0);
      uVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_isEqualToString__0269ccc8,
                 &cf_WCRefineChatRoomInfoMemberSection_Fill);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else {
        uVar1 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    uVar15 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setZPosition__026a01a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar15,param_2,param_3,param_4,local_160,PTR_s_setFrame__026ca960);
    puVar4 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar4;
    local_158 = 1;
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

