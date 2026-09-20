// FUN_00314480 @ 00314480

ulong FUN_00314480(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028c9da0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257c118);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = local_28;
  FUN_00319cd8(local_28,&DAT_028c9d48,0xb);
  _objc_storeStrong(&local_28,0);
  return uVar1 & 0xffffffff;
}

