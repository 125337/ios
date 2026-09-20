// FUN_0219d628 @ 0219d628

ulong FUN_0219d628(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028e4990;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258d418);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20);
  uVar1 = DAT_028e4988;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4988,PTR_s_containsObject__0269cbb8,local_28);
  _objc_storeStrong(&local_28,0);
  return uVar1 & 0xffffffff;
}

