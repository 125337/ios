// setBubbleImage: @ 01875e8c

/* Function Stack Size: 0x18 bytes */

void WCRBubbleCutGuideView::setBubbleImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bubbleView_026a8058);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_28,0);
  return;
}

