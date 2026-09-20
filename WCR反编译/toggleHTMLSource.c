// toggleHTMLSource @ 0196ef24

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::toggleHTMLSource(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sourceMode_026b9eb8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSourceMode__026ba190,(uint)IVar1 ^ 1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sourceMode_026b9eb8);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_renderHTMLPreview_026ba118);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_loadHighlightedSourceWithMode__026ba110,&cf_markup);
  }
  return;
}

