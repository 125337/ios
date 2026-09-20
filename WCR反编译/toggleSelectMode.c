// toggleSelectMode @ 019a4450

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::toggleSelectMode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectMode_026ba2a8);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_enterSelectMode_026ba320);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitSelectMode_026ba650);
  }
  return;
}

