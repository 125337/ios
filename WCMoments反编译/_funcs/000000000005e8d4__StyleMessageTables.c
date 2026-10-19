// _StyleMessageTables @0x5e8d4

void _StyleMessageTables(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_248;
  ulong local_240;
  ulong local_208;
  ulong local_200;
  undefined8 local_1f0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  uVar3 = local_130;
  uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);
  uVar2 = _objc_opt_isKindOfClass(uVar3,uVar1);
  if ((uVar2 & 1) != 0) {
    local_138 = (*(code *)PTR__objc_retain_00110460)(local_130);
    _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_138,local_1f0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setSeparatorStyle_(local_138,local_1f0,0);
    _memset(auStack_180,0,0x40);
    _objc_msgSend_visibleCells(local_138,local_1f0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_200 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar3,local_1f0,auStack_180,auStack_a8,0x10);
    if (local_200 != 0) {
      lVar4 = *local_170;
      local_208 = 0;
      do {
        do {
          if (*local_170 - lVar4 != 0) {
            _objc_enumerationMutation(*local_170 - lVar4,uVar3);
          }
          local_140 = *(undefined8 *)(local_178 + local_208 * 8);
          _StyleMessageCell(local_140);
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar3,local_1f0,auStack_180,auStack_a8,0x10);
        local_208 = 0;
      } while (local_200 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_138,0);
  }
  _memset(auStack_1c8,0,0x40);
  _objc_msgSend_subviews(local_130,local_1f0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_1f0,auStack_1c8,auStack_128,0x10);
  if (local_240 != 0) {
    lVar4 = *local_1b8;
    local_248 = 0;
    do {
      do {
        if (*local_1b8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1b8 - lVar4,uVar3);
        }
        local_188 = *(undefined8 *)(local_1c0 + local_248 * 8);
        _StyleMessageTables(local_188);
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_1f0,auStack_1c8,auStack_128,0x10);
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

