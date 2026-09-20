// handleRemark: @ 01b73278

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::handleRemark_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_48 = 0;
  }
  else {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  lVar3 = *(long *)(local_18 + (long)_pendingRemarkRel);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_setRemark_forRelativePath__026bfb28,
               local_30,*(undefined8 *)(local_18 + (long)_pendingRemarkRel));
    _objc_storeStrong(local_18 + (long)_pendingRemarkRel,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__feYl);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

