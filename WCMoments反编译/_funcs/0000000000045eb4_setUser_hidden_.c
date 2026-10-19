// setUser:hidden: @0x45eb4

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

