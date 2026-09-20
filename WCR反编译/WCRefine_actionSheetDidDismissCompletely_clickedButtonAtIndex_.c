// WCRefine_actionSheetDidDismissCompletely:clickedButtonAtIndex: @ 01b7515c

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonLibraryViewController::
     WCRefine_actionSheetDidDismissCompletely_clickedButtonAtIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID local_60;
  undefined4 local_54;
  long local_38;
  long_long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  lVar1 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_tag);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_38 == 0x24f75f) && (local_30 == 2)) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingPreviewItem_026bfb58);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPreviewItem__026bfa40,0);
    if (local_60 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewItem__026bf9c8,local_60);
    }
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  else {
    local_54 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

