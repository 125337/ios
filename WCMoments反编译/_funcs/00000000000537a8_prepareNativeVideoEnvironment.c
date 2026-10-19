// prepareNativeVideoEnvironment @0x537a8

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::prepareNativeVideoEnvironment(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint local_11c;
  undefined8 local_118;
  long local_f8 [4];
  undefined1 local_d1;
  long local_d0;
  byte local_c1;
  long local_c0;
  long local_b8;
  long local_b0;
  byte local_a1;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_88 = param_2;
  local_80 = param_1;
  uVar4 = _objc_msgSend_nativeVideoEnvironment(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar3 = _objc_msgSend_isViewLoaded(uVar4,local_118);
  local_91 = 0;
  local_a1 = 0;
  local_11c = 0;
  if ((uVar3 & 1) != 0) {
    uVar5 = _objc_msgSend_nativeVideoEnvironmentAccount(local_80,local_118);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_91 = 1;
    local_90 = uVar5;
    uVar6 = _objc_msgSend_account(local_80,local_118);
    local_a0 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_a1 = 1;
    local_11c = _objc_msgSend_isEqual_(uVar5,local_118);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_90);
  }
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if ((local_11c & 1) == 0) {
    uVar4 = _objc_msgSend_host(local_80,local_118);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _objc_msgSend_navigationController(uVar4,local_118);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = _objc_msgSend_topViewController(uVar5,local_118);
    local_b0 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_pendingSeenIDs(local_80,local_118);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    lVar7 = _objc_msgSend_count(uVar4,local_118);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_b8 = lVar7;
    uVar4 = _objc_msgSend_host(local_80,local_118);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _Call(uVar4,&cf_preOpenAlbumView,PTR____NSArray0__struct_00110718);
    local_c0 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    lVar7 = local_c0;
    local_c1 = 0;
    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
    uVar3 = _objc_opt_isKindOfClass(lVar7,uVar4);
    lVar7 = local_c0;
    local_d1 = 0;
    bVar2 = false;
    uVar1 = (uVar3 & 1) != 0;
    if ((bool)uVar1) {
      uVar4 = _objc_msgSend_host(local_80,local_118);
      local_d0 = _objc_retainAutoreleasedReturnValue(uVar4);
      bVar2 = lVar7 != local_d0;
      local_d1 = uVar1;
      (*(code *)PTR__objc_release_00110458)(local_d0);
      uVar1 = local_d1;
    }
    local_d1 = uVar1;
    if (bVar2) {
      _objc_msgSend_loadViewIfNeeded(local_c0,local_118);
      local_c1 = _objc_msgSend_isViewLoaded(local_c0,local_118);
      if ((local_c1 & 1) != 0) {
        _objc_msgSend_setNativeVideoEnvironment_(local_80,local_118,local_c0);
        uVar4 = _objc_msgSend_account(local_80,local_118);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        _objc_msgSend_setNativeVideoEnvironmentAccount_(local_80,local_118);
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
    }
    uVar4 = _objc_msgSend_facade(local_80,local_118);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _Call(uVar4,&cf_updateDownloadConcurrentCount,PTR____NSArray0__struct_00110718);
    local_f8[0] = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    lVar7 = local_c0;
    local_78 = &cf_nativePage;
    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);
    uVar3 = _objc_opt_isKindOfClass(lVar7,uVar4);
    uVar4 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_118,uVar3 & 1);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_70 = &cf_loaded;
    local_50 = uVar4;
    uVar5 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_118,local_c1 & 1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_68 = &cf_downloadPrepared;
    local_48 = uVar5;
    uVar6 = _objc_msgSend_numberWithInt_
                      (local_f8[0],&_OBJC_CLASS___NSNumber,local_118,local_f8[0] != 0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar7 = local_b0;
    local_60 = &cf_navigationUnchanged;
    local_40 = uVar6;
    uVar8 = _objc_msgSend_host(local_80,local_118);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = _objc_msgSend_navigationController(uVar8,local_118);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = _objc_msgSend_topViewController(uVar9,local_118);
    lVar11 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar10 = _objc_msgSend_numberWithInt_
                       (lVar7 - lVar11,&_OBJC_CLASS___NSNumber,local_118,lVar7 - lVar11 == 0);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    lVar7 = local_b8;
    local_58 = &cf_pendingSeenUnchanged;
    local_38 = uVar10;
    uVar12 = _objc_msgSend_pendingSeenIDs(local_80,local_118);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    lVar13 = _objc_msgSend_count(uVar12,local_118);
    uVar14 = _objc_msgSend_numberWithInt_
                       (lVar7 - lVar13,&_OBJC_CLASS___NSNumber,local_118,lVar7 - lVar13 == 0);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    local_30 = uVar14;
    uVar15 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                       (&_OBJC_CLASS___NSDictionary,local_118,&local_50,&local_78,5);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    _Trace(&cf_video_environment_prepare);
    (*(code *)PTR__objc_release_00110458)(uVar15);
    (*(code *)PTR__objc_release_00110458)(uVar14);
    (*(code *)PTR__objc_release_00110458)(uVar12);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    (*(code *)PTR__objc_release_00110458)(lVar11);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_storeStrong(local_f8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

