// FUN_003b3148 @ 003b3148

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003b3148(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  double dVar4;
  double local_368;
  undefined1 auStack_268 [48];
  undefined1 auStack_238 [48];
  ulong local_208;
  double local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined1 auStack_148 [48];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [56];
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  undefined1 local_31;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  local_29 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_30 = 1;
  }
  else {
    uVar2 = local_28;
    FUN_0036b608(local_28,0);
    local_31 = (undefined1)uVar2;
    if (((uVar2 & 1) == 0) || (uVar2 = local_28, FUN_003b269c(), (uVar2 & 1) != 0)) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setEditing_animated__026a2e78);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEditing_animated__026a2e78,0,0);
      }
      pcVar3 = &cf_setSwipeOffset_animated_;
      _NSSelectorFromString();
      uVar2 = local_28;
      local_40 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) != 0) {
        param_1 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40,0);
      }
      pcVar3 = &cf__setSwipeOffset_animated_;
      _NSSelectorFromString();
      uVar2 = local_28;
      local_60 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) != 0) {
        param_1 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_60,0);
      }
      pcVar3 = &cf__setSwipeOffset_animated_completion_;
      _NSSelectorFromString();
      uVar2 = local_28;
      local_70 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) != 0) {
        param_1 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_70,0,0);
      }
      pcVar3 = &cf_onMenuOffsetChange_menuWidth_;
      _NSSelectorFromString();
      uVar2 = local_28;
      local_80 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) != 0) {
        param_2 = 0;
        param_1 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_80);
      }
      puVar1 = PTR__CGAffineTransformIdentity_025782d8;
      _memcpy(auStack_b8,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar2 = local_28;
      _memcpy(auStack_e8,auStack_b8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_e8);
      _memcpy(auStack_118,puVar1,0x30);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      _memcpy(auStack_148,auStack_118,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_148);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_168 = param_1;
      local_160 = param_2;
      local_158 = param_3;
      local_150 = param_4;
      _CGRectIsEmpty();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_188 = param_1;
        uStack_180 = param_2;
        local_178 = param_3;
        uStack_170 = param_4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_188 = 0.0;
        local_190 = local_178;
        dVar4 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        local_1b8 = dVar4;
        local_1b0 = param_2;
        local_1a8 = param_3;
        local_1a0 = param_4;
        _CGRectGetWidth(dVar4,param_2,param_3,param_4);
        local_368 = dVar4;
        if (dVar4 <= local_190) {
          local_368 = local_190;
        }
        local_1c0 = local_368;
        local_178 = local_368;
        uStack_1d8 = uStack_180;
        local_1e0 = local_188;
        uStack_1c8 = uStack_170;
        local_1d0 = local_368;
        uVar2 = local_28;
        local_198 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        uStack_1f8 = uStack_1d8;
        local_200 = local_1e0;
        uStack_1e8 = uStack_1c8;
        local_1f0 = local_1d0;
        param_1 = local_1e0;
        param_2 = uStack_1d8;
        param_3 = local_1d0;
        param_4 = uStack_1c8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if ((local_29 & 1) != 0) {
        FUN_003b392c(local_28);
      }
      uVar2 = local_28;
      FUN_0036bd00();
      _objc_retainAutoreleasedReturnValue();
      local_208 = uVar2;
      if (uVar2 != 0) {
        _memcpy(auStack_238,PTR__CGAffineTransformIdentity_025782d8,0x30);
        uVar2 = local_208;
        _memcpy(auStack_268,auStack_238,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_268);
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
        if (0.5 < ABS(param_1)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,param_2,param_3,param_4,local_208,PTR_s_setFrame__026ca960);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
      _objc_storeStrong(&local_208,0);
      local_30 = 0;
    }
    else {
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

