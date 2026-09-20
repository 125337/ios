// snappedFloatingMetricValueForTag:rawValue:final: @ 019be8f4

/* Function Stack Size: 0x24 bytes */

double WCRefineFloatingTabBarSettingsViewController::
       snappedFloatingMetricValueForTag_rawValue_final_
                 (ID param_1,SEL param_2,long_long param_3,double param_4,bool param_5)

{
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_18;
  
  if (param_3 == 1) {
    local_1f8 = param_4;
    if (param_4 <= -50.0) {
      local_1f8 = -50.0;
    }
    if (local_1f8 <= 50.0) {
      local_200 = local_1f8;
    }
    else {
      local_200 = 50.0;
    }
    local_18 = (double)(float)(int)local_200;
  }
  else if (param_3 == 2) {
    local_208 = param_4;
    if (param_4 <= -100.0) {
      local_208 = -100.0;
    }
    if (local_208 <= 100.0) {
      local_210 = local_208;
    }
    else {
      local_210 = 100.0;
    }
    local_18 = (double)(float)(int)local_210;
  }
  else if (param_3 == 3) {
    local_218 = param_4;
    if (param_4 <= -16.0) {
      local_218 = -16.0;
    }
    if (local_218 <= 16.0) {
      local_220 = local_218;
    }
    else {
      local_220 = 16.0;
    }
    local_18 = (double)(float)(int)local_220;
  }
  else if (param_3 == 4) {
    local_258 = param_4;
    if (param_4 <= 0.0) {
      local_258 = 0.0;
    }
    if (local_258 <= 4.0) {
      local_260 = local_258;
    }
    else {
      local_260 = 4.0;
    }
    local_18 = (double)((float)(int)(local_260 * 10.0) / 10.0);
  }
  else if (param_3 == 5) {
    local_268 = param_4;
    if (param_4 <= 0.0) {
      local_268 = 0.0;
    }
    if (local_268 <= 50.0) {
      local_270 = local_268;
    }
    else {
      local_270 = 50.0;
    }
    local_18 = (double)(float)(int)local_270;
  }
  else if (param_3 - 6 < 2) {
    local_278 = param_4;
    if (param_4 <= 0.0) {
      local_278 = 0.0;
    }
    if (local_278 <= 100.0) {
      local_280 = local_278;
    }
    else {
      local_280 = 100.0;
    }
    local_18 = (double)(float)(int)local_280;
  }
  else if (param_3 == 8) {
    local_228 = param_4;
    if (param_4 <= -120.0) {
      local_228 = -120.0;
    }
    if (local_228 <= 120.0) {
      local_230 = local_228;
    }
    else {
      local_230 = 120.0;
    }
    local_18 = (double)(float)(int)local_230;
  }
  else if (param_3 == 9) {
    local_238 = param_4;
    if (param_4 <= -30.0) {
      local_238 = -30.0;
    }
    if (local_238 <= 30.0) {
      local_240 = local_238;
    }
    else {
      local_240 = 30.0;
    }
    local_18 = (double)(float)(int)local_240;
  }
  else {
    local_18 = param_4;
    if (param_3 == 10) {
      local_248 = param_4;
      if (param_4 <= -20.0) {
        local_248 = -20.0;
      }
      if (local_248 <= 20.0) {
        local_250 = local_248;
      }
      else {
        local_250 = 20.0;
      }
      local_18 = (double)(float)(int)local_250;
    }
  }
  return local_18;
}

