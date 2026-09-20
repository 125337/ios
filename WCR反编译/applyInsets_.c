// applyInsets: @ 018790cc

/* Function Stack Size: 0x30 bytes */

void WCRBubbleCutPreviewHeaderView::applyInsets_(ID param_1,SEL param_2,UIEdgeInsets param_3)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,in_d2,in_d3,param_1,PTR_s_setCurrentInsets__026b6d80,param_3.field0_0x0,
             param_3.field1_0x8,param_3.field2_0x10,param_3.field3_0x18);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_guideView_026b6dc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshStretchPreviews_026b6d88);
  return;
}

