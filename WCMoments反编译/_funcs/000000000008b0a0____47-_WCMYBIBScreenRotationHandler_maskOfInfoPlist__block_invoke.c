// ___47-[WCMYBIBScreenRotationHandler_maskOfInfoPlist]_block_invoke @0x8b0a0

void ___47__WCMYBIBScreenRotationHandler_maskOfInfoPlist__block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_pathForResource_ofType_(uVar1,local_48,&cf_Info,&cf_plist);
  local_28 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_dictionaryWithContentsOfFile_(&_OBJC_CLASS___NSMutableDictionary,local_48,local_28);
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(local_30,local_48,&cf_UISupportedInterfaceOrientations);
  local_38 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setWithArray_(&_OBJC_CLASS___NSSet,local_48,local_38);
  local_40 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_containsObject_(local_40,local_48,&cf_UIInterfaceOrientationPortrait);
  if ((uVar2 & 1) != 0) {
    _maskOfInfoPlist_mask = _maskOfInfoPlist_mask | 2;
  }
  uVar2 = _objc_msgSend_containsObject_(local_40,local_48,&cf_UIInterfaceOrientationLandscapeRight);
  if ((uVar2 & 1) != 0) {
    _maskOfInfoPlist_mask = _maskOfInfoPlist_mask | 8;
  }
  uVar2 = _objc_msgSend_containsObject_(local_40,local_48,&cf_UIInterfaceOrientationLandscapeLeft);
  if ((uVar2 & 1) != 0) {
    _maskOfInfoPlist_mask = _maskOfInfoPlist_mask | 0x10;
  }
  uVar2 = _objc_msgSend_containsObject_
                    (local_40,local_48,&cf_UIInterfaceOrientationPortraitUpsideDown);
  if ((uVar2 & 1) != 0) {
    _maskOfInfoPlist_mask = _maskOfInfoPlist_mask | 4;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

