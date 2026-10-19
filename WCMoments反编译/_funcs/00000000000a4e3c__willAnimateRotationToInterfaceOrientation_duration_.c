// _willAnimateRotationToInterfaceOrientation:duration: @0xa4e3c

/* Function Stack Size: 0x20 bytes */

void WCMTOCropViewController::_willAnimateRotationToInterfaceOrientation_duration_
               (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_1e8;
  ulong local_1e0;
  undefined8 local_1a0;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined8 local_168;
  long_long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c8 = param_4;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar2 = _UIInterfaceOrientationIsLandscape(param_3);
  local_e8 = _objc_msgSend_frameForToolbarWithVerticalLayout_(param_1,local_1a0,uVar2 ^ 1);
  uStack_e0 = in_d1;
  local_d8 = in_d2;
  uStack_d0 = in_d3;
  _objc_msgSend_toolbar(local_b0,local_1a0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_e0;
  local_110 = local_e8;
  uStack_f8 = uStack_d0;
  local_100 = local_d8;
  _objc_msgSend_setFrame_(local_e8,uStack_e0,local_d8,uStack_d0,uVar3,local_1a0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_toolbar(local_b0,local_1a0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar3,local_1a0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllAnimations(uVar4,local_1a0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _memset(auStack_158,0,0x40);
  _objc_msgSend_toolbar(local_b0,local_1a0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar3,local_1a0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_sublayers(uVar4,local_1a0);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_1e0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar5,local_1a0,auStack_158,auStack_a8,0x10);
  if (local_1e0 != 0) {
    lVar6 = *local_148;
    local_1e8 = 0;
    do {
      do {
        if (*local_148 - lVar6 != 0) {
          _objc_enumerationMutation(*local_148 - lVar6,uVar5);
        }
        local_118 = *(undefined8 *)(local_150 + local_1e8 * 8);
        _objc_msgSend_removeAllAnimations(local_118,local_1a0);
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < local_1e0);
      local_1e0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar5,local_1a0,auStack_158,auStack_a8,0x10);
      local_1e8 = 0;
    } while (local_1e0 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar5);
  dVar1 = local_c8;
  local_188 = PTR___NSConcreteStackBlock_001104f0;
  local_180 = 0xc2000000;
  local_17c = 0;
  local_178 = 
  ___79__WCMTOCropViewController__willAnimateRotationToInterfaceOrientation_duration___block_invoke;
  local_170 = &___block_descriptor_48_e8_32s_e5_v8__0l;
  local_168 = (*(code *)PTR__objc_retain_00110460)(local_b0);
  local_160 = local_c0;
  _objc_msgSend_animateWithDuration_delay_options_animations_completion_
            (dVar1,&_OBJC_CLASS___UIView,local_1a0,4,&local_188);
  _objc_msgSend_toolbarSnapshotView(local_b0,local_1a0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0,uVar3,local_1a0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_toolbar(local_b0,local_1a0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0x3ff0000000000000,uVar3,local_1a0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

