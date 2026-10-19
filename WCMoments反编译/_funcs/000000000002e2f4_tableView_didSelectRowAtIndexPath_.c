// tableView:didSelectRowAtIndexPath: @0x2e2f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCMCacheController::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_230;
  ulong local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  _objc_msgSend_deselectRowAtIndexPath_animated_(local_c0,local_1f8,local_c8,1);
  lVar1 = _objc_msgSend_row(local_c8,local_1f8);
  if (lVar1 + -1 == 0) {
    _objc_msgSend_alertControllerWithTitle_message_preferredStyle_
              (&_OBJC_CLASS___UIAlertController,local_1f8,&cf__X_NP,0,0);
    local_d0 = _objc_retainAutoreleasedReturnValue();
    _memset(auStack_118,0,0x40);
    uVar2 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f9e0);
    local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar2,local_1f8,auStack_118,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar1 = *local_108;
      local_230 = 0;
      do {
        do {
          if (*local_108 - lVar1 != 0) {
            _objc_enumerationMutation(*local_108 - lVar1,uVar2);
          }
          uVar5 = local_d0;
          local_d8 = *(undefined8 *)(local_110 + local_230 * 8);
          _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_1f8,&cf___MB);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          local_148 = PTR___NSConcreteStackBlock_001104f0;
          local_140 = 0xc2000000;
          local_13c = 0;
          local_138 = ___56__WCMCacheController_tableView_didSelectRowAtIndexPath___block_invoke;
          local_130 = &___block_descriptor_48_e8_32s40s_e23_v16__0__UIAlertAction_8l;
          local_128 = (*(code *)PTR__objc_retain_00110460)(local_d8);
          local_120 = (*(code *)PTR__objc_retain_00110460)(local_b0);
          _objc_msgSend_actionWithTitle_style_handler_
                    (&_OBJC_CLASS___UIAlertAction,local_1f8,uVar3,0,&local_148);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_addAction_(uVar5,local_1f8);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          (*(code *)PTR__objc_release_00110458)(uVar3);
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_128,0);
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar2,local_1f8,auStack_118,auStack_a8,0x10);
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = local_d0;
    _objc_msgSend_actionWithTitle_style_handler_(&_OBJC_CLASS___UIAlertAction,local_1f8,&cf_Sm,1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addAction_(uVar2,local_1f8);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_msgSend_view(local_b0,local_1f8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_popoverPresentationController(local_d0,local_1f8);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSourceView_(uVar5,local_1f8,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_168 = _objc_msgSend_rectForRowAtIndexPath_(local_c0,local_1f8,local_c8);
    uStack_160 = in_d1;
    local_158 = in_d2;
    uStack_150 = in_d3;
    _objc_msgSend_popoverPresentationController(local_d0,local_1f8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_190 = local_168;
    _objc_msgSend_setSourceRect_(local_168,uStack_160,local_158,uStack_150,uVar2,local_1f8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_presentViewController_animated_completion_(local_b0,local_1f8,local_d0,1,0);
    _objc_storeStrong(&local_d0,0);
  }
  else {
    lVar1 = _objc_msgSend_row(lVar1 + -1,local_c8,local_1f8);
    if (lVar1 + -3 == 0) {
      local_198 = _objc_opt_new(&_OBJC_CLASS___UIViewController);
      _objc_msgSend_setTitle_(local_198,local_1f8,&cf___);
      uVar2 = _objc_alloc(&_OBJC_CLASS___UITextView);
      _objc_msgSend_view(local_198,local_1f8);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_1c0 = _objc_msgSend_bounds(uVar5,local_1f8);
      local_1a0 = _objc_msgSend_initWithFrame_(local_1c0,in_d1,in_d2,in_d3,uVar2,local_1f8);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_msgSend_setEditable_(local_1a0,local_1f8,0);
      _objc_msgSend_setAutoresizingMask_(local_1a0,local_1f8,0x12);
      _objc_msgSend_setText_(local_1a0,local_1f8,&cf_Y);
      _objc_msgSend_monospacedSystemFontOfSize_weight_
                (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightRegular_001100c8,
                 &_OBJC_CLASS___UIFont,local_1f8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setFont_(local_1a0,local_1f8);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_view(local_198,local_1f8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addSubview_(uVar2,local_1f8,local_1a0);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_navigationController(local_b0,local_1f8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_pushViewController_animated_(uVar2,local_1f8,local_198,1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_198,0);
    }
    else {
      lVar1 = _objc_msgSend_row(lVar1 + -3,local_c8,local_1f8);
      if (lVar1 == 2) {
        _objc_msgSend_alertControllerWithTitle_message_preferredStyle_
                  (&_OBJC_CLASS___UIAlertController,local_1f8,&cf_ntcNVGr_X_,&cf_6eTd_____OOYu0);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        local_1c8 = uVar2;
        _objc_msgSend_actionWithTitle_style_handler_
                  (&_OBJC_CLASS___UIAlertAction,local_1f8,&cf_Sm,1);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_addAction_(uVar2,local_1f8);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        uVar2 = local_1c8;
        local_1f0 = PTR___NSConcreteStackBlock_001104f0;
        local_1e8 = 0xc2000000;
        local_1e4 = 0;
        local_1e0 = ___56__WCMCacheController_tableView_didSelectRowAtIndexPath___block_invoke_1570;
        local_1d8 = &___block_descriptor_40_e8_32s_e23_v16__0__UIAlertAction_8l;
        local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_b0);
        _objc_msgSend_actionWithTitle_style_handler_
                  (&_OBJC_CLASS___UIAlertAction,local_1f8,&cf_nt,2,&local_1f0);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_addAction_(uVar2,local_1f8);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        _objc_msgSend_presentViewController_animated_completion_(local_b0,local_1f8,local_1c8,1,0);
        _objc_storeStrong(&local_1d0,0);
        _objc_storeStrong(&local_1c8,0);
      }
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

