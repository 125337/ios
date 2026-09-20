// FUN_00f6157c @ 00f6157c

byte FUN_00f6157c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_50;
  bool local_41;
  undefined8 local_40;
  long *local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar1 < 5) {
    local_41 = false;
  }
  else {
    local_38 = &DAT_028e2e20;
    local_40 = 0;
    _objc_storeStrong(&local_40,&PTR___NSConcreteGlobalBlock_02583498);
    if (*local_38 + 1 != 0) {
      _dispatch_once(*local_38 + 1,local_38,local_40);
    }
    _objc_storeStrong(&local_40,0);
    uVar1 = local_50;
    lVar3 = DAT_028e2e18;
    if (DAT_028e2e18 == 0) {
      local_41 = false;
    }
    else {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = uVar2;
      local_18 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar3,PTR_s_numberOfMatchesInString_options__026a7d90,uVar1,0,0,uVar2);
      local_41 = lVar3 != 0;
    }
  }
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

