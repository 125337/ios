// openAuthor:chat: @0x46d48

/* Function Stack Size: 0x1c bytes */

void WCMFeedController::openAuthor_chat_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_e0;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  uint local_b0;
  undefined1 local_a9;
  long local_a8;
  byte local_99;
  long local_98;
  byte local_89;
  undefined8 local_88;
  byte local_79;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  SEL local_60;
  ID local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  local_69 = (byte)param_4;
  lVar3 = _objc_msgSend_length(local_68,local_e0);
  local_79 = 0;
  local_89 = 0;
  local_99 = 0;
  local_a9 = 0;
  bVar2 = true;
  uVar1 = lVar3 != 0;
  if ((bool)uVar1) {
    _objc_msgSend_host(local_58,local_e0);
    local_78 = _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    _objc_msgSend_navigationController(local_78,local_e0);
    local_88 = _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    _objc_msgSend_topViewController(local_88,local_e0);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = lVar3;
    _objc_msgSend_host(local_58,local_e0);
    local_a8 = _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != local_a8;
    local_a9 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_a8);
    uVar1 = local_a9;
  }
  local_a9 = uVar1;
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_78);
  }
  if (bVar2) {
    local_b0 = 1;
    goto LAB_00047338;
  }
  _Service(&cf_CContactMgr);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_30 = local_68;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_30,1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar4,&cf_getContactByName_);
  local_b8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if (local_b8 == 0) {
    _objc_msgSend_status_(local_58,local_e0,&cf_feelSMOgSvDe);
    local_b0 = 1;
  }
  else if ((local_69 & 1) == 0) {
    lVar3 = _NSClassFromString(&cf_ContactInfoViewController);
    local_c8 = lVar3;
    if (lVar3 != 0) {
      uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
      uVar7 = _objc_msgSend_isSubclassOfClass_(lVar3,local_e0,uVar4);
      if ((uVar7 & 1) != 0) {
        uVar4 = _objc_alloc_init(local_c8);
        local_50 = local_b8;
        local_d0 = uVar4;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_50,1);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _Call(uVar4,&cf_setM_contact_);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)();
        (*(code *)PTR__objc_release_00110458)(uVar5);
        if (lVar3 != 0) {
          _objc_msgSend_setHidesBottomBarWhenPushed_(local_d0,local_e0,1);
          _objc_msgSend_restoreChrome(local_58,local_e0);
          _objc_msgSend_host(local_58,local_e0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_navigationController(uVar4,local_e0);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_pushViewController_animated_(uVar5,local_e0,local_d0,1);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          (*(code *)PTR__objc_release_00110458)(uVar4);
        }
        local_b0 = (uint)(lVar3 == 0);
        _objc_storeStrong(&local_d0,0);
        goto joined_r0x00047314;
      }
    }
    _objc_msgSend_status_(local_58,local_e0,&cf_S_MR_ODeucSNS_u);
    local_b0 = 1;
  }
  else {
    _Service(&cf_MMMsgLogicManager);
    local_c0 = _objc_retainAutoreleasedReturnValue();
    if (local_c0 == 0) {
      _objc_msgSend_status_(local_58,local_e0,&cf_S_MR_OJ_YcSNS_u);
      local_b0 = 1;
    }
    else {
      _objc_msgSend_restoreChrome(local_58,local_e0);
      lVar3 = local_c0;
      local_48 = local_b8;
      _objc_msgSend_host(local_58,local_e0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_navigationController(uVar4,local_e0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_38 = PTR____kCFBooleanTrue_00110730;
      local_40 = uVar5;
      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_48,3);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _Call(lVar3,&cf_PushOtherBaseMsgControllerByContact_navigationController_animated_);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if (lVar3 == 0) {
        _objc_msgSend_coverHost(local_58,local_e0);
        _objc_msgSend_status_(local_58,local_e0,&cf_feelSb);
      }
      local_b0 = 0;
    }
    _objc_storeStrong(&local_c0,0);
joined_r0x00047314:
    if (local_b0 == 0) {
      local_b0 = 0;
    }
  }
  _objc_storeStrong(&local_b8,0);
LAB_00047338:
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

