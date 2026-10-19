// _WCMYYUIImageOrientationFromEXIFValue @0x91d74

undefined8 _WCMYYUIImageOrientationFromEXIFValue(long param_1)

{
  undefined8 local_8;
  
  if (param_1 == 1) {
    local_8 = 0;
  }
  else if (param_1 == 2) {
    local_8 = 4;
  }
  else if (param_1 == 3) {
    local_8 = 1;
  }
  else if (param_1 == 4) {
    local_8 = 5;
  }
  else if (param_1 == 5) {
    local_8 = 6;
  }
  else if (param_1 == 6) {
    local_8 = 3;
  }
  else if (param_1 == 7) {
    local_8 = 7;
  }
  else if (param_1 == 8) {
    local_8 = 2;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

