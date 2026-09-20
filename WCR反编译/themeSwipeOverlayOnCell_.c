// themeSwipeOverlayOnCell: @ 01fbf2e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::themeSwipeOverlayOnCell_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_60;
  ID local_40;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar2;
    if (IVar2 == 0) {
      local_40 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x57435254);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    if (IVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

