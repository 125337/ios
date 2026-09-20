// pickerView:widthForComponent: @ 00577b94

/* Function Stack Size: 0x20 bytes */

double WCRMomentsScheduledDatePickerPanel::pickerView_widthForComponent_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_d8;
  double local_d0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
  local_d0 = in_d0;
  if (in_d0 < 1.0) {
    local_d0 = 1.0;
  }
  local_d8 = local_d0 - 36.0;
  if (local_d8 < 240.0) {
    local_d8 = 240.0;
  }
  _objc_storeStrong(&local_28,0);
  return local_d8 / 6.0;
}

