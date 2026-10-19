// ============ 功能链 82  根: _objc_msgSend$setUser:hidden: @0xd3a20 ============
// 节点 27，按调用深度排序，自上而下读

// ---- [d0] _objc_msgSend$setUser:hidden: @0xd3a20 ----
// CALLERS: (根)
// CALLEES: setUser:hidden:


void _objc_msgSend_setUser_hidden_(undefined8 param_1)



{

  (*(code *)PTR__objc_msgSend_00110420)(param_1,"setUser:hidden:");

  return;

}






// ---- [d1] setUser:hidden: @0x45eb4 ----
// CALLERS: userContentController:didReceiveScriptMessage:, _objc_msgSend$setUser:hidden:
// CALLEES: _Service, account, account, account, status:, verifyHiddenUser:request:attempt:, account, permissionGeneration, setPermissionGeneration:, permissionRequests


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x1c bytes */



void WCMFeedController::setUser_hidden_(ID param_1,SEL param_2,ID param_3,bool param_4)



{

  ID IVar1;

  bool bVar2;

  uint uVar3;

  int iVar4;

  undefined4 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 local_3a8;

  byte local_294;

  undefined8 local_290;

  char *local_280;

  undefined8 local_1c8;

  bool local_1a9;

  undefined8 local_1a8;

  long local_1a0;

  long local_198;

  undefined8 local_190;

  undefined8 local_188;

  byte local_17a;

  byte local_179;

  undefined8 local_178;

  long local_170;

  char *local_168;

  long local_160;

  undefined8 local_140;

  long local_138;

  undefined8 local_130;

  long local_128;

  undefined4 local_120;

  byte local_119;

  undefined8 local_118;

  byte local_109;

  undefined8 local_108;

  SEL local_100;

  ID local_f8;

  cfstringStruct *local_f0;

  cfstringStruct *local_e8;

  cfstringStruct *local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  cfstringStruct *local_b8;

  cfstringStruct *local_b0;

  cfstringStruct *local_a8;

  cfstringStruct *local_a0;

  cfstringStruct *local_98;

  cfstringStruct *local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  long local_60;

  cfstringStruct *local_58;

  cfstringStruct *local_50;

  undefined8 local_48;

  undefined8 local_40;

  long local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_108 = 0;

  local_100 = param_2;

  local_f8 = param_1;

  _objc_storeStrong(&local_108,param_3);

  local_109 = (byte)param_4;

  lVar6 = _objc_msgSend_length(local_108,local_1c8);

  local_119 = 0;

  bVar2 = true;

  if (lVar6 != 0) {

    uVar7 = _objc_msgSend_account(local_f8,local_1c8);

    local_118 = _objc_retainAutoreleasedReturnValue(uVar7);

    local_119 = 1;

    lVar6 = _objc_msgSend_length(local_118,local_1c8);

    bVar2 = lVar6 == 0;

  }

  if ((local_119 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_118);

  }

  if (bVar2) {

    local_120 = 1;

    goto LAB_00046ce0;

  }

  uVar7 = _Service(&cf_CContactMgr);

  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

  local_30 = local_108;

  uVar8 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1c8,&local_30,1);

  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

  uVar9 = _Call(uVar7,&cf_getContactByName_);

  local_128 = _objc_retainAutoreleasedReturnValue(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  local_130 = _NSClassFromString(&cf_ContactSetPermissionsViewController);

  local_138 = _NSClassFromString(&cf_DelaySwitchSettingLogic);

  uVar7 = local_130;

  if (local_128 == 0) {

LAB_00046154:

    _objc_msgSend_status_(local_f8,local_1c8,&cf_S_MR_OSuCgP);

    local_120 = 1;

  }

  else {

    uVar8 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

    uVar3 = _objc_msgSend_isSubclassOfClass_(uVar7,local_1c8,uVar8);

    if (((uVar3 & 1) == 0) || (local_138 == 0)) goto LAB_00046154;

    uVar7 = _objc_alloc_init(local_130);

    local_38 = local_128;

    local_140 = uVar7;

    uVar8 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1c8,&local_38,1);

    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

    uVar7 = _Call(uVar7,&cf_setM_contact_);

    lVar6 = _objc_retainAutoreleasedReturnValue(uVar7);

    (*(code *)PTR__objc_release_00110458)();

    (*(code *)PTR__objc_release_00110458)(uVar8);

    if (lVar6 == 0) {

      _objc_msgSend_status_(local_f8,local_1c8,&cf_elRYS_OCgPT_N);

      local_120 = 1;

    }

    else {

      _objc_msgSend_loadViewIfNeeded(local_140,local_1c8);

      local_160 = _class_getInstanceVariable(local_130,"m_delaySwitchLogic");

      if (local_160 == 0) {

        local_280 = (char *)0x0;

      }

      else {

        local_280 = (char *)_ivar_getTypeEncoding(local_160);

      }

      local_168 = local_280;

      local_179 = 0;

      if ((local_280 == (char *)0x0) ||

         (iVar4 = _strcmp(local_280,"@\"DelaySwitchSettingLogic\""), iVar4 != 0)) {

        local_290 = 0;

      }

      else {

        uVar7 = _object_getIvar(local_140,local_160);

        local_290 = _objc_retainAutoreleasedReturnValue(uVar7);

        local_179 = 1;

        local_178 = local_290;

      }

      local_170 = (*(code *)PTR__objc_retain_00110460)(local_290);

      if ((local_179 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_178);

      }

      local_294 = 0;

      if (local_170 != 0) {

        local_294 = _objc_opt_isKindOfClass(local_170,local_138);

      }

      local_17a = local_294 & 1;

      local_58 = &cf_viewLoaded;

      uVar5 = _objc_msgSend_isViewLoaded(local_140,local_1c8);

      uVar7 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_1c8,uVar5);

      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

      local_50 = &cf_ready;

      local_48 = uVar7;

      uVar8 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_1c8,local_17a & 1);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      local_40 = uVar8;

      uVar9 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                        (&_OBJC_CLASS___NSDictionary,local_1c8,&local_48,&local_58,2);

      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

      _Trace(&cf_privacy_native_logic);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      if ((local_17a & 1) == 0) {

        _objc_msgSend_status_(local_f8,local_1c8,&cf__OSuCgPub_g_bRYS);

        local_120 = 1;

      }

      else {

        uVar7 = _objc_msgSend_permissionRequests(local_f8,local_1c8);

        lVar6 = _objc_retainAutoreleasedReturnValue(uVar7);

        (*(code *)PTR__objc_release_00110458)();

        if (lVar6 == 0) {

          uVar7 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

          _objc_msgSend_setPermissionRequests_(local_f8,local_1c8,uVar7);

          (*(code *)PTR__objc_release_00110458)(uVar7);

        }

        local_b8 = &cf_hidden;

        uVar7 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_1c8,local_109 & 1);

        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

        local_b0 = &cf_account;

        local_88 = uVar7;

        uVar8 = _objc_msgSend_account(local_f8,local_1c8);

        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

        IVar1 = local_f8;

        local_a8 = &cf_generation;

        local_80 = uVar8;

        lVar6 = _objc_msgSend_permissionGeneration(local_f8,local_1c8);

        _objc_msgSend_setPermissionGeneration_(IVar1,local_1c8);

        uVar9 = _objc_msgSend_numberWithUnsignedInteger_

                          (&_OBJC_CLASS___NSNumber,local_1c8,lVar6 + 1);

        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

        local_a0 = &cf_controller;

        local_70 = local_140;

        local_98 = &cf_logic;

        local_68 = local_170;

        local_90 = &cf_contact;

        local_60 = local_128;

        local_78 = uVar9;

        uVar10 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                           (&_OBJC_CLASS___NSDictionary,local_1c8,&local_88,&local_b8,6);

        local_188 = _objc_retainAutoreleasedReturnValue(uVar10);

        (*(code *)PTR__objc_release_00110458)(uVar9);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        (*(code *)PTR__objc_release_00110458)(uVar7);

        uVar7 = local_188;

        uVar8 = _objc_msgSend_permissionRequests(local_f8,local_1c8);

        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

        _objc_msgSend_setObject_forKeyedSubscript_(uVar8,local_1c8,uVar7,local_108);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        local_190 = _objc_opt_new(&_OBJC_CLASS___UISwitch);

        _objc_msgSend_setOn_(local_190,local_1c8,local_109 & 1);

        uVar7 = local_140;

        local_c0 = local_190;

        uVar8 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1c8,&local_c0,1);

        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

        uVar7 = _Call(uVar7,&cf_opWCBlacklist_);

        local_198 = _objc_retainAutoreleasedReturnValue(uVar7);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        local_1a9 = local_198 == 0;

        if (local_1a9) {

          local_3a8 = 0;

        }

        else {

          uVar7 = _Call(local_170,&cf_commitAllSwitchSetting,PTR____NSArray0__struct_00110718);

          local_3a8 = _objc_retainAutoreleasedReturnValue(uVar7);

          local_1a8 = local_3a8;

        }

        local_1a9 = !local_1a9;

        local_1a0 = (*(code *)PTR__objc_retain_00110460)(local_3a8);

        if (local_1a9) {

          (*(code *)PTR__objc_release_00110458)(local_1a8);

        }

        local_f0 = &cf_hidden;

        uVar7 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_1c8,local_109 & 1);

        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

        local_e8 = &cf_handlerInvoked;

        local_d8 = uVar7;

        uVar8 = _objc_msgSend_numberWithInt_

                          (local_198,&_OBJC_CLASS___NSNumber,local_1c8,local_198 != 0);

        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

        local_e0 = &cf_commitInvoked;

        local_d0 = uVar8;

        uVar9 = _objc_msgSend_numberWithInt_

                          (local_1a0,&_OBJC_CLASS___NSNumber,local_1c8,local_1a0 != 0);

        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

        local_c8 = uVar9;

        uVar10 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                           (&_OBJC_CLASS___NSDictionary,local_1c8,&local_d8,&local_f0,3);

        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);

        _Trace(&cf_privacy_native_switch);

        (*(code *)PTR__objc_release_00110458)(uVar10);

        (*(code *)PTR__objc_release_00110458)(uVar9);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        (*(code *)PTR__objc_release_00110458)(uVar7);

        if ((local_198 == 0) || (local_1a0 == 0)) {

          uVar7 = _objc_msgSend_permissionRequests(local_f8,local_1c8);

          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

          _objc_msgSend_removeObjectForKey_(uVar7,local_1c8,local_108);

          (*(code *)PTR__objc_release_00110458)(uVar7);

          _objc_msgSend_status_(local_f8,local_1c8,&cf__OSuCgP);

          local_120 = 1;

        }

        else {

          _objc_msgSend_verifyHiddenUser_request_attempt_(local_f8,local_1c8,local_108,local_188,0);

          local_120 = 0;

        }

        _objc_storeStrong(&local_1a0,0);

        _objc_storeStrong(&local_198,0);

        _objc_storeStrong(&local_190,0);

        _objc_storeStrong(&local_188,0);

      }

      _objc_storeStrong(&local_170,0);

    }

    _objc_storeStrong(&local_140,0);

  }

  _objc_storeStrong(&local_128,0);

LAB_00046ce0:

  _objc_storeStrong(&local_108,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d2] _Service @0xa38c ----
// CALLERS: viewDidLoad, tableView:cellForRowAtIndexPath:, viewDidLoad, tableView:cellForRowAtIndexPath:, viewDidLoad, activateVideo, start, syncHiddenUsers
// CALLEES: _Context


void _Service(undefined8 param_1)



{

  long lVar1;

  undefined8 local_88;

  undefined8 local_70;

  undefined8 local_60;

  undefined8 local_50;

  undefined8 local_40;

  undefined8 local_30;

  undefined8 local_28;

  long local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_30 = 0;

  _objc_storeStrong(&local_30,param_1);

  lVar1 = _NSClassFromString(local_30);

  if (lVar1 == 0) {

    local_70 = 0;

  }

  else {

    _Context();

    local_40 = _objc_retainAutoreleasedReturnValue();

    local_20 = lVar1;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_88,&local_20,1);

    local_50 = _objc_retainAutoreleasedReturnValue();

    _Call(local_40,&cf_getService_);

    local_70 = _objc_retainAutoreleasedReturnValue();

    local_60 = local_70;

  }

  local_28 = (*(code *)PTR__objc_retain_00110460)(local_70);

  if (lVar1 != 0) {

    (*(code *)PTR__objc_release_00110458)(local_60);

    (*(code *)PTR__objc_release_00110458)(local_50);

    (*(code *)PTR__objc_release_00110458)(local_40);

  }

  _objc_storeStrong(&local_30,0);

  if (*(long *)PTR____stack_chk_guard_00110518 == local_18) {

    _objc_autoreleaseReturnValue(0,local_28);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ---- [d2] account @0xea78 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] account @0x15c4c ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] account @0x2b6b4 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] status: @0x39544 ----
// CALLERS: timelineFinished:, refreshHead, ___32-[WCMFeedController_refreshHead]_block_invoke, start, verifyHiddenUser:request:attempt:, setUser:hidden:, openAuthor:chat:, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke.2091
// CALLEES: web, ready


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::status_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  uint local_3c;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  uVar2 = _objc_msgSend_ready(local_28,local_58);

  bVar1 = (uVar2 & 1) != 0;

  if (bVar1) {

    local_20 = local_38;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_20,1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_dataWithJSONObject_options_error_

              (&_OBJC_CLASS___NSJSONSerialization,local_58,uVar3,0);

    local_48 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);

    local_50 = _objc_msgSend_initWithData_encoding_(uVar3,local_58,local_48,4);

    _objc_msgSend_web(local_28,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_58,&cf_showStatus______0__);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_evaluateJavaScript_completionHandler_(uVar3,local_58,uVar4,0);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_storeStrong(&local_50,0);

    _objc_storeStrong(&local_48,0);

  }

  local_3c = (uint)!bVar1;

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

}






// ---- [d2] verifyHiddenUser:request:attempt: @0x44e80 ----
// CALLERS: ___54-[WCMFeedController_verifyHiddenUser:request:attempt:]_block_invoke, setUser:hidden:, _objc_msgSend$verifyHiddenUser:request:attempt:
// CALLEES: _Service, facade, account, facade, account, account, facade, status:, facade, account


/* Function Stack Size: 0x28 bytes */



void WCMFeedController::verifyHiddenUser_request_attempt_

               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)



{

  undefined *puVar1;

  bool bVar2;

  byte bVar3;

  uint uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  ulong uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  dispatch_time_t dVar12;

  double local_498;

  ulong local_3b8;

  ulong local_3b0;

  long local_300;

  long local_2e0;

  undefined8 local_2a0;

  uint local_284;

  undefined *local_280;

  undefined4 local_278;

  undefined4 local_274;

  code *local_270;

  undefined *local_268;

  undefined8 local_260;

  undefined8 local_258;

  undefined1 auStack_250 [8];

  unsigned_long_long local_248;

  undefined1 auStack_240 [8];

  double local_238;

  double local_230;

  undefined4 local_224;

  double local_220;

  undefined8 local_218;

  byte local_209;

  undefined8 local_208;

  undefined8 local_200;

  undefined1 auStack_1f8 [8];

  long local_1f0;

  long *local_1e8;

  undefined8 local_1b8;

  byte local_1ad;

  byte local_1ac;

  byte local_1ab;

  byte local_1aa;

  byte local_1a9;

  long local_1a8;

  byte local_199;

  long local_198;

  undefined8 local_190;

  undefined4 local_188;

  byte local_181;

  undefined8 local_180;

  byte local_171;

  undefined8 local_170;

  unsigned_long_long local_168;

  long local_160;

  undefined8 local_158;

  SEL local_150;

  ID local_148;

  cfstringStruct *local_140;

  cfstringStruct *local_138;

  undefined8 local_130;

  undefined8 local_128;

  cfstringStruct *local_120;

  cfstringStruct *local_118;

  undefined8 local_110;

  undefined8 local_108;

  undefined1 auStack_100 [128];

  cfstringStruct *local_80;

  cfstringStruct *local_78;

  cfstringStruct *local_70;

  cfstringStruct *local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  cfstringStruct *local_38;

  long local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_158 = 0;

  local_150 = param_2;

  local_148 = param_1;

  _objc_storeStrong(&local_158,param_3);

  local_160 = 0;

  _objc_storeStrong(&local_160,param_4);

  local_168 = param_5;

  _objc_msgSend_permissionRequests(local_148,local_2a0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar5,local_2a0,local_158);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  local_171 = 0;

  local_181 = 0;

  local_284 = 1;

  if (lVar6 == local_160) {

    _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_account);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    local_171 = 1;

    local_170 = uVar7;

    _objc_msgSend_account(local_148,local_2a0);

    local_180 = _objc_retainAutoreleasedReturnValue();

    local_181 = 1;

    local_284 = _objc_msgSend_isEqual_(uVar7,local_2a0);

    local_284 = local_284 ^ 1;

  }

  if ((local_181 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_180);

  }

  if ((local_171 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_170);

  }

  (*(code *)PTR__objc_release_00110458)(lVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  if ((local_284 & 1) != 0) {

    local_188 = 1;

    goto LAB_00045d48;

  }

  _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_controller);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_contact);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  local_199 = 0;

  local_2e0 = lVar6;

  if (lVar6 == 0) {

    _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_2a0);

    local_198 = _objc_retainAutoreleasedReturnValue();

    local_2e0 = local_198;

  }

  local_30 = local_2e0;

  local_199 = lVar6 == 0;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2a0,&local_30,1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar5,&cf_getIsWCBlackSwitchOn_);

  local_190 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar7);

  if ((local_199 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_198);

  }

  (*(code *)PTR__objc_release_00110458)(lVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar5 = local_190;

  uVar7 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

  uVar8 = _objc_opt_isKindOfClass(uVar5,uVar7);

  if ((uVar8 & 1) == 0) {

    _objc_msgSend_facade(local_148,local_2a0);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    local_1a9 = 0;

    local_300 = lVar6;

    if (lVar6 == 0) {

      _Service(&cf_WCFacade);

      local_1a8 = _objc_retainAutoreleasedReturnValue();

      local_300 = local_1a8;

    }

    local_40 = local_158;

    local_38 = &cf_5;

    local_1a9 = lVar6 == 0;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2a0,&local_40,2);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _Call(local_300,&cf_isUserInGroup_GroupID_);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar5 = local_190;

    local_190 = uVar9;

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    if ((local_1a9 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_1a8);

    }

    (*(code *)PTR__objc_release_00110458)(lVar6);

  }

  uVar5 = local_190;

  uVar7 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

  local_1aa = _objc_opt_isKindOfClass(uVar5,uVar7);

  local_1aa = local_1aa & 1;

  local_1ab = _objc_msgSend_boolValue(local_190,local_2a0);

  _objc_msgSend_objectForKeyedSubscript_(local_160,local_2a0,&cf_hidden);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  bVar3 = _objc_msgSend_boolValue(uVar5,local_2a0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  local_80 = &cf_attempt;

  local_1ac = bVar3;

  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_2a0,local_168);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_78 = &cf_known;

  local_60 = uVar5;

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1aa & 1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  local_70 = &cf_actual;

  local_58 = uVar7;

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ab & 1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_68 = &cf_desired;

  local_50 = uVar9;

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ac & 1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar10;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_2a0,&local_60,&local_80,4);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  _Trace(&cf_privacy_native_verify);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  if ((local_1aa & 1) == 0) {

LAB_00045a34:

    if (local_168 < 6) {

      local_224 = 4;

      local_230 = (double)(ulong)(1L << (local_168 & 0x3f)) * 0.25;

      local_498 = local_230;

      if (4.0 < local_230) {

        local_498 = 4.0;

      }

      local_238 = local_498;

      local_220 = local_498;

      _objc_initWeak(auStack_240,local_148);

      dVar12 = _dispatch_time(0,(long)(local_220 * 1000000000.0));

      puVar1 = PTR___dispatch_main_q_00110528;

      _objc_retainAutoreleaseReturnValue();

      uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);

      local_280 = PTR___NSConcreteStackBlock_001104f0;

      local_278 = 0xc2000000;

      local_274 = 0;

      local_270 = ___54__WCMFeedController_verifyHiddenUser_request_attempt___block_invoke;

      local_268 = &___block_descriptor_64_e8_32s40s48w_e5_v8__0l;

      _objc_copyWeak(auStack_250,auStack_240);

      local_260 = (*(code *)PTR__objc_retain_00110460)(local_158);

      local_258 = (*(code *)PTR__objc_retain_00110460)(local_160);

      local_248 = local_168;

      _dispatch_after(dVar12,uVar5,&local_280);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_storeStrong(&local_258);

      _objc_storeStrong(&local_260,0);

      _objc_destroyWeak(auStack_250);

      _objc_destroyWeak(auStack_240);

      local_188 = 0;

    }

    else {

      _objc_msgSend_permissionRequests(local_168 - 6,local_148,local_2a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_removeObjectForKey_(uVar5,local_2a0,local_158);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      local_140 = &cf_hidden;

      _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ac & 1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_138 = &cf_queryAvailable;

      local_130 = uVar5;

      _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1aa & 1);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      local_128 = uVar7;

      _objc_msgSend_dictionaryWithObjects_forKeys_count_

                (&_OBJC_CLASS___NSDictionary,local_2a0,&local_130,&local_140,2);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _Trace(&cf_privacy_hide_unconfirmed);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_msgSend_status_(local_148,local_2a0,&cf__O_gnxgSWCgPfezT);

      local_188 = 1;

    }

  }

  else {

    _objc_msgSend_hiddenUsers(local_148,local_2a0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_msgSend_containsObject_(uVar5,local_2a0,local_158);

    bVar2 = uVar4 != (local_1ab & 1);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_1ad = bVar2;

    if ((local_1ab & 1) == 0) {

      _objc_msgSend_hiddenUsers(local_148,local_2a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_removeObject_(uVar5,local_2a0,local_158);

      (*(code *)PTR__objc_release_00110458)(uVar5);

    }

    else {

      _objc_msgSend_hiddenUsers(local_148,local_2a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_addObject_(uVar5,local_2a0,local_158);

      (*(code *)PTR__objc_release_00110458)(uVar5);

    }

    _memset(auStack_1f8,0,0x40);

    _objc_msgSend_cachedRows(local_148,local_2a0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_allKeys(uVar5,local_2a0);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_3b0 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar7,local_2a0,auStack_1f8,auStack_100,0x10);

    if (local_3b0 != 0) {

      lVar6 = *local_1e8;

      local_3b8 = 0;

      do {

        do {

          if (*local_1e8 - lVar6 != 0) {

            _objc_enumerationMutation(*local_1e8 - lVar6,uVar7);

          }

          local_1b8 = *(undefined8 *)(local_1f0 + local_3b8 * 8);

          _objc_msgSend_cachedRows(local_148,local_2a0);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_objectForKeyedSubscript_(uVar5,local_2a0,local_1b8);

          local_200 = _objc_retainAutoreleasedReturnValue();

          (*(code *)PTR__objc_release_00110458)(uVar5);

          _objc_msgSend_objectForKeyedSubscript_(local_200,local_2a0,&cf_username);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          uVar8 = _objc_msgSend_isEqual_(uVar5,local_2a0,local_158);

          local_209 = 0;

          bVar2 = false;

          if ((uVar8 & 1) != 0) {

            _objc_msgSend_objectForKeyedSubscript_(local_200,local_2a0,&cf_hidden);

            local_208 = _objc_retainAutoreleasedReturnValue();

            local_209 = 1;

            uVar4 = _objc_msgSend_boolValue(local_208,local_2a0);

            bVar2 = uVar4 != (local_1ab & 1);

          }

          if ((local_209 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_208);

          }

          (*(code *)PTR__objc_release_00110458)(uVar5);

          if (bVar2) {

            local_218 = _objc_msgSend_mutableCopy(local_200,local_2a0);

            _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ab & 1);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_setObject_forKeyedSubscript_(local_218,local_2a0,uVar5,&cf_hidden);

            (*(code *)PTR__objc_release_00110458)(uVar5);

            uVar5 = local_218;

            _objc_msgSend_cachedRows(local_148,local_2a0);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_setObject_forKeyedSubscript_(uVar9,local_2a0,uVar5,local_1b8);

            (*(code *)PTR__objc_release_00110458)(uVar9);

            local_1ad = 1;

            _objc_storeStrong(&local_218,0);

          }

          _objc_storeStrong(&local_200,0);

          local_3b8 = local_3b8 + 1;

        } while (local_3b8 < local_3b0);

        local_3b0 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar7,local_2a0,auStack_1f8,auStack_100,0x10);

        local_3b8 = 0;

      } while (local_3b0 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar7);

    if ((local_1ad & 1) != 0) {

      _objc_msgSend_reloadFeed(local_148,local_2a0);

    }

    if ((local_1ab & 1) != (local_1ac & 1)) goto LAB_00045a34;

    _objc_msgSend_permissionRequests(0,local_148,local_2a0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeObjectForKey_(uVar5,local_2a0,local_158);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_120 = &cf_hidden;

    _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_2a0,local_1ab & 1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_118 = &cf_attempt;

    local_110 = uVar5;

    _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_2a0,local_168);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    local_108 = uVar7;

    _objc_msgSend_dictionaryWithObjects_forKeys_count_

              (&_OBJC_CLASS___NSDictionary,local_2a0,&local_110,&local_120,2);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    _Trace(&cf_privacy_hide_confirmed);

    (*(code *)PTR__objc_release_00110458)(uVar9);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_188 = 1;

  }

  _objc_storeStrong(&local_190,0);

LAB_00045d48:

  _objc_storeStrong(&local_160);

  _objc_storeStrong(&local_158,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d2] account @0x592b8 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] permissionGeneration @0x59820 ----
// CALLERS: setUser:hidden:, setPermissionGeneration:, _objc_msgSend$permissionGeneration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::permissionGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_permissionGeneration);

}






// ---- [d2] setPermissionGeneration: @0x59844 ----
// CALLERS: setUser:hidden:, _objc_msgSend$setPermissionGeneration:
// CALLEES: permissionGeneration


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPermissionGeneration_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_permissionGeneration) = param_3;

  return;

}






// ---- [d2] permissionRequests @0x59920 ----
// CALLERS: syncHiddenUsers, verifyHiddenUser:request:attempt:, setUser:hidden:, setPermissionRequests:, .cxx_destruct, _objc_msgSend$permissionRequests
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::permissionRequests(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_permissionRequests);

}






// ---- [d2] setPermissionRequests: @0x59944 ----
// CALLERS: start, setUser:hidden:, _objc_msgSend$setPermissionRequests:
// CALLEES: permissionRequests


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPermissionRequests_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_permissionRequests,param_3);

  return;

}






// ---- [d3] _Context @0xb06c ----
// CALLERS: viewDidLoad, _Service, viewDidLoad, reloadComments, ___31-[WCMVideoComments_sendComment]_block_invoke, viewDidLoad, start, ___26-[WCMFeedController_start]_block_invoke_2
// CALLEES: (叶)


void _Context(void)



{

  undefined8 uVar1;

  

  uVar1 = _NSClassFromString(&cf_MMContext);

  _Call(uVar1,&cf_activeUserContext,PTR____NSArray0__struct_00110718);

  return;

}






// ---- [d3] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d3] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}






// ---- [d3] facade @0xea18 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] facade @0x1588c ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] facade @0x2b824 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] hiddenUsers @0x597c0 ----
// CALLERS: syncHiddenUsers, verifyHiddenUser:request:attempt:, setHiddenUsers:, .cxx_destruct, _objc_msgSend$hiddenUsers
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::hiddenUsers(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_hiddenUsers);

}






// ---- [d3] cachedRows @0x5ab3c ----
// CALLERS: traceState:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, toggleFollowing:, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, syncHiddenUsers, verifyHiddenUser:request:attempt:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::cachedRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cachedRows);

}






// ---- [d3] isEqual: @0x9cba0 ----
// CALLERS: isMine:, changeCategory, reloadComments, prepareVideoPaths:index:offset:, updateVideoFollowing, _WCMCacheAssets, pollNativeTimeline, toggleFollowing:
// CALLEES: isEqual:


/* Function Stack Size: 0x18 bytes */



bool _YYImageWeakProxy::isEqual_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);

  bVar1 = _objc_msgSend_isEqual_(uVar2,local_50,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return bVar1;

}






// ---- [d3] isEqual: @0xae354 ----
// CALLERS: isMine:, changeCategory, reloadComments, prepareVideoPaths:index:offset:, updateVideoFollowing, _WCMCacheAssets, pollNativeTimeline, toggleFollowing:
// CALLEES: ___CGSizeEqualToSize, size, title


/* Function Stack Size: 0x18 bytes */



bool WCMTOCropViewControllerAspectRatioPreset::isEqual_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  ID IVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 in_d1;

  undefined8 local_98;

  byte local_8c;

  undefined8 local_78;

  undefined8 local_68;

  undefined8 local_40;

  undefined4 local_34;

  ID local_30;

  SEL local_28;

  ID local_20;

  byte local_11;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  IVar2 = local_30;

  if (local_20 == local_30) {

    local_11 = 1;

    local_34 = 1;

  }

  else {

    uVar3 = _objc_opt_class(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

    uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);

    if ((uVar4 & 1) == 0) {

      local_11 = 0;

      local_34 = 1;

    }

    else {

      local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);

      uVar5 = _objc_msgSend_size(local_20,local_98);

      uVar3 = in_d1;

      uVar6 = _objc_msgSend_size(local_40,local_98);

      uVar4 = ___CGSizeEqualToSize(uVar5,in_d1,uVar6,uVar3);

      local_8c = 0;

      bVar1 = (uVar4 & 1) != 0;

      if (bVar1) {

        _objc_msgSend_title(local_20,local_98);

        local_68 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_title(local_40,local_98);

        local_78 = _objc_retainAutoreleasedReturnValue();

        local_8c = _objc_msgSend_isEqualToString_(local_68,local_98);

      }

      local_11 = local_8c & 1;

      if (bVar1) {

        (*(code *)PTR__objc_release_00110458)(local_78);

        (*(code *)PTR__objc_release_00110458)(local_68);

      }

      local_34 = 1;

      _objc_storeStrong(&local_40,0);

    }

  }

  _objc_storeStrong(&local_30,0);

  return local_11 & 1;

}






// ---- [d4] ___CGSizeEqualToSize @0x1b4d0 ----
// CALLERS: viewDidLayoutSubviews, viewWillAppear:, viewWillTransitionToSize:withTransitionCoordinator:, isEqual:
// CALLEES: (叶)


bool ___CGSizeEqualToSize(double param_1,double param_2,double param_3,double param_4)



{

  return param_1 == param_3 && param_2 == param_4;

}






// ---- [d4] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d4] title @0xaf10c ----
// CALLERS: viewDidLayoutSubviews, showAspectRatioDialog, setTitle:, titleLabel, isEqual:, hash, _objc_msgSend$title
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::title(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}





