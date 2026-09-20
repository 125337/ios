// isColor:similarTo: @ 0190bc4c

/* Function Stack Size: 0x20 bytes */

bool WCRefineColorPickerController::isColor_similarTo_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool local_7c;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_getRed_green_blue_alpha__026ca660,&local_38,&local_40,&local_48,
             &local_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_getRed_green_blue_alpha__026ca660,&local_58,&local_60,&local_68,
             &local_70);
  local_7c = 0;
  if (((ABS(local_38 - local_58) < DAT_02323c88) &&
      (local_7c = 0, ABS(local_40 - local_60) < DAT_02323c88)) &&
     (local_7c = 0, ABS(local_48 - local_68) < DAT_02323c88)) {
    local_7c = (bool)(ABS(local_50 - local_70) < DAT_02323c88);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_7c;
}

