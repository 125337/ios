// shouldExcludeNativeSessionFromGroupingForUnreadPolicy: @ 01a94270

/* Function Stack Size: 0x18 bytes */

bool WCRefineGroupDataProvider::shouldExcludeNativeSessionFromGroupingForUnreadPolicy_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nativeSessionFromObject__026a2c00,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    local_11 = 0;
  }
  else {
    FUN_01a94384(IVar1,&cf_m_uUnReadCount);
    IVar2 = local_38;
    FUN_01a93084(local_38,PTR_s_m_bShowUnReadAsRedDot_026bd9f0);
    local_11 = 0;
    if (0 < (long)IVar1) {
      local_11 = (byte)IVar2 ^ 1;
    }
    local_11 = local_11 & 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

