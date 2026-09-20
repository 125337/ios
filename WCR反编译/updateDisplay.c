// updateDisplay @ 01f1ec2c

/* Function Stack Size: 0x10 bytes */

void ColorPreviewView::updateDisplay(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *local_280;
  undefined *local_260;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1b0;
  undefined *local_188;
  undefined8 local_180;
  double dStack_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  double dStack_140;
  byte local_131;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _memset(auStack_100,0,0x40);
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_220 != (undefined *)0x0) {
    lVar2 = *local_f0;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_f0 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar2,puVar1);
        }
        local_c0 = *(undefined8 *)(local_f8 + (long)local_228 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar5 = 0;
  uVar3 = 0;
  dVar8 = 18.0;
  uVar7 = 0x4032000000000000;
  FUN_01f1eae8();
  local_128 = uVar3;
  local_120 = uVar5;
  local_118 = uVar7;
  local_110 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_108 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4022000000000000;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_previewColor_026c83b0);
  _objc_retainAutoreleasedReturnValue();
  local_131 = 0;
  local_260 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_260 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_130 = local_260;
  }
  local_131 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setBackgroundColor__026ca888,local_260);
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
  dVar6 = dVar8 / 2.0;
  uVar4 = 0x402e000000000000;
  local_168 = uVar3;
  local_160 = uVar5;
  local_158 = uVar7;
  local_150 = dVar8;
  FUN_01f1f244();
  local_180 = uVar4;
  dStack_178 = dVar6;
  local_148 = uVar4;
  dStack_140 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,dVar6,local_108,PTR_s_setCenter__026ca8c0);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar3 = 0;
  dVar8 = 18.0;
  FUN_01f1eae8();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_188 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_darkPreviewColor_026c83b8);
  _objc_retainAutoreleasedReturnValue();
  local_280 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_1b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_280 = local_1b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setBackgroundColor__026ca888,local_280);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
  dVar8 = dVar8 / 2.0;
  uVar3 = 0x4041800000000000;
  FUN_01f1f244();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,dVar8,local_188,PTR_s_setCenter__026ca8c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_108);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_188);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNeedsDisplay_026a3050);
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

