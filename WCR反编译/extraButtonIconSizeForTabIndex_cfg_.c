// extraButtonIconSizeForTabIndex:cfg: @ 019b4ee4

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineFloatingTabBarButtonActionViewController::extraButtonIconSizeForTabIndex_cfg_
          (WCRefineFloatingTabBarButtonActionViewController *this,ID param_1,SEL param_2,
          long_long param_3,ID param_4)

{
  double in_d0;
  undefined8 local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraButtonIconSiz_026a1be0);
    local_18 = in_d0;
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraButtonIconSiz_026a1be8);
    local_18 = in_d0;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraButtonIconSiz_026a1bf0);
    local_18 = in_d0;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarExtraButtonIconSiz_026a1bf8);
    local_18 = in_d0;
  }
  else {
    local_18 = 0.0;
  }
  _objc_storeStrong(&local_38,0);
  return local_18;
}

