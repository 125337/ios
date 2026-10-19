// scrollViewDidEndZooming:withView:atScale: @0xb5a88

/* Function Stack Size: 0x28 bytes */

void WCMTOCropView::scrollViewDidEndZooming_withView_atScale_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  undefined8 local_58;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_startResetTimer(local_18,local_58);
  _objc_msgSend_checkForCanReset(local_18,local_58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

