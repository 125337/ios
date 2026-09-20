// setupStars @ 01707acc

/* Function Stack Size: 0x10 bytes */

ID SwitchThemes::setupStars(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d2;
  double in_d3;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *local_368;
  undefined *local_360;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  undefined *local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined *local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined *local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined *local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined *local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined *local_150;
  double local_148;
  double local_120;
  double local_118;
  double local_f8;
  SEL local_f0;
  ID local_e8;
  undefined1 auStack_e0 [128];
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar11 = DAT_023241e0;
  dVar10 = DAT_023241d8;
  dVar9 = DAT_02323d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar6 = DAT_023241e0;
  local_f0 = param_2;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_frame_026ca640);
  local_118 = dVar6;
  local_f8 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_frame_026ca640);
  local_148 = in_d3 * DAT_02323c88;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_120 = in_d3;
  _objc_alloc();
  dVar5 = local_f8 * 0.5;
  dVar7 = local_120 * DAT_02323d40;
  dVar6 = local_148;
  dVar8 = local_148;
  FUN_01705754();
  local_170 = dVar5;
  local_168 = dVar7;
  local_160 = dVar6;
  local_158 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,dVar7,dVar6,dVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_150 = puVar1;
  _objc_alloc();
  dVar6 = local_f8 * DAT_02323d60;
  dVar8 = local_120 * DAT_02323d90;
  dVar5 = local_148 * 0.6;
  dVar7 = local_148 * 0.6;
  FUN_01705754();
  local_198 = dVar6;
  local_190 = dVar8;
  local_188 = dVar5;
  local_180 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,dVar8,dVar5,dVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_178 = puVar2;
  _objc_alloc();
  dVar5 = local_f8 * 0.7;
  dVar7 = local_120 * 0.15;
  dVar6 = local_148;
  dVar8 = local_148;
  FUN_01705754();
  local_1c0 = dVar5;
  local_1b8 = dVar7;
  local_1b0 = dVar6;
  local_1a8 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,dVar7,dVar6,dVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_1a0 = puVar1;
  _objc_alloc();
  dVar6 = local_f8 * DAT_02339848;
  dVar8 = local_120 * DAT_02324250;
  dVar5 = local_148 * 1.4;
  dVar7 = local_148 * 1.4;
  FUN_01705754();
  local_1e8 = dVar6;
  local_1e0 = dVar8;
  local_1d8 = dVar5;
  local_1d0 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,dVar8,dVar5,dVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_1c8 = puVar2;
  _objc_alloc();
  dVar6 = local_f8 * 0.7;
  dVar8 = local_120 * DAT_0232c670;
  dVar5 = local_148 * dVar9;
  dVar9 = local_148 * dVar9;
  FUN_01705754();
  local_210 = dVar6;
  local_208 = dVar8;
  local_200 = dVar5;
  local_1f8 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,dVar8,dVar5,dVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_1f0 = puVar1;
  _objc_alloc();
  dVar9 = local_f8 * DAT_02324050;
  dVar6 = local_120 * DAT_02323d98;
  dVar8 = local_148 * dVar10;
  dVar10 = local_148 * dVar10;
  FUN_01705754();
  local_238 = dVar9;
  local_230 = dVar6;
  local_228 = dVar8;
  local_220 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar9,dVar6,dVar8,dVar10,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_218 = puVar2;
  _objc_alloc();
  dVar9 = local_f8 * DAT_02323f28;
  dVar10 = local_120 * DAT_023243c8;
  dVar6 = local_148 * dVar11;
  dVar11 = local_148 * dVar11;
  FUN_01705754();
  local_260 = dVar9;
  local_258 = dVar10;
  local_250 = dVar6;
  local_248 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
  local_60 = local_150;
  local_58 = local_178;
  local_50 = local_1a0;
  local_48 = local_1c8;
  local_40 = local_1f0;
  local_38 = local_218;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_240 = puVar1;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  local_268 = puVar2;
  _memset(auStack_2b0,0,0x40);
  puVar1 = local_268;
  (*(code *)PTR__objc_retain_02578638)();
  local_360 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_e0,0x10);
  if (local_360 != (undefined *)0x0) {
    lVar3 = *local_2a0;
    local_368 = (undefined *)0x0;
    do {
      do {
        if (*local_2a0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_2a0 - lVar3,puVar1);
        }
        uVar4 = *(undefined8 *)(local_2a8 + (long)local_368 * 8);
        local_270 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_frame_026ca640);
        uVar4 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_368 = local_368 + 1;
      } while (local_368 < local_360);
      local_360 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_e0,0x10)
      ;
      local_368 = (undefined *)0x0;
    } while (local_360 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setStars__026b37a8,local_268);
  puVar1 = local_268;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_268);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

