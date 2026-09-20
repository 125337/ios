// blendModeFromValue: @ 01fa3318

/* Function Stack Size: 0x18 bytes */

int WCRefineWatermarkEditorViewController::blendModeFromValue_
              (ID param_1,SEL param_2,long_long param_3)

{
  undefined4 local_4;
  
  if (param_3 == 0) {
    local_4 = 3;
  }
  else if (param_3 == 1) {
    local_4 = 0;
  }
  else if (param_3 == 2) {
    local_4 = 8;
  }
  else if (param_3 == 3) {
    local_4 = 9;
  }
  else if (param_3 == 4) {
    local_4 = 2;
  }
  else if (param_3 == 5) {
    local_4 = 10;
  }
  else if (param_3 == 6) {
    local_4 = 1;
  }
  else if (param_3 == 7) {
    local_4 = 6;
  }
  else if (param_3 == 8) {
    local_4 = 7;
  }
  else {
    local_4 = 3;
  }
  return local_4;
}

