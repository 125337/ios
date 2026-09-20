// speedKmhForTransportType: @ 00f5b1b0

/* Function Stack Size: 0x18 bytes */

double WCRefineFakeLocationEngine::speedKmhForTransportType_
                 (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_8;
  
  if (param_3 == 1) {
    local_8 = 5.0;
  }
  else if (param_3 == 2) {
    local_8 = 15.0;
  }
  else if (param_3 == 3) {
    local_8 = 25.0;
  }
  else if (param_3 == 4) {
    local_8 = 40.0;
  }
  else if (param_3 == 5) {
    local_8 = 800.0;
  }
  else if (param_3 == 6) {
    local_8 = 60.0;
  }
  else {
    local_8 = 60.0;
  }
  return local_8;
}

