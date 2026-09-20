// stopCarousel @ 00ff2298

/* Function Stack Size: 0x10 bytes */

void WCRKeywordAlertDanmakuBubbleView::stopCarousel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_carouselTimer_026ad650);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCarouselTimer__026ad658,0);
  return;
}

