// selectCurrentFrame @ 01830848

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarFrameLibraryViewController::selectCurrentFrame(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_relativePathFromSelectedAbsolute_026b64f0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingSelectNight_026b64f8);
  local_29 = (byte)IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingSelectNight__026b6490,0);
  if (local_28 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar2 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) != 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionContextEnabled_026b6410);
  if ((IVar1 & 1) != 0) {
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setSelectionContextDayPath__026b6510,local_38);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setSelectionContextNightPath__026b6508,local_38);
    }
  }
  if (*(long *)(local_18 + (long)_collectionView) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_collectionView),PTR_s_reloadData_0269e400);
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_90 = &cf__Sm4YPFh;
  }
  else {
    local_90 = &cf__bY4YPFh;
    if ((local_29 & 1) == 0) {
      local_90 = &cf__be4YPFh;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showToast__026b3a18,local_90);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

