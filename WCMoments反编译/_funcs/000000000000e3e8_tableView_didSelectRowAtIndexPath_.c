// tableView:didSelectRowAtIndexPath: @0xe3e8

/* Function Stack Size: 0x20 bytes */

void WCMInboxController::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined1 local_91;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  _objc_msgSend_deselectRowAtIndexPath_animated_(local_58,local_b0,local_60,1);
  lVar3 = _objc_msgSend_row(local_60,local_b0);
  local_69 = 0;
  bVar2 = true;
  if (-1 < lVar3) {
    uVar4 = _objc_msgSend_row(local_60,local_b0);
    _objc_msgSend_filtered(local_48,local_b0);
    local_68 = _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    uVar5 = _objc_msgSend_count(local_68,local_b0);
    bVar2 = uVar5 <= uVar4;
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_68);
  }
  if (bVar2) {
    local_70 = 1;
  }
  else {
    _objc_msgSend_filtered(local_48,local_b0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_row(local_60,local_b0);
    _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_b0,uVar7);
    local_78 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _Call(local_78,&cf_objID,PTR____NSArray0__struct_00110718);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _Text();
    local_80 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_facade(local_48,local_b0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_30 = local_80;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_b0,&local_30,1);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar6,&cf_getDataItemByID_);
    local_88 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    local_91 = 0;
    bVar2 = false;
    uVar1 = local_88 != 0;
    if ((bool)uVar1) {
      _objc_msgSend_nativeRouter(local_48,local_b0);
      local_90 = _objc_retainAutoreleasedReturnValue();
      bVar2 = local_90 != 0;
      local_91 = uVar1;
      (*(code *)PTR__objc_release_00110458)(local_90);
      uVar1 = local_91;
    }
    local_91 = uVar1;
    if (bVar2) {
      _objc_msgSend_nativeRouter(local_48,local_b0);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_40 = local_78;
      local_38 = local_88;
      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_b0,&local_40,2);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _Call(uVar6,&cf_openWCCommentDetail_withDataItem_);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    else {
      _objc_msgSend_alertControllerWithTitle_message_preferredStyle_
                (&_OBJC_CLASS___UIAlertController,local_b0,&cf_feelSb,&cf_agR___gR_b_NS0);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar6;
      _objc_msgSend_actionWithTitle_style_handler_(&_OBJC_CLASS___UIAlertAction,local_b0,&cf__Y,1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addAction_(uVar6,local_b0);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      _objc_msgSend_presentViewController_animated_completion_(local_48,local_b0,local_a0,1,0);
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    local_70 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

