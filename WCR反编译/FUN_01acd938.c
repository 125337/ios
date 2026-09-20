// FUN_01acd938 @ 01acd938

void FUN_01acd938(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e4530;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258b100);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

