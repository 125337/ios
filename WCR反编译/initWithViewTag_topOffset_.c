// initWithViewTag:topOffset: @ 01125888

/* Function Stack Size: 0x20 bytes */

ID WCRefineProgressToast::initWithViewTag_topOffset_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  ID *pIVar1;
  double local_70;
  ID local_68;
  ID local_40;
  undefined *local_38;
  double local_30;
  ID local_28;
  SEL local_20;
  ID *local_18;
  
  local_18 = (ID *)0x0;
  pIVar1 = &local_40;
  local_38 = PTR_WCRefineProgressToast_026cf9f0;
  local_40 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_init_026ca6a8);
  local_18 = pIVar1;
  _objc_storeStrong(&local_18);
  if (local_18 != (ID *)0x0) {
    if ((long)local_28 < 1) {
      local_68 = 0x24f6db;
    }
    else {
      local_68 = local_28;
    }
    local_18[0xd] = local_68;
    if (0.0 <= local_30) {
      local_70 = local_30;
    }
    else {
      local_70 = 0.0;
    }
    local_18[0xe] = (ID)local_70;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return (ID)pIVar1;
}

