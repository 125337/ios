// snappedHASMetricValueForTag:rawValue: @ 01ae61d8

/* Function Stack Size: 0x20 bytes */

double WCRefineHomeAvatarStripSettingsViewController::snappedHASMetricValueForTag_rawValue_
                 (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_18;
  
  if (param_3 == 0x835) {
    local_138 = param_4;
    if (param_4 <= 28.0) {
      local_138 = 28.0;
    }
    if (local_138 <= 88.0) {
      local_140 = local_138;
    }
    else {
      local_140 = 88.0;
    }
    local_18 = (double)(float)(int)local_140;
  }
  else if (param_3 - 0x836 < 3) {
    local_148 = param_4;
    if (param_4 <= 0.0) {
      local_148 = 0.0;
    }
    if (local_148 <= 40.0) {
      local_150 = local_148;
    }
    else {
      local_150 = 40.0;
    }
    local_18 = (double)(float)(int)local_150;
  }
  else if (param_3 == 0x839) {
    if (25.0 <= param_4) {
      local_158 = param_4;
      if (param_4 <= 50.0) {
        local_158 = 50.0;
      }
      if (local_158 <= 888.0) {
        local_160 = local_158;
      }
      else {
        local_160 = 888.0;
      }
      local_18 = (double)(float)(int)local_160;
    }
    else {
      local_18 = 0.0;
    }
  }
  else if (param_3 == 0x83a) {
    if (25.0 <= param_4) {
      local_168 = param_4;
      if (param_4 <= 80.0) {
        local_168 = 80.0;
      }
      if (local_168 <= 600.0) {
        local_170 = local_168;
      }
      else {
        local_170 = 600.0;
      }
      local_18 = (double)(float)(int)local_170;
    }
    else {
      local_18 = 0.0;
    }
  }
  else if ((param_3 - 0x898 < 3) || (param_3 - 0x8a2 < 3)) {
    local_178 = param_4;
    if (param_4 <= -80.0) {
      local_178 = -80.0;
    }
    if (local_178 <= 80.0) {
      local_180 = local_178;
    }
    else {
      local_180 = 80.0;
    }
    local_18 = (double)(float)(int)local_180;
  }
  else {
    local_18 = (double)(float)(int)param_4;
  }
  return local_18;
}

