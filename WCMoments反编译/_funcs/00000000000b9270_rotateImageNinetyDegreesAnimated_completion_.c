// rotateImageNinetyDegreesAnimated:completion: @0xb9270

/* Function Stack Size: 0x1c bytes */

void WCMTOCropView::rotateImageNinetyDegreesAnimated_completion_
               (ID param_1,SEL param_2,bool param_3,ID param_4,undefined4 param_5)

{
  undefined8 local_48;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4,param_3,param_4,param_5);
  _objc_msgSend_rotateImageNinetyDegreesAnimated_clockwise_completion_
            (local_18,local_48,local_21 & 1,0,local_30);
  _objc_storeStrong(&local_30,0);
  return;
}

