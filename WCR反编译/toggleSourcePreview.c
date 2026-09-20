// toggleSourcePreview @ 0196206c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::toggleSourcePreview(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
  if (IVar1 == 7) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toggleHTMLSource_026b9ef8);
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
    if (IVar1 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toggleSVGSource_026b9f00);
    }
  }
  return;
}

