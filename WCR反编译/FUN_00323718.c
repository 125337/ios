// FUN_00323718 @ 00323718

void FUN_00323718(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  float fVar13;
  uint local_22c;
  ulong local_1f8;
  ulong local_1f0;
  undefined *local_1a8;
  int local_1a0;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined *local_150;
  byte local_141;
  undefined8 local_140;
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
  _objc_storeStrong(&local_138,param_2);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  local_141 = param_4;
  _memset(auStack_190,0,0x40);
  uVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_1f0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_1f0 != 0) {
    lVar11 = *local_180;
    local_1f8 = 0;
    do {
      do {
        if (*local_180 - lVar11 != 0) {
          _objc_enumerationMutation(*local_180 - lVar11,uVar2);
        }
        puVar12 = *(undefined **)(local_188 + local_1f8 * 8);
        local_150 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar4 = local_150;
        local_22c = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_22c = (uint)puVar4;
        }
        (*(code *)PTR__objc_release_02578630)(puVar12);
        puVar4 = local_150;
        if ((local_22c & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = puVar4;
          local_1a0 = 1;
          goto LAB_00323a78;
        }
        local_1f8 = local_1f8 + 1;
      } while (local_1f8 < local_1f0);
      local_1f0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_1f8 = 0;
    } while (local_1f0 != 0);
  }
  local_1a0 = 0;
LAB_00323a78:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_1a0 == 0) {
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setName__0269e0c8,local_140);
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_1a8,PTR_s_setContentsScale__026ca8f0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_128 = &cf_bounds;
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_120 = &cf_position;
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_118 = &cf_path;
    puVar12 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_110 = &cf_fillColor;
    puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_d8 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_108 = &cf_strokeColor;
    puVar6 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_d0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_100 = &cf_lineWidth;
    puVar7 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_c8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf_opacity;
    puVar8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_c0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = &cf_hidden;
    puVar9 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_b8 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_b0 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_128,8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setActions__0269f1c0);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    fVar13 = -100.0;
    if ((local_141 & 1) == 0) {
      fVar13 = 1000.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)((double)fVar13,local_1a8,PTR_s_setZPosition__026a01a0);
    if ((local_141 & 1) == 0) {
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
    puVar4 = local_1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar4;
    local_1a0 = 1;
    _objc_storeStrong(&local_1a8,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

