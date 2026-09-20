// FUN_0037594c @ 0037594c

void FUN_0037594c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca208;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257cce8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

