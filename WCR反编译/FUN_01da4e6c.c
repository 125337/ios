// FUN_01da4e6c @ 01da4e6c

void FUN_01da4e6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double local_268;
  double local_260;
  ulong local_230;
  ulong local_228;
  undefined *local_170;
  undefined *local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined4 local_144;
  double local_140;
  undefined4 local_134;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined4 local_dc;
  double local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = param_1;
  if (local_d0 == 0) {
    local_dc = 1;
  }
  else {
    _memset(auStack_128,0,0x40);
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_228 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar6 = *local_118;
      local_230 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_120 + local_230 * 8);
          local_e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeFromSuperlayer_026ca7f8);
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setName__0269e0c8,&cf_wcrss_bar);
    local_134 = 0;
    local_144 = 1;
    local_150 = local_d8;
    if (local_d8 <= 1.0) {
      local_260 = local_d8;
    }
    else {
      local_260 = 1.0;
    }
    local_158 = local_260;
    local_140 = local_260;
    if (local_260 <= 0.0) {
      local_268 = 0.0;
    }
    else {
      local_268 = local_260;
    }
    local_160 = local_268;
    local_d8 = local_268;
    FUN_01dba9c0(DAT_02323d50 + local_268 * DAT_02324050);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = DAT_02323f10;
    local_168 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f10 + (1.0 - local_d8) * DAT_02323c90,puVar3,
               PTR_s_colorWithAlphaComponent__026ca578);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_168;
    local_170 = puVar3;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    puVar3 = local_170;
    local_b8 = puVar4;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setColors__026ca8d0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setLocations__026accb0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar8 = 0;
    uVar9 = 0x3fe0000000000000;
    FUN_01d8ebbc();
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,local_130,PTR_s_setStartPoint__026caa70);
    uVar8 = 0x3ff0000000000000;
    uVar9 = 0x3fe0000000000000;
    FUN_01d8ebbc();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setEndPoint__026ca940);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar9,dVar10,param_4,local_130,PTR_s_setFrame__026ca960);
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_130,0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

