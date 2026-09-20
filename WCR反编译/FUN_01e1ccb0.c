// FUN_01e1ccb0 @ 01e1ccb0

byte FUN_01e1ccb0(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e47b0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c758);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028e47a8 & 1;
}

