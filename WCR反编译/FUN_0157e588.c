// FUN_0157e588 @ 0157e588

void FUN_0157e588(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3a38;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586930);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

