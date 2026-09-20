// onPickAnnotateShapeTool: @ 016619dc

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onPickAnnotateShapeTool_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_applyAnnotateShapeTool__026b2320,lVar2 + -300);
  _objc_storeStrong(&local_28,0);
  return;
}

