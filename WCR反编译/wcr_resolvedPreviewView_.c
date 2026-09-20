// wcr_resolvedPreviewView: @ 0034b744

/* Function Stack Size: 0x18 bytes */

ID WCRHomeAvatarStripContextMenuDelegate::wcr_resolvedPreviewView_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_60;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewAvatarView_026a22e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_viewWithTag__026cabe0,0x7f199);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar1;
    if (IVar1 == 0) {
      local_60 = local_40;
    }
    local_48 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewAvatarView_026a22e0);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

