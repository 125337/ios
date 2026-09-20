// FUN_00779464 @ 00779464

void FUN_00779464(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined *local_370;
  undefined *local_368;
  long local_348;
  double local_330;
  ulong local_308;
  ulong local_300;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  double local_208;
  long local_200;
  byte local_1f1;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined *local_198 [4];
  ulong local_178;
  double local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined4 local_154;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  byte local_139;
  double local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_5);
  pcVar2 = &cf_MMBaseMultiMenuTableViewCell;
  local_139 = param_6;
  local_138 = param_1;
  _NSClassFromString();
  pcVar3 = &cf_MenuButton;
  local_148 = pcVar2;
  _NSClassFromString();
  uVar4 = local_130;
  local_150 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isKindOfClass__0269cd68,local_148);
  if (((uVar4 & 1) == 0) || (local_150 == (cfstringStruct *)0x0)) {
    local_154 = 1;
    goto LAB_00779d1c;
  }
  pcVar2 = &cf_fCardRightMargin;
  _NSSelectorFromString();
  pcVar3 = &cf_setFCardRightMargin_;
  local_160 = pcVar2;
  _NSSelectorFromString();
  dVar9 = 0.0;
  local_170 = 0.0;
  uVar4 = local_130;
  local_168 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_respondsToSelector__026ca818,local_160);
  dVar10 = dVar9;
  if (((uVar4 & 1) != 0) &&
     (uVar4 = local_130,
     (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_respondsToSelector__026ca818,local_168),
     dVar10 = dVar9, (uVar4 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,local_160);
    dVar10 = ABS(dVar9);
    param_2 = 0x3fe0000000000000;
    local_170 = dVar9;
    if (0.5 < dVar10) {
      dVar10 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,local_168);
    }
  }
  local_178 = 0;
  uVar7 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_valueForKey__0269d128,&cf__menuContentView);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_178;
  local_178 = uVar7;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_178;
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar4 & 1) == 0) {
    local_154 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setOpaque__026ca9f8,0);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
    uVar4 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_198[0] = puVar5;
    _memset(auStack_1e0,0,0x40);
    uVar4 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_300 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_300 != 0) {
      lVar6 = *local_1d0;
      local_308 = 0;
      do {
        do {
          if (*local_1d0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar6,uVar4);
          }
          uVar7 = *(ulong *)(local_1d8 + local_308 * 8);
          local_1a0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,local_150);
          if ((uVar7 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_addObject__0269d180,local_1a0);
          }
          local_308 = local_308 + 1;
        } while (local_308 < local_300);
        local_300 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10
                  );
        local_308 = 0;
      } while (local_300 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar5 = local_198[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_count_0269cfe0);
    if (puVar5 == (undefined *)0x0) {
      local_154 = 1;
    }
    else {
      puVar5 = local_198[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_198[0],PTR_s_sortedArrayUsingComparator__0269fae8,
                 &PTR___NSConcreteGlobalBlock_0257fcd8);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_130;
      local_1f0 = puVar5;
      FUN_0077a358();
      local_1f1 = (byte)uVar4;
      bVar1 = 0;
      if ((local_139 & 1) != 0) {
        bVar1 = local_1f1;
      }
      local_200 = 0xf;
      if ((bVar1 & 1) == 0) {
        local_200 = 0;
      }
      if (local_200 == 0) {
LAB_00779acc:
        local_330 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
        local_228 = dVar10;
        local_220 = param_2;
        local_218 = param_3;
        local_210 = param_4;
        _CGRectGetWidth(dVar10,param_2,param_3,param_4);
        if (dVar10 < 8.0) goto LAB_00779acc;
        local_330 = local_138;
        FUN_0077a788(local_178);
      }
      local_208 = local_330;
      uVar4 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      if (local_208 <= 0.0) {
        local_348 = 0;
      }
      else {
        local_348 = local_200;
      }
      FUN_0077a840(local_208,uVar4,local_348,0.0 < local_208);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _memset(auStack_270,0,0x40);
      puVar5 = local_198[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_368 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10
                );
      if (local_368 != (undefined *)0x0) {
        lVar6 = *local_260;
        local_370 = (undefined *)0x0;
        do {
          do {
            if (*local_260 - lVar6 != 0) {
              _objc_enumerationMutation(*local_260 - lVar6,puVar5);
            }
            uVar8 = *(undefined8 *)(local_268 + (long)local_370 * 8);
            local_230 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            FUN_0077a840(0);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_370 = local_370 + 1;
          } while (local_370 < local_368);
          local_368 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                     0x10);
          local_370 = (undefined *)0x0;
        } while (local_368 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_1f0);
      _objc_storeStrong(&local_1e8,0);
      local_154 = 0;
    }
    _objc_storeStrong(local_198,0);
  }
  _objc_storeStrong(&local_178,0);
LAB_00779d1c:
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

