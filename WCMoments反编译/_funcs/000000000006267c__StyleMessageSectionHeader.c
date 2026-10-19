// _StyleMessageSectionHeader @0x6267c

void _StyleMessageSectionHeader(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_138;
  ulong local_130;
  undefined8 local_120;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_120);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(local_b0,local_120);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _memset(auStack_f8,0,0x40);
  _objc_msgSend_subviews(local_b0,local_120);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_130 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar1,local_120,auStack_f8,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar4 = *local_e8;
    local_138 = 0;
    do {
      do {
        if (*local_e8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar4,uVar1);
        }
        uVar5 = *(undefined8 *)(local_f0 + local_138 * 8);
        local_b8 = uVar5;
        uVar2 = _objc_opt_class(&_OBJC_CLASS___UILabel);
        uVar3 = _objc_opt_isKindOfClass(uVar5,uVar2);
        if ((uVar3 & 1) == 0) {
          _StyleMessageSectionHeader(local_b8);
        }
        else {
          local_100 = (*(code *)PTR__objc_retain_00110460)(local_b8);
          _objc_msgSend_systemFontOfSize_weight_
                    (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,
                     &_OBJC_CLASS___UIFont,local_120);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setFont_(local_100,local_120);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_120);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setTextColor_(local_100,local_120);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_120);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setBackgroundColor_(local_100,local_120);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_storeStrong(&local_100,0);
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar1,local_120,auStack_f8,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

