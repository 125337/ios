// FUN_0032cb94 @ 0032cb94

uint FUN_0032cb94(undefined8 param_1)

{
  undefined8 uVar1;
  uint local_38;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028c9df8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257c2e8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  local_38 = 0;
  if (local_28 != 0) {
    uVar1 = DAT_028c9df0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9df0,PTR_s_containsObject__0269cbb8,local_28);
    local_38 = (uint)uVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_38 & 1;
}

