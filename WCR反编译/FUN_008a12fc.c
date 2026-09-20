// FUN_008a12fc @ 008a12fc

byte FUN_008a12fc(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cdd80;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580c20);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return DAT_028cdd78 & 1;
}

