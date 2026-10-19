// tableView:cellForRowAtIndexPath: @0x6408

/* Function Stack Size: 0x20 bytes */

ID WCMMomentsSettingsController::tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  ID IVar6;
  cfstringStruct *local_c8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);
  local_48 = _objc_msgSend_initWithStyle_reuseIdentifier_(uVar2,local_58,1,0);
  _objc_msgSend_setSelectionStyle_(local_48,local_58,0);
  lVar3 = _objc_msgSend_section(local_40,local_58);
  if (lVar3 == 0) {
    _objc_msgSend_textLabel(local_48,local_58);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar2,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_50 = _objc_opt_new(&_OBJC_CLASS___UISwitch);
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_58);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend_boolForKey_(uVar2,local_58,&cf_WCMomentsDisabled);
    _objc_msgSend_setOn_(local_50,local_58,uVar1 ^ 1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_colorWithRed_green_blue_alpha_
              (0x3fbeb851eb851eb8,0x3fe0000000000000,0x3fd47ae147ae147b,0x3ff0000000000000,
               &_OBJC_CLASS___UIColor,local_58);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setOnTintColor_(local_50,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setAccessibilityLabel_(local_50,local_58,&cf__T_uSRgSW);
    _objc_msgSend_addTarget_action_forControlEvents_
              (local_50,local_58,local_28,"enabledChanged:",0x1000);
    _objc_msgSend_setAccessoryView_(local_48,local_58,local_50);
    _objc_storeStrong(&local_50,0);
  }
  else {
    lVar3 = _objc_msgSend_row(local_40,local_58);
    if (lVar3 == 0) {
      _objc_msgSend_textLabel(local_48,local_58);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setText_(uVar2,local_58,&cf_Hr_g);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_detailTextLabel(local_48,local_58);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setText_(uVar2,local_58,&cf_0_6_49);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    else {
      lVar3 = _objc_msgSend_row(local_40,local_58);
      if (lVar3 + -1 == 0) {
        _objc_msgSend_textLabel(local_48,local_58);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setText_(uVar2,local_58,&cf__OHr_g);
        (*(code *)PTR__objc_release_00110458)(uVar2);
        _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle,local_58);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_objectForInfoDictionaryKey_(uVar2,local_58,&cf_CFBundleShortVersionString);
        pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
        local_c8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_c8 = &cf___;
        }
        _objc_msgSend_detailTextLabel(local_48,local_58);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setText_(uVar5,local_58,local_c8);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        (*(code *)PTR__objc_release_00110458)(pcVar4);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
      else {
        lVar3 = _objc_msgSend_row(lVar3 + -1,local_40,local_58);
        if (lVar3 + -2 == 0) {
          _objc_msgSend_textLabel(0,local_48,local_58);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setText_(uVar2,local_58,&cf__QR_e);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_msgSend_setAccessoryType_(local_48,local_58,1);
          _objc_msgSend_setSelectionStyle_(local_48,local_58,3);
        }
        else {
          _objc_msgSend_textLabel(lVar3 + -2,local_48,local_58);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setText_(uVar2,local_58,&cf_b_YSHrSsu);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_msgSend_systemRedColor(&_OBJC_CLASS___UIColor,local_58);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_textLabel(local_48,local_58);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setTextColor_(uVar5,local_58,uVar2);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_msgSend_setSelectionStyle_(local_48,local_58,3);
        }
      }
    }
  }
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  IVar6 = _objc_autoreleaseReturnValue(uVar2);
  return IVar6;
}

