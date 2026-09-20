// FUN_016a4d44 @ 016a4d44

/* WARNING: Type propagation algorithm not settling */

void FUN_016a4d44(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48 [3];
  ulong local_30 [3];
  ulong local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar1 = local_18;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_30[0] = uVar1;
  FUN_016aed70();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30[0];
  local_48[0] = uVar2;
  _WCRefineQuickPostChatMessageToMomentsFromCell(local_30[0],uVar2,local_18);
  if ((uVar1 & 1) == 0) {
    FUN_016abf68(&cf_Q_fN_eclWb__gN_);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

