// confirmDeletePackItems: @ 01b72a74

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::confirmDeletePackItems_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined1 local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeStrong(local_18 + (long)_pendingDeleteRel,local_28);
  *(undefined1 *)(local_18 + (long)_pendingDeletePackKeepItems) = 0;
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,local_28);
  local_29 = SUB81(puVar1,0);
  local_38 = &cf_nx_Rd_gR_QvhQh_dkR_ONGrhm1Y0;
  if (((ulong)puVar1 & 1) == 0) {
    local_38 = &cf__RdR_SvQQhQh_elb_Y0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = &cf_WCUIAlertView;
  _NSClassFromString();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_RdhQh_,local_18,
             PTR_s_handlePackDelete__026bfb18);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

