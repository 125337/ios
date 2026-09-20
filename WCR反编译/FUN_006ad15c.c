// FUN_006ad15c @ 006ad15c

void FUN_006ad15c(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cbeb8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ecd8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  FUN_006b1468();
  FUN_006b1500();
  FUN_006b16b8();
  FUN_006b17ec();
  return;
}

