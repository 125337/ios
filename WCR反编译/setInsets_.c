// setInsets: @ 01875f44

/* Function Stack Size: 0x30 bytes */

void WCRBubbleCutGuideView::setInsets_(ID param_1,SEL param_2,UIEdgeInsets param_3)

{
  undefined8 *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  puVar1 = (undefined8 *)(param_1 + (long)_insets);
  puVar1[1] = in_d1;
  *puVar1 = in_d0;
  puVar1[3] = in_d3;
  puVar1[2] = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setNeedsLayout_0269deb8,param_3.field0_0x0,param_3.field1_0x8,
             param_3.field2_0x10,param_3.field3_0x18,in_x6,in_x7,param_2);
  return;
}

