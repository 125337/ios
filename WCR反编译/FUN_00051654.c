// FUN_00051654 @ 00051654

undefined * FUN_00051654(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7c08;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025796a0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return &DAT_028c7bc8;
}

