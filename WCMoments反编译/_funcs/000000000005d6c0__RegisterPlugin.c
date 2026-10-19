// _RegisterPlugin @0x5d6c0

byte _RegisterPlugin(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_168;
  ulong local_160;
  undefined8 local_158;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d4;
  long local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  uVar2 = _NSClassFromString(&cf_WCPluginsMgr);
  _Call(uVar2,&cf_sharedInstance,PTR____NSArray0__struct_00110718);
  local_d0 = _objc_retainAutoreleasedReturnValue();
  if (local_d0 == 0) {
    local_c1 = 0;
    local_d4 = 1;
    goto LAB_0005da1c;
  }
  _objc_opt_class(&objc::class_t::WCMMomentsSettingsController);
  _NSStringFromClass();
  local_e0 = _objc_retainAutoreleasedReturnValue();
  _Call(local_d0,&cf_plugins,PTR____NSArray0__struct_00110718);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar2;
  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  if ((uVar4 & 1) == 0) {
LAB_0005d954:
    lVar6 = local_d0;
    local_c0 = &cf_SsgSW;
    local_b8 = &cf_0_6_49;
    local_b0 = local_e0;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_158,&local_c0,3);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _Call(lVar6,&cf_registerControllerWithTitle_version_controller_);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    local_c1 = lVar6 != 0;
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_d4 = 1;
  }
  else {
    _memset(auStack_130,0,0x40);
    uVar2 = (*(code *)PTR__objc_retain_00110460)(local_e8);
    local_160 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar2,local_158,auStack_130,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar6 = *local_120;
      local_168 = 0;
      do {
        do {
          if (*local_120 - lVar6 != 0) {
            _objc_enumerationMutation(*local_120 - lVar6,uVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + local_168 * 8);
          _Call(local_f0,&cf_controller,PTR____NSArray0__struct_00110718);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _Text();
          uVar5 = _objc_retainAutoreleasedReturnValue();
          uVar1 = _objc_msgSend_isEqualToString_(uVar5,local_158,local_e0);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          (*(code *)PTR__objc_release_00110458)(uVar3);
          if ((uVar1 & 1) != 0) {
            local_c1 = 1;
            local_d4 = 1;
            goto LAB_0005d930;
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar2,local_158,auStack_130,auStack_a8,0x10);
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_d4 = 0;
LAB_0005d930:
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (local_d4 == 0) goto LAB_0005d954;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
LAB_0005da1c:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return local_c1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

