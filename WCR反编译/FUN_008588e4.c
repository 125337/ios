// FUN_008588e4 @ 008588e4

double FUN_008588e4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                   byte param_6)

{
  double dVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_480;
  double local_420;
  double local_418;
  double local_3d8;
  double local_3d0;
  ulong local_380;
  ulong local_378;
  ulong local_258;
  ulong local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  byte local_d1;
  double local_d0;
  double local_c8;
  double local_c0;
  ulong local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  uVar2 = local_b8;
  local_d1 = param_6;
  local_d0 = param_3;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    local_b0 = local_c0;
    local_e8 = 1;
  }
  else {
    local_f0 = 12.0;
    dVar7 = 0.0;
    local_f8 = 0.0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar3;
    _memset(auStack_148,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_378 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_378 != 0) {
      lVar6 = *local_138;
      local_380 = 0;
      do {
        do {
          if (*local_138 - lVar6 != 0) {
            _objc_enumerationMutation(*local_138 - lVar6,uVar2);
          }
          local_108 = *(undefined8 *)(local_140 + local_380 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_frame_026ca640);
          local_168 = dVar7;
          dStack_160 = param_2;
          local_158 = param_3;
          dStack_150 = param_4;
          _CGRectGetWidth(dVar7,param_2,param_3,param_4);
          if ((dVar7 <= 0.0) ||
             (dVar7 = local_168, _CGRectGetHeight(local_168,dStack_160,local_158,dStack_150),
             dVar7 <= 0.0)) {
            local_1b8 = local_158;
            local_1c0 = 0x4046000000000000;
            if (44.0 <= local_158) {
              local_3d0 = local_158;
            }
            else {
              local_3d0 = 44.0;
            }
            local_1c8 = local_3d0;
            local_158 = local_3d0;
            local_1d0 = dStack_150;
            local_1d8 = 0x4036000000000000;
            if (22.0 <= dStack_150) {
              local_3d8 = dStack_150;
            }
            else {
              local_3d8 = 22.0;
            }
            local_1e0 = local_3d8;
            dStack_150 = local_3d8;
          }
          dVar7 = local_168;
          _CGRectGetWidth(local_168,dStack_160,local_158,dStack_150);
          puVar3 = local_100;
          local_f8 = local_f8 + dVar7;
          puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          dVar7 = local_168;
          param_2 = dStack_160;
          param_3 = local_158;
          param_4 = dStack_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGRect__0269e130);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_380 = local_380 + 1;
        } while (local_380 < local_378);
        local_378 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_380 = 0;
      } while (local_378 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    dVar7 = local_f0;
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    dVar7 = local_f8 + (double)(uVar2 - 1) * dVar7;
    if ((local_d1 & 1) == 0) {
      local_420 = local_c8;
    }
    else {
      local_230 = (local_d0 - dVar7) * 0.5;
      local_238 = local_c8;
      local_418 = local_230;
      if (local_230 < local_c8) {
        local_418 = local_c8;
      }
      local_240 = local_418;
      local_420 = local_418;
    }
    local_228 = local_420;
    local_248 = local_c0;
    dVar9 = local_f8;
    local_f8 = dVar7;
    for (local_250 = 0; uVar2 = local_250, uVar5 = local_b8,
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0), uVar2 < uVar5;
        local_250 = local_250 + 1) {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_250);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_100;
      local_258 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_objectAtIndexedSubscript__0269cc78,local_250);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      dVar1 = local_c0;
      local_480 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_228,local_c0,dVar9,param_4,local_258,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_setHidden__026ca970,0);
      dVar8 = local_480;
      _CGRectGetWidth(local_480,dVar1,dVar9,param_4);
      dVar7 = local_248;
      local_228 = local_228 + dVar8 + local_f0;
      _CGRectGetMaxY(local_480,dVar1);
      if (local_480 <= dVar7) {
        local_480 = dVar7;
      }
      local_248 = local_480;
      _objc_storeStrong(&local_258,0);
    }
    local_b0 = local_248;
    local_e8 = 1;
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

