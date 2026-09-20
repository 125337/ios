// confirmDelete: @ 01b738b4

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::confirmDelete_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(local_18 + (long)_pendingDeleteRel);
  *(ulong *)(local_18 + (long)_pendingDeleteRel) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPack_026ae428);
  local_30 = &cf_nx_Rd_Nh_SSvQhQh_;
  if ((uVar1 & 1) == 0) {
    local_30 = &cf_nx_Rd_Nh_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = &cf_WCUIAlertView;
  _NSClassFromString();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
             PTR_s_handleDelete__026bfb30);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

