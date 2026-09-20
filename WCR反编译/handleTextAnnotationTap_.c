// handleTextAnnotationTap: @ 0165c6a0

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleTextAnnotationTap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (uVar1 == 3) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    FUN_0164f268();
    if ((uVar1 & 1) == 0) {
      local_2c = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textInputOverlay_026b1e18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,local_38);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setEditingTextOverlay__026b2188,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_center_026ca560);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,local_18,PTR_s_setPendingTextPoint__026b2190);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentAnnotateTextInput_026b2198);
        local_2c = 0;
      }
      else {
        local_2c = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

