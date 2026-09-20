// FUN_006a43b4 @ 006a43b4

void FUN_006a43b4(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cbe60;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257eb88);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

