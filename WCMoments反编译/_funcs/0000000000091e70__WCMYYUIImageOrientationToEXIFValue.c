// _WCMYYUIImageOrientationToEXIFValue @0x91e70

undefined8 _WCMYYUIImageOrientationToEXIFValue(long param_1)

{
  undefined8 local_8;
  
  if (param_1 == 0) {
    local_8 = 1;
  }
  else if (param_1 == 1) {
    local_8 = 3;
  }
  else if (param_1 == 2) {
    local_8 = 8;
  }
  else if (param_1 == 3) {
    local_8 = 6;
  }
  else if (param_1 == 4) {
    local_8 = 2;
  }
  else if (param_1 == 5) {
    local_8 = 4;
  }
  else if (param_1 == 6) {
    local_8 = 5;
  }
  else if (param_1 == 7) {
    local_8 = 7;
  }
  else {
    local_8 = 1;
  }
  return local_8;
}

