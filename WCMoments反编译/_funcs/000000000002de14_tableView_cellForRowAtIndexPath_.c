// tableView:cellForRowAtIndexPath: @0x2de14

/* Function Stack Size: 0x20 bytes */

ID WCMCacheController::tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 local_58;
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
  uVar1 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);
  local_48 = _objc_msgSend_initWithStyle_reuseIdentifier_(uVar1,local_58,1,0);
  lVar2 = _objc_msgSend_row(local_40,local_58);
  if (lVar2 == 0) {
    _objc_msgSend_textLabel(local_48,local_58);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar1,local_58,&cf_cNVGr_X_);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar1 = _objc_msgSend_bytes(local_28,local_58);
    _objc_msgSend_stringFromByteCount_countStyle_
              (&_OBJC_CLASS___NSByteCountFormatter,local_58,uVar1,0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_detailTextLabel(local_48,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar3,local_58,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else {
    lVar2 = _objc_msgSend_row(local_40,local_58);
    if (lVar2 + -1 == 0) {
      _objc_msgSend_textLabel(local_48,local_58);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setText_(uVar1,local_58,&cf__X_NP);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_58);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_root(local_28,local_58);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_lastPathComponent(uVar3,local_58);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_stringByAppendingString_(&cf_WCMomentsCacheLimit_,local_58);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_integerForKey_(uVar1,local_58);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_58,&cf__ldMB);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_detailTextLabel(local_48,local_58);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setText_(uVar3,local_58,uVar1);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      _objc_msgSend_setAccessoryType_(local_48,local_58,1);
    }
    else {
      lVar2 = _objc_msgSend_row(lVar2 + -1,local_40,local_58);
      if (lVar2 + -3 == 0) {
        _objc_msgSend_textLabel(0,local_48,local_58);
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setText_(uVar1,local_58,&cf___);
        (*(code *)PTR__objc_release_00110458)(uVar1);
        _objc_msgSend_setAccessoryType_(local_48,local_58,1);
      }
      else {
        _objc_msgSend_textLabel(lVar2 + -3,local_48,local_58);
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setText_(uVar1,local_58,&cf_ntcNVGr_X_);
        (*(code *)PTR__objc_release_00110458)(uVar1);
        _objc_msgSend_systemRedColor(&_OBJC_CLASS___UIColor,local_58);
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_textLabel(local_48,local_58);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setTextColor_(uVar3,local_58,uVar1);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        (*(code *)PTR__objc_release_00110458)(uVar1);
      }
    }
  }
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  IVar6 = _objc_autoreleaseReturnValue(uVar1);
  return IVar6;
}

