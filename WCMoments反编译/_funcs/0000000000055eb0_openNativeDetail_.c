// openNativeDetail: @0x55eb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMFeedController::openNativeDetail_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_158;
  undefined8 local_148;
  long local_100;
  undefined8 local_f8;
  undefined1 local_e9;
  long local_e8;
  byte local_d9;
  undefined8 local_d8;
  byte local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  byte local_b1;
  long local_b0;
  byte local_a1;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  SEL local_78;
  ID local_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  _objc_msgSend_items(local_70,local_148);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar4,local_148,local_80);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_a1 = 0;
  local_b1 = 0;
  local_158 = lVar5;
  if (lVar5 == 0) {
    _objc_msgSend_facade(local_70,local_148);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_30 = local_80;
    local_90 = uVar6;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_148,&local_30,1);
    local_a0 = _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    _Call(uVar6,&cf_getDataItemByID_);
    local_b0 = _objc_retainAutoreleasedReturnValue();
    local_158 = local_b0;
  }
  local_b1 = lVar5 == 0;
  local_88 = (*(code *)PTR__objc_retain_00110460)(local_158);
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_90);
  }
  (*(code *)PTR__objc_release_00110458)(lVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if (local_88 == 0) {
    _objc_msgSend_status_(local_70,local_148,&cf_R__fe7ReT);
    local_b8 = 1;
  }
  else {
    local_c0 = _NSClassFromString(&cf_WCTimelineRouterHelper);
    _Call(local_c0,&cf_isFlutterDetailEnabled,PTR____NSArray0__struct_00110718);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_boolValue(uVar6,local_148);
    uVar4 = local_c0;
    local_c9 = 0;
    local_d9 = 0;
    local_e9 = 0;
    bVar3 = false;
    uVar1 = (uVar7 & 1) != 0;
    if ((bool)uVar1) {
      local_48 = local_88;
      _objc_msgSend_host(local_70,local_148);
      local_c8 = _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_38 = PTR____kCFBooleanFalse_00110728;
      local_40 = local_c8;
      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_148,&local_48,3);
      local_d8 = _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      _Call(uVar4,&cf_navigateToFlutterDetailViewController_currentViewController_forbidComment_);
      local_e8 = _objc_retainAutoreleasedReturnValue();
      bVar3 = local_e8 != 0;
      local_e9 = uVar1;
      (*(code *)PTR__objc_release_00110458)(local_e8);
      uVar1 = local_e9;
    }
    local_e9 = uVar1;
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_c8);
    }
    (*(code *)PTR__objc_release_00110458)(uVar6);
    if (bVar3) {
      local_b8 = 1;
    }
    else {
      _objc_msgSend_host(local_70,local_148);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR____NSArray0__struct_00110718;
      _Call(uVar4,&cf_preOpenAlbumView);
      local_f8 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _Call(local_f8,&cf_pageContext,puVar2);
      local_100 = _objc_retainAutoreleasedReturnValue();
      uVar4 = local_c0;
      bVar3 = false;
      if (local_100 != 0) {
        local_68 = local_88;
        local_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
        _objc_msgSend_host(local_70,local_148);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        local_50 = local_100;
        local_58 = uVar6;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_148,&local_68,4);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _Call(uVar4,&
                    cf_navigateToCommentDetailViewController_tipType_currentViewController_pageContext_
             );
        lVar5 = _objc_retainAutoreleasedReturnValue();
        bVar3 = lVar5 != 0;
        (*(code *)PTR__objc_release_00110458)(lVar5);
        (*(code *)PTR__objc_release_00110458)(uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar6);
      }
      if (!bVar3) {
        _objc_msgSend_host(local_70,local_148);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _Call(uVar4,&cf_openAlbum,PTR____NSArray0__struct_00110718);
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
      local_b8 = (uint)bVar3;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

