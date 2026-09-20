// FUN_0158a248 @ 0158a248

void FUN_0158a248(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_0158a308();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    dVar1 = _dispatch_time(0,220000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_02586b40);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    FUN_0158a620(param_1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

