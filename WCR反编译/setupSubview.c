// setupSubview @ 017052c8

/* Function Stack Size: 0x10 bytes */

ID Knob::setupSubview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double in_d2;
  double in_d3;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  double local_d0;
  double local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviewMargin_026b3730);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviewMargin_026b3730);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
  dVar4 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviewMargin_026b3730);
  uVar6 = 0x4000000000000000;
  in_d2 = in_d2 - dVar4 * 2.0;
  dVar4 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
  dVar5 = in_d3;
  local_120 = dVar4;
  local_118 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviewMargin_026b3730);
  in_d3 = in_d3 - dVar5 * 2.0;
  FUN_01705754();
  local_d0 = in_d2;
  local_c8 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_frame_026ca640);
  puVar1 = local_c0;
  local_130 = in_d2;
  local_128 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d3 / 2.0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_188,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setupCraters_026b3738);
  _objc_retainAutoreleasedReturnValue();
  local_218 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_218 != 0) {
    lVar3 = *local_178;
    local_220 = 0;
    do {
      do {
        if (*local_178 - lVar3 != 0) {
          _objc_enumerationMutation(*local_178 - lVar3,IVar2);
        }
        local_148 = *(undefined8 *)(local_180 + local_220 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_148);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSubview__026b3740,local_c0);
  puVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

