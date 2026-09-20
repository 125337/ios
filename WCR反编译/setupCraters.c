// setupCraters @ 017057a0

/* Function Stack Size: 0x10 bytes */

ID Knob::setupCraters(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double in_d2;
  double dVar8;
  undefined8 uVar9;
  double in_d3;
  double dVar10;
  double dVar11;
  undefined *local_280;
  undefined *local_278;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined *local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  undefined *local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined *local_128 [5];
  double local_100;
  double local_f8;
  double local_d8;
  SEL local_d0;
  ID local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar10 = DAT_02323da8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar6 = DAT_02323da8;
  local_d0 = param_2;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_frame_026ca640);
  local_f8 = dVar6;
  local_d8 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_100 = in_d3;
  _objc_alloc();
  dVar6 = local_100 * DAT_02323c68;
  dVar8 = local_d8 * dVar10;
  dVar10 = local_d8 * dVar10;
  uVar4 = 0;
  FUN_01705754();
  local_148 = uVar4;
  local_140 = dVar6;
  local_138 = dVar8;
  local_130 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,dVar6,dVar8,dVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_128[0] = puVar1;
  _objc_alloc();
  uVar4 = 0;
  dVar10 = local_d8 * 0.5;
  dVar6 = local_d8 * 0.3;
  dVar8 = local_d8 * 0.3;
  FUN_01705754();
  local_170 = dVar10;
  local_168 = uVar4;
  local_160 = dVar6;
  local_158 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar10,uVar4,dVar6,dVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_150 = puVar2;
  _objc_alloc();
  dVar10 = local_d8 * DAT_02324020;
  dVar6 = local_100 * 0.5;
  dVar8 = local_d8 * 0.25;
  dVar11 = local_d8 * 0.25;
  FUN_01705754();
  local_198 = dVar10;
  local_190 = dVar6;
  local_188 = dVar8;
  local_180 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar10,dVar6,dVar8,dVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_40 = local_128[0];
  local_38 = local_150;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_178 = puVar1;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar2;
  _memset(auStack_1e8,0,0x40);
  puVar1 = local_1a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_278 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_c0,0x10);
  if (local_278 != (undefined *)0x0) {
    lVar3 = *local_1d8;
    local_280 = (undefined *)0x0;
    do {
      do {
        if (*local_1d8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1d8 - lVar3,puVar1);
        }
        local_1a8 = *(undefined8 *)(local_1e0 + (long)local_280 * 8);
        dVar10 = 1.0;
        uVar5 = 0x3ff0000000000000;
        uVar7 = 0x3ff0000000000000;
        uVar9 = 0x3ff0000000000000;
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar4 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_frame_026ca640);
        uVar4 = local_1a8;
        local_208 = uVar5;
        local_200 = uVar7;
        local_1f8 = uVar9;
        local_1f0 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar10 / 2.0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        uVar5 = DAT_023397f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_023397f8,DAT_023397f0,DAT_023397e8,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_210 = puVar2;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
        uVar4 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviewMargin_026b3730);
        uVar4 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        _objc_storeStrong(&local_210,0);
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_c0,0x10)
      ;
      local_280 = (undefined *)0x0;
    } while (local_278 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setCraters__026b3748,local_1a0);
  puVar1 = local_1a0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1a0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

