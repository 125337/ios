// _DiagnosticEnvironment @0x5e2f8

void _DiagnosticEnvironment(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *local_120;
  cfstringStruct *local_108;
  undefined8 local_e8;
  cfstringStruct *local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  long local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_88 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  local_8c = 0;
  while( true ) {
    uVar2 = local_8c;
    uVar1 = __dyld_image_count();
    if (uVar1 <= uVar2) break;
    local_98 = __dyld_get_image_name(local_8c);
    if (local_98 != 0) {
      _objc_msgSend_stringWithUTF8String_(&_OBJC_CLASS___NSString,local_e8,local_98);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_lastPathComponent(uVar3,local_e8);
      local_a0 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_lowercaseString(local_a0,local_e8);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar2 = _objc_msgSend_containsString_(uVar3,local_e8,&cf_wcmoments);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if ((uVar2 & 1) != 0) {
        _objc_msgSend_addObject_(local_88,local_e8,local_a0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    local_8c = local_8c + 1;
  }
  _NSClassFromString(uVar2 - uVar1,&cf_WCMFeedController);
  lVar4 = _class_getImageName();
  local_78 = &cf_pluginVersion;
  local_50 = &cf_0_6_49;
  local_70 = &cf_weChatBuild;
  _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle,local_e8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForInfoDictionaryKey_(uVar3,local_e8,&cf_CFBundleVersion);
  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  local_108 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_108 = &cf_unknown;
  }
  local_48 = local_108;
  local_68 = &cf_system;
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_e8);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_operatingSystemVersionString(uVar6,local_e8);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_loadedPluginImages;
  local_38 = local_88;
  local_58 = &cf_controllerImage;
  local_40 = uVar7;
  if (lVar4 == 0) {
    local_120 = &cf_unknown;
  }
  else {
    _objc_msgSend_stringWithUTF8String_(&_OBJC_CLASS___NSString,local_e8,lVar4);
    local_b0 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_lastPathComponent(local_b0,local_e8);
    local_120 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
    local_c0 = local_120;
  }
  local_30 = local_120;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_e8,&local_50,&local_78,5);
  local_80 = _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (*(code *)PTR__objc_release_00110458)(local_c0);
    (*(code *)PTR__objc_release_00110458)(local_b0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(pcVar5);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_80);
  return;
}

