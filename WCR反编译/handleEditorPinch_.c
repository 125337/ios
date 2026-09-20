// handleEditorPinch: @ 0196480c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFileManagerPreviewViewController::handleEditorPinch_
          (WCRefineFileManagerPreviewViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  double in_d0;
  double dVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editorFontSize_026b9da8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPinchStartFontSize__026b9fc8);
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if ((lVar2 == 2) ||
       (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
       lVar2 == 3)) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pinchStartFontSize_026b9fd0);
      dVar3 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scale_026ca830);
      (*(code *)PTR__objc_msgSend_02578628)(in_d0 * dVar3,IVar1,PTR_s_applyEditorFontSize__026b9e48)
      ;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

