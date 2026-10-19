// layoutSubviews @0x15fac

/* Function Stack Size: 0x10 bytes */

void WCMGlassButton::layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double in_d2;
  ulong local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  ID local_c8;
  class_t *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = &objc::class_t::WCMGlassButton;
  local_c8 = param_1;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_msgSendSuper2(&local_c8,"layoutSubviews");
  _memset(auStack_110,0,0x40);
  _objc_msgSend_subviews(local_b0,local_1b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_1b8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_1b0,auStack_110,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar6 = *local_100;
    local_1c0 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,uVar2);
        }
        uVar7 = *(undefined8 *)(local_108 + local_1c0 * 8);
        local_d0 = uVar7;
        uVar3 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);
        uVar4 = _objc_opt_isKindOfClass(uVar7,uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_msgSend_sendSubviewToBack_(local_b0,local_1b0,local_d0);
          lVar5 = _objc_msgSend_tag(local_d0,local_1b0);
          if (lVar5 == 0x2c4) {
            _objc_msgSend_bounds(0,local_b0,local_1b0);
            dVar8 = in_d2 - 22.0;
            _objc_msgSend_bounds(local_b0,local_1b0);
            in_d2 = 22.0;
            uVar3 = _CGRectMake(dVar8 / 2.0);
            _objc_msgSend_setFrame_(uVar3,local_d0,local_1b0);
            _objc_msgSend_layer(local_d0,local_1b0);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setCornerRadius_(0x4026000000000000,uVar3,local_1b0);
            (*(code *)PTR__objc_release_00110458)(uVar3);
            _objc_msgSend_setClipsToBounds_(local_d0,local_1b0,1);
          }
        }
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_1b0,auStack_110,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  IVar1 = local_b0;
  _objc_msgSend_imageView(local_b0,local_1b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bringSubviewToFront_(IVar1,local_1b0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  IVar1 = local_b0;
  _objc_msgSend_titleLabel(local_b0,local_1b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bringSubviewToFront_(IVar1,local_1b0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

