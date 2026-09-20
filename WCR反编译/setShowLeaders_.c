// setShowLeaders: @ 01d8f9f8

/* Function Stack Size: 0x14 bytes */

void WCRSSDonutView::setShowLeaders_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showLeaders) = (byte)param_3 & 1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_rebuild_026c4db8);
  return;
}

