// _WCMSoftenMediaEdges @0x17314

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCMSoftenMediaEdges
               (undefined8 param_1,undefined8 param_2,double param_3,double param_4,
               undefined8 param_5,undefined8 param_6,double param_7,double param_8,
               undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined8 uStack_178;
  bool local_c9;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b6;
  byte local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b0 = 0;
  local_a8 = param_5;
  local_a0 = param_6;
  local_98 = param_7;
  local_90 = param_8;
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_3;
  dStack_70 = param_4;
  _objc_storeStrong(&local_b0,param_9);
  uVar2 = _CGRectIsEmpty(local_88,uStack_80,local_78,dStack_70);
  if (((uVar2 & 1) != 0) ||
     (dVar10 = local_90, uVar2 = _CGRectIsEmpty(local_a8,local_a0,local_98), (uVar2 & 1) != 0)) {
    local_b4 = 1;
    goto LAB_000179e8;
  }
  uVar9 = 0x4000000000000000;
  local_b5 = dStack_70 < local_90 - 2.0;
  dVar8 = local_98 - 2.0;
  local_b6 = local_78 < dVar8;
  if ((!(bool)local_b5) && (!(bool)local_b6)) {
    _objc_msgSend_setMask_(local_b0,local_1c0,0);
    local_b4 = 1;
    goto LAB_000179e8;
  }
  _objc_msgSend_mask(local_b0,local_1c0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_opt_class(&_OBJC_CLASS___CAGradientLayer);
  uVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);
  local_c9 = (uVar2 & 1) == 0;
  if (local_c9) {
    local_1d0 = 0;
  }
  else {
    _objc_msgSend_mask(local_b0,local_1c0);
    local_1d0 = _objc_retainAutoreleasedReturnValue();
    local_c8 = local_1d0;
  }
  local_c9 = !local_c9;
  local_c0 = (*(code *)PTR__objc_retain_00110460)(local_1d0);
  if (local_c9) {
    (*(code *)PTR__objc_release_00110458)(local_c8);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (local_c0 == 0) {
LAB_00017544:
    if (local_c0 == 0) {
      _objc_msgSend_layer(&_OBJC_CLASS___CAGradientLayer,local_1c0);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      lVar1 = local_c0;
      local_c0 = lVar5;
      (*(code *)PTR__objc_release_00110458)(lVar1);
    }
    if ((local_b5 & 1) == 0) {
      local_1d8 = local_78;
    }
    else {
      local_1d8 = dStack_70;
    }
    if (local_1d8 <= 1.0) {
      local_1e0 = 1.0;
    }
    else {
      local_1e0 = local_1d8;
    }
    local_1e8 = 24.0 / local_1e0;
    if (0.12 < local_1e8) {
      local_1e8 = 0.12;
    }
    _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_1c0);
    _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_1c0,1);
    _objc_msgSend_setFrame_(local_88,uStack_80,local_78,dStack_70,local_c0,local_1c0);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_1c0);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    local_48 = _objc_msgSend_CGColor(uVar9,local_1c0);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_1c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    local_40 = _objc_msgSend_CGColor(uVar3,local_1c0);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_1c0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    local_38 = _objc_msgSend_CGColor(uVar4,local_1c0);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_1c0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    local_30 = _objc_msgSend_CGColor(uVar6,local_1c0);
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1c0,&local_48);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setColors_(local_c0,local_1c0);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    local_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
    _objc_msgSend_numberWithDouble_(local_1e8,&_OBJC_CLASS___NSNumber,local_1c0);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    local_60 = uVar9;
    _objc_msgSend_numberWithDouble_(1.0 - local_1e8,&_OBJC_CLASS___NSNumber,local_1c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fcb0;
    local_58 = uVar3;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1c0,&local_68,4);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setLocations_(local_c0,local_1c0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    if ((local_b5 & 1) == 0) {
      uStack_178 = 0x3fe0000000000000;
      local_180 = _CGPointMake(0);
    }
    else {
      uStack_178 = 0;
      local_180 = _CGPointMake(0x3fe0000000000000);
    }
    _objc_msgSend_setStartPoint_(local_180,uStack_178,local_c0,local_1c0);
    if ((local_b5 & 1) == 0) {
      uStack_198 = 0x3fe0000000000000;
      local_1a0 = _CGPointMake(0x3ff0000000000000);
    }
    else {
      uStack_198 = 0x3ff0000000000000;
      local_1a0 = _CGPointMake(0x3fe0000000000000);
    }
    _objc_msgSend_setEndPoint_(local_1a0,uStack_198,local_c0,local_1c0);
    _objc_msgSend_setMask_(local_b0,local_1c0,local_c0);
    _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_1c0);
    local_b4 = 0;
  }
  else {
    uVar3 = _objc_msgSend_frame(local_c0,local_1c0);
    uVar2 = _CGRectEqualToRect(uVar3,dVar8,uVar9,dVar10,local_88,uStack_80,local_78,dStack_70);
    if ((uVar2 & 1) == 0) goto LAB_00017544;
    local_b4 = 1;
  }
  _objc_storeStrong(&local_c0,0);
LAB_000179e8:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

