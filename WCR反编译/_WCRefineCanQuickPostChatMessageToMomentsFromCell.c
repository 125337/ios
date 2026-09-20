// _WCRefineCanQuickPostChatMessageToMomentsFromCell @ 0059d3e4

byte _WCRefineCanQuickPostChatMessageToMomentsFromCell(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  FUN_0059d590();
  if (((uVar1 & 1) == 0) && (uVar1 = local_20, FUN_0059cce0(), (uVar1 & 1) == 0)) {
    uVar1 = local_28;
    FUN_0059d694();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      _WCRefineCanQuickPostChatMessageToMoments();
      local_11 = (bool)((byte)uVar1 & 1);
    }
    else {
      local_40 = 0;
      uVar1 = local_20;
      FUN_0059d7b4(local_20,&local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      local_11 = uVar1 != 0;
    }
  }
  else {
    local_11 = false;
  }
  local_38 = 1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

