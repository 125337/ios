// FUN_0157876c @ 0157876c

ulong FUN_0157876c(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028e3a18;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025868a0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20);
  uVar2 = DAT_028e3a10;
  uVar1 = local_28;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  return uVar2 & 0xffffffff;
}

