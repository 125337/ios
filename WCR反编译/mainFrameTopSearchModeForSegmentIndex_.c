// mainFrameTopSearchModeForSegmentIndex: @ 01d80294

/* Function Stack Size: 0x18 bytes */

long_long WCRefineSearchSettingsViewController::mainFrameTopSearchModeForSegmentIndex_
                    (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_8;
  
  if (param_3 == 0) {
    local_8 = 1;
  }
  else if (param_3 == 1) {
    local_8 = 2;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

