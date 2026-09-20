// resolveGroupChatAnalysisRange:recentCount:recentSeconds: @ 009b9f98

/* Function Stack Size: 0x28 bytes */

void WCRefineAIStore::resolveGroupChatAnalysisRange_recentCount_recentSeconds_
               (ID param_1,SEL param_2,long_long param_3,unsigned_long_long *param_4,double *param_5
               )

{
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_clampedGroupChatAnalysisRange__026aad50,param_3);
  if (param_1 == 0) {
    local_40 = 0x32;
  }
  else if (param_1 == 1) {
    local_40 = 100;
  }
  else if (param_1 == 2) {
    local_40 = 500;
  }
  else if (param_1 == 3) {
    local_40 = 0;
    local_48 = 3600.0;
  }
  else if (param_1 == 4) {
    local_40 = 0;
    local_48 = 86400.0;
  }
  else if (param_1 == 5) {
    local_40 = 0;
    local_48 = 259200.0;
  }
  else if (param_1 == 6) {
    local_40 = 0;
    local_48 = 604800.0;
  }
  else if (param_1 == 7) {
    local_40 = 0;
    local_48 = 1296000.0;
  }
  else if (param_1 == 8) {
    local_40 = 0;
    local_48 = 2592000.0;
  }
  else {
    local_40 = 100;
  }
  if (param_4 != (unsigned_long_long *)0x0) {
    *param_4 = local_40;
  }
  if (param_5 != (double *)0x0) {
    *param_5 = local_48;
  }
  return;
}

