// pickerView:numberOfRowsInComponent: @ 0057775c

/* Function Stack Size: 0x20 bytes */

long_long WCRMomentsScheduledDatePickerPanel::pickerView_numberOfRowsInComponent_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (param_4 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maxYear_026a52e0);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_minYear_026a52d8);
    local_18 = (IVar1 - IVar2) + 1;
  }
  else if (param_4 == 1) {
    local_18 = 0xc;
  }
  else if (param_4 == 2) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_daysInMonth_026a52e8);
    local_18 = IVar1;
  }
  else if (param_4 == 3) {
    local_18 = 0x18;
  }
  else if (param_4 == 4) {
    local_18 = 0x3c;
  }
  else if (param_4 == 5) {
    local_18 = 0x3c;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

