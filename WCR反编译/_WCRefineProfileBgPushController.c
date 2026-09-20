// _WCRefineProfileBgPushController @ 01cbd198

void _WCRefineProfileBgPushController(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_PushViewController_animated_;
    local_30 = uVar1;
    _NSSelectorFromString();
    if ((local_30 == 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2),
       (uVar1 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_pushViewController_animated__0269d590,local_20,1);
      local_24 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2,local_20,1);
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

