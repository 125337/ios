// FUN_0006538c @ 0006538c

void FUN_0006538c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028c7c78;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02579970);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

