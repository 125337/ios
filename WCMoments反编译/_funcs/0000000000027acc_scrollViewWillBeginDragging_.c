// scrollViewWillBeginDragging: @0x27acc

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::scrollViewWillBeginDragging_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_player(local_18,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_pause(uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_extendVideoQueue_(local_18,local_40,1);
  _objc_storeStrong(&local_28,0);
  return;
}

