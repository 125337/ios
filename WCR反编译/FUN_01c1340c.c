// FUN_01c1340c @ 01c1340c

void FUN_01c1340c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4630;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258bc40);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

