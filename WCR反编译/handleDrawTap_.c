// handleDrawTap: @ 01655e50

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleDrawTap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateMode_026b1e08);
  if (((IVar1 & 1) != 0) &&
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
     lVar2 == 3)) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textInputOverlay_026b1e18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar2 = local_28;
    if (IVar1 == 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_drawCanvas_026b1bd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_locationInView__026ca798);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28);
      if (IVar1 == 9) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectStrokeLayer__026b20c0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingTextOverlay__026b2188,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,local_18,PTR_s_setPendingTextPoint__026b2190);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentAnnotateTextInput_026b2198);
      }
      else {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28);
        if (IVar1 == 10) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectStrokeLayer__026b20c0);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (in_d0,in_d1,local_18,PTR_s_placeSerialBadgeAtPoint__026b21a0);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenUndoEnabled_026b21a8);
        }
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

