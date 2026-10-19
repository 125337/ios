// scrollViewDidEndDragging:willDecelerate: @0x27f70

/* Function Stack Size: 0x1c bytes */

void WCMVideoController::scrollViewDidEndDragging_willDecelerate_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((param_4 & 1) == 0) {
    _objc_msgSend_settleVideo(local_18,local_38);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

