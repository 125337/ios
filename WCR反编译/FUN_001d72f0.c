// FUN_001d72f0 @ 001d72f0

void FUN_001d72f0(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *local_3d8;
  undefined *local_3d0;
  byte local_354;
  undefined *local_308;
  undefined *local_300;
  ulong local_2c8;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  long local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  ulong local_1e0;
  byte local_1d1;
  cfstringStruct *local_1d0;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  ulong local_170;
  undefined *local_168;
  ulong local_160;
  undefined4 local_158;
  ulong local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_148;
  local_148 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_148 == 0)) {
    local_158 = 1;
  }
  else {
    uVar3 = local_148;
    FUN_001d31ec();
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = uVar3;
    if (uVar3 == 0) {
      local_2c8 = local_148;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_2c8;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_160 == 0) {
      local_158 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_160;
      local_168 = puVar4;
      FUN_001dbbc0();
      _objc_retainAutoreleasedReturnValue();
      local_170 = uVar3;
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,uVar3);
      }
      _memset(auStack_1b8,0,0x40);
      local_c0 = &cf_thumbImageView;
      local_b8 = &cf_playerView;
      local_b0 = &cf_tmp_liftingImgView;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_300 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_300 != (undefined *)0x0) {
        lVar7 = *local_1a8;
        local_308 = (undefined *)0x0;
        do {
          do {
            if (*local_1a8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar7,puVar4);
            }
            local_178 = *(undefined8 *)(local_1b0 + (long)local_308 * 8);
            uVar3 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_valueForKey__0269d128,local_178);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1c0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((uVar3 & 1) != 0) &&
               (puVar5 = local_168,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_168,PTR_s_containsObject__0269cbb8,local_1c0),
               ((ulong)puVar5 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_1c0);
            }
            _objc_storeStrong(&local_1c0,0);
            local_308 = local_308 + 1;
          } while (local_308 < local_300);
          local_300 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_308 = (undefined *)0x0;
        } while (local_300 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar6 = &cf_WCContentItemViewTemplateVideo;
      _NSClassFromString();
      local_354 = 0;
      local_1d0 = pcVar6;
      if (pcVar6 != (cfstringStruct *)0x0) {
        uVar3 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isKindOfClass__0269cd68,pcVar6);
        local_354 = (byte)uVar3;
      }
      local_1d1 = (local_354 ^ 1) & 1;
      if (local_1d1 == 0) {
        FUN_001da6a8(local_160);
      }
      else {
        FUN_001d9428(local_160);
      }
      uVar3 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
      dVar8 = param_3;
      dVar9 = param_3;
      local_208 = param_1;
      local_200 = param_2;
      local_1f8 = param_3;
      local_1f0 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bounds_026ca548);
      param_3 = param_3 * param_1;
      local_228 = dVar8;
      local_220 = dVar9;
      local_218 = param_2;
      local_210 = param_1;
      local_1e8 = param_3;
      _memset(auStack_270,0,0x40);
      puVar4 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_3d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_140,0x10
                );
      if (local_3d0 != (undefined *)0x0) {
        lVar7 = *local_260;
        local_3d8 = (undefined *)0x0;
        do {
          do {
            dVar8 = param_3;
            dVar10 = param_1;
            if (*local_260 - lVar7 != 0) {
              _objc_enumerationMutation(*local_260 - lVar7,puVar4);
              dVar8 = param_3;
              dVar10 = param_1;
            }
            local_230 = *(long *)(local_268 + (long)local_3d8 * 8);
            if (local_230 - local_160 != 0) {
              FUN_001da6a8(local_230 - local_160,local_230);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_bounds_026ca548);
            param_3 = param_2 * dVar9;
            param_1 = local_1e8;
            if ((local_1e8 < param_3) || (param_2 = dVar10, dVar9 = dVar8, local_1e0 == local_160))
            {
              local_1e8 = param_3;
              _objc_storeStrong(&local_1e0,local_230);
              param_2 = dVar10;
              dVar9 = dVar8;
            }
            local_3d8 = local_3d8 + 1;
          } while (local_3d8 < local_3d0);
          local_3d0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_140,
                     0x10);
          local_3d8 = (undefined *)0x0;
        } while (local_3d0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_001d031c(local_1e0);
      _objc_storeStrong(&local_1e0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
      local_158 = 0;
    }
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

