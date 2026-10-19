// cropViewController:didFinishCancelled: @0x4fb28

/* Function Stack Size: 0x1c bytes */

void WCMFeedController::cropViewController_didFinishCancelled_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_setCropAccount_(local_18,local_48,0);
  _objc_msgSend_dismissViewControllerAnimated_completion_(local_28,local_48,1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

