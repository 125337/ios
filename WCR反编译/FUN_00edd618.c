// FUN_00edd618 @ 00edd618

undefined8 FUN_00edd618(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2a88;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02581f70);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028e2a80;
}

