// FUN_00821e70 @ 00821e70

ulong FUN_00821e70(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028cd1f0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580720);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,DAT_028cd1e8);
  _objc_storeStrong(&local_28,0);
  return uVar1 & 0xffffffff;
}

