// showComments @0x2aa5c

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::showComments(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_a8;
  byte local_99;
  undefined8 local_98;
  byte local_89;
  undefined8 local_88;
  byte local_79;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  byte local_59;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_40 = param_2;
  local_38 = param_1;
  _objc_msgSend_presentedViewController(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    _objc_msgSend_videos(local_38,local_c0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_index(local_38,local_c0);
    _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_c0,uVar3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar3,local_c0,&cf_id);
    local_48 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_resolveItem(local_38,local_c0);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    local_69 = 0;
    local_79 = 0;
    local_89 = 0;
    local_99 = 0;
    if (lVar1 == 0) {
      _objc_msgSend_facade(local_38,local_c0);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_30 = local_48;
      local_78 = uVar2;
      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_c0,&local_30,1);
      local_88 = _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      _Call(uVar2,&cf_getDataItemByID_);
      local_d8 = _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_d8;
    }
    else {
      _objc_msgSend_resolveItem(local_38,local_c0);
      local_58 = _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      (**(code **)(local_58 + 0x10))(local_58,local_48);
      local_d8 = _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_d8;
    }
    local_50 = (*(code *)PTR__objc_retain_00110460)(local_d8);
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_58);
    }
    (*(code *)PTR__objc_release_00110458)(lVar1);
    local_a8 = _objc_opt_new(&objc::class_t::WCMVideoComments);
    _objc_msgSend_setItemID_(local_a8,local_c0,local_48);
    _objc_msgSend_setItem_(local_a8,local_c0,local_50);
    _objc_msgSend_setModalPresentationStyle_(local_a8,local_c0,4);
    _objc_msgSend_setTransitioningDelegate_(local_a8,local_c0,local_a8);
    _objc_msgSend_presentViewController_animated_completion_(local_38,local_c0,local_a8,1);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

