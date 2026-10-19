// cancelFeedback @0x9574

/* Function Stack Size: 0x10 bytes */

void WCMQQRefreshControl::cancelFeedback(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  lVar1 = _objc_msgSend_qqFeedbackGeneration();
  _objc_msgSend_setQqFeedbackGeneration_(param_1,local_38,lVar1 + 1);
  _objc_msgSend_setQqShowingFeedback_(param_1,local_38,0);
  _objc_msgSend_qqRingLayer(param_1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAnimationForKey_(uVar2,local_38,&cf_refresh);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_endRefreshing(param_1,local_38);
  _objc_msgSend_qqIndicatorView(param_1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_38,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

