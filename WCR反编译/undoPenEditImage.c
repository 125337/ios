// undoPenEditImage @ 016680a8

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::undoPenEditImage(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  undefined4 local_38;
  byte local_31;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastTextAnnotationOverlay_026b20b0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokeLayers_026b2088);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_31 = 0;
  if ((local_28 == 0) || (local_30 == 0)) {
    if ((local_28 != 0) && (local_30 == 0)) {
      local_31 = 1;
    }
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = IVar1 == local_28;
    (*(code *)PTR__objc_release_02578630)();
  }
  if (((local_31 & 1) == 0) || (local_28 == 0)) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokeLayers_026b2088);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_40 == 0) {
      if (local_28 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSdVvhl);
        local_38 = 1;
      }
      else {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_28;
        (*(code *)PTR__objc_release_02578630)();
        if (IVar2 == IVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingOverlays_026b1e00);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenUndoEnabled_026b21a8);
        local_38 = 1;
      }
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedStrokeLayer_026b2080);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_40;
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 == IVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectStrokeLayer__026b20c0,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeBadgeForStroke__026b2308,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeFromSuperlayer_026ca7f8);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_strokeLayers_026b2088);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildSpotlightLayer_026b1e70);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenUndoEnabled_026b21a8);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == IVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingOverlays_026b1e00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenUndoEnabled_026b21a8);
    local_38 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

