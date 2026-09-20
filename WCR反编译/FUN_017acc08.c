// FUN_017acc08 @ 017acc08

void FUN_017acc08(void)

{
  undefined8 local_20;
  long *local_18;
  
  FUN_017b7cf4();
  local_18 = &DAT_028e4248;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02588f60);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

