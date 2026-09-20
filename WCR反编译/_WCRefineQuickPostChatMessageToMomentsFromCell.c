// _WCRefineQuickPostChatMessageToMomentsFromCell @ 0059dbd8

/* WARNING: Type propagation algorithm not settling */

byte _WCRefineQuickPostChatMessageToMomentsFromCell
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50 [2];
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0059d590();
  if (((uVar1 & 1) == 0) && (uVar1 = local_20, FUN_0059cce0(), (uVar1 & 1) == 0)) {
    uVar1 = local_30;
    FUN_0059d694();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      _WCRefineQuickPostChatMessageToMoments(local_20,local_28);
      local_11 = (byte)uVar1 & 1;
      local_40 = 1;
    }
    else {
      local_50[1] = 0;
      uVar1 = local_20;
      FUN_0059d7b4(local_20,local_50 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_50[0] = uVar1;
      FUN_0059d260(local_20,&cf_m_uiMessageType);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_50[0] == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_20;
        FUN_0059de98(local_20,local_28,local_30,local_50[0]);
        local_11 = (byte)uVar1 & 1;
      }
      local_40 = 1;
      _objc_storeStrong(local_50,0);
    }
  }
  else {
    local_11 = 0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

