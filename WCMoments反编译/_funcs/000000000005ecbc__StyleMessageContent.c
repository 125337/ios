// _StyleMessageContent @0x5ecbc

void _StyleMessageContent
               (undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,
               undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  ulong local_2a0;
  ulong local_298;
  double local_258;
  double local_228;
  double local_220;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  _objc_opt_class(local_b0);
  _NSStringFromClass();
  local_c0 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_containsString_(local_c0,local_1f0,&cf_WCCommentListContent);
  if (((uVar2 & 1) != 0) ||
     (uVar2 = _objc_msgSend_isEqualToString_(local_c0,local_1f0,&cf_UITableViewCellContentView),
     (uVar2 & 1) != 0)) {
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_b0,local_1f0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  uVar3 = local_b0;
  uVar4 = _objc_opt_class(&_OBJC_CLASS___UIImageView);
  uVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);
  uVar3 = local_b0;
  if ((uVar2 & 1) != 0) {
    local_100 = _objc_msgSend_bounds(local_b0,local_1f0);
    local_f8 = param_2;
    local_f0 = param_3;
    local_e8 = param_4;
    local_e0 = _objc_msgSend_convertRect_toView_(local_100,uVar3,local_1f0,local_b8);
    local_d8 = param_2;
    local_d0 = param_3;
    local_c8 = param_4;
    local_108 = (double)_CGRectGetWidth(local_e0,param_2,param_3,param_4);
    param_3 = local_d0;
    param_4 = local_c8;
    local_110 = (double)_CGRectGetHeight(local_e0,local_d8);
    param_2 = 0x403c000000000000;
    if ((((28.0 <= local_108) && (param_2 = 0x403c000000000000, 28.0 <= local_110)) &&
        (param_2 = 0x4061800000000000, local_108 <= 140.0)) &&
       ((param_2 = 0x4061800000000000, local_110 <= 140.0 &&
        (param_2 = 0x4028000000000000, ABS(local_108 - local_110) < 12.0)))) {
      param_3 = local_d0;
      param_4 = local_c8;
      dVar6 = (double)_CGRectGetMinX(local_e0,local_d8);
      param_2 = 0x4056800000000000;
      if (90.0 <= dVar6) {
        local_228 = 12.0;
      }
      else {
        local_118 = local_108;
        local_120 = local_110;
        if (local_110 <= local_108) {
          local_220 = local_110;
        }
        else {
          local_220 = local_108;
        }
        local_128 = local_220;
        param_2 = 0x4000000000000000;
        local_228 = local_220 / 2.0;
      }
      _objc_msgSend_layer(local_b0,local_1f0);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setCornerRadius_(local_228,uVar3,local_1f0);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar4 = *(undefined8 *)PTR__kCACornerCurveContinuous_001101d8;
      _objc_msgSend_layer(local_b0,local_1f0);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setCornerCurve_(uVar3,local_1f0,uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_setClipsToBounds_(local_b0,local_1f0,1);
    }
  }
  uVar2 = _objc_msgSend_containsString_(local_c0,local_1f0,&cf_HeadImage);
  bVar1 = false;
  uVar3 = param_2;
  if ((uVar2 & 1) != 0) {
    local_148 = _objc_msgSend_bounds(local_b0,local_1f0);
    uVar3 = 0x403c000000000000;
    bVar1 = 28.0 <= param_3;
    local_140 = param_2;
    local_138 = param_3;
    local_130 = param_4;
  }
  if (bVar1) {
    local_170 = _objc_msgSend_bounds(local_b0,local_1f0);
    local_168 = uVar3;
    local_160 = param_3;
    local_158 = param_4;
    local_150 = param_3;
    local_198 = _objc_msgSend_bounds(local_b0,local_1f0);
    local_258 = param_4;
    if (local_150 < param_4) {
      local_258 = local_150;
    }
    local_1a0 = local_258;
    local_190 = uVar3;
    local_188 = param_3;
    local_180 = param_4;
    local_178 = param_4;
    _objc_msgSend_layer(local_b0,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setCornerRadius_(local_258 / 2.0,uVar3,local_1f0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar4 = *(undefined8 *)PTR__kCACornerCurveContinuous_001101d8;
    _objc_msgSend_layer(local_b0,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setCornerCurve_(uVar3,local_1f0,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setClipsToBounds_(local_b0,local_1f0,1);
  }
  _memset(auStack_1e8,0,0x40);
  _objc_msgSend_subviews(local_b0,local_1f0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_298 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_1f0,auStack_1e8,auStack_a8,0x10);
  if (local_298 != 0) {
    lVar5 = *local_1d8;
    local_2a0 = 0;
    do {
      do {
        if (*local_1d8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1d8 - lVar5,uVar3);
        }
        local_1a8 = *(undefined8 *)(local_1e0 + local_2a0 * 8);
        _StyleMessageContent(local_1a8,local_b8);
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_1f0,auStack_1e8,auStack_a8,0x10);
      local_2a0 = 0;
    } while (local_298 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

