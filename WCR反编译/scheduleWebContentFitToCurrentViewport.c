// scheduleWebContentFitToCurrentViewport @ 01e781d0

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::scheduleWebContentFitToCurrentViewport(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_fitWebContentToCurrentViewportIf_026c6ed0);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f00,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_fitWebContentToCurrentViewportIf_026c6ed0,0);
  return;
}

