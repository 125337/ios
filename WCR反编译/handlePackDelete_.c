// handlePackDelete: @ 01b72c14

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::handlePackDelete_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *local_e0;
  uint local_ac;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  undefined4 local_34;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  lVar1 = *(long *)(local_18 + (long)_pendingDeleteRel);
  (*(code *)PTR__objc_retain_02578638)();
  local_30[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    local_40 = 0;
    local_41 = 0;
    local_42 = *(byte *)(local_18 + (long)_pendingDeletePackKeepItems) & 1;
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
               local_30[0]);
    if (((ulong)puVar2 & 1) == 0) {
      if ((local_42 & 1) == 0) {
        local_60 = local_40;
        puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
                   local_30[0],&local_60);
        _objc_storeStrong(&local_40,local_60);
        local_41 = (byte)puVar2;
      }
      else {
        local_58 = local_40;
        puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,
                   PTR_s_dissolvePackKeepingItems_error__026a3ab8,local_30[0],&local_58);
        _objc_storeStrong(&local_40,local_58);
        local_41 = (byte)puVar2;
      }
    }
    else {
      local_50 = local_40;
      puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteUngroupedItems__026a3ab0,
                 &local_50);
      _objc_storeStrong(&local_40,local_50);
      local_41 = (byte)puVar2;
    }
    if ((local_41 & 1) != 0) {
      if ((local_42 & 1) == 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterPackRel_026bf8f8);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_ac = 1;
        if ((IVar4 & 1) == 0) {
          puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
                     local_30[0]);
          local_ac = (uint)puVar2;
        }
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((local_ac & 1) != 0) {
          puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_selectedFilterPackRel_026a3dd0);
          _objc_retainAutoreleasedReturnValue();
          local_68 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterPackRel__026bf900,puVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_setSelectedFilterPackRel__026a3ac0,local_68);
          _objc_storeStrong(&local_68,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setFilterPackRel__026bf900,_WCRLocalEmoticonUngroupedId);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_setSelectedFilterPackRel__026a3ac0,
                   _WCRLocalEmoticonUngroupedId);
      }
    }
    _objc_storeStrong(local_18 + (long)_pendingDeleteRel,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
    if ((local_41 & 1) == 0) {
      local_e0 = &cf_Rd1Y_;
    }
    else {
      local_e0 = &cf__RdR_;
      if ((local_42 & 1) == 0) {
        local_e0 = &cf__Rd;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_e0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

