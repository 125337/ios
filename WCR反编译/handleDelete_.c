// handleDelete: @ 01b73a68

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::handleDelete_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined4 local_34;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  lVar2 = *(long *)(local_18 + (long)_pendingDeleteRel);
  (*(code *)PTR__objc_retain_02578638)();
  local_30[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    local_40 = 0;
    local_50 = 0;
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
               local_30[0],&local_50);
    _objc_storeStrong(&local_40,local_50);
    local_41 = (byte)puVar3;
    _objc_storeStrong(local_18 + (long)_pendingDeleteRel);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
    pcVar1 = &cf__Rd;
    if ((local_41 & 1) == 0) {
      pcVar1 = &cf_Rd1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

