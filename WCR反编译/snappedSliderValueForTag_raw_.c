// snappedSliderValueForTag:raw: @ 01e1d154

/* Function Stack Size: 0x20 bytes */

double WCRefineSuperFloatSettingsViewController::snappedSliderValueForTag_raw_
                 (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined8 local_8;
  
  if (param_3 == 0x11945) {
    local_8 = (double)(long)(param_4 * 10.0) / 10.0;
  }
  else if (param_3 == 0x1194e) {
    local_8 = (double)(long)param_4;
  }
  else {
    local_8 = (double)(long)param_4;
  }
  return local_8;
}

