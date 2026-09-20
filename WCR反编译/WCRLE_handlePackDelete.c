// WCRLE_handlePackDelete @ 0043c8d4

/* Function Stack Size: 0x10 bytes */

void WCRLEPanelSheetProxy::WCRLE_handlePackDelete(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *local_80;
  byte local_3d;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingPackRel_026a3a88);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingPackDeleteKeepItems_026a3aa0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPackRel__026a3a90,0);
  local_3d = 0;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (IVar2 != 0) {
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,local_28);
    if (((ulong)puVar3 & 1) == 0) {
      if ((IVar1 & 1) == 0) {
        puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
                   local_28,0);
        local_3d = (byte)puVar3;
      }
      else {
        puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,
                   PTR_s_dissolvePackKeepingItems_error__026a3ab8,local_28,0);
        local_3d = (byte)puVar3;
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_setSelectedFilterPackRel__026a3ac0,_WCRLocalEmoticonUngroupedId);
        }
      }
    }
    else {
      puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteUngroupedItems__026a3ab0,0);
      local_3d = (byte)puVar3;
    }
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_header_026a3a80);
  _objc_retainAutoreleasedReturnValue();
  FUN_0043c2a4();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_3d & 1) == 0) {
    local_80 = &cf_Rd1Y_;
  }
  else {
    local_80 = &cf__RdR_;
    if ((IVar1 & 1) == 0) {
      local_80 = &cf__Rd;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_80);
  _objc_storeStrong(&local_28,0);
  return;
}

