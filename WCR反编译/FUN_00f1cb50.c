// FUN_00f1cb50 @ 00f1cb50

void FUN_00f1cb50(undefined8 param_1)

{
  ulong uVar1;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  local_21 = 0;
  uVar1 = local_18;
  _WCRefineResolveWalletReplacementNumberForView(local_18,&local_20,&local_21);
  if ((((uVar1 & 1) != 0) && ((local_21 & 1) == 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_defaultNumber__026abd60),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_defaultNumber__026abd60,local_20);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

