// FUN_0055101c @ 0055101c

void FUN_0055101c(double param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  double local_40;
  
  if ((DAT_028cb440 & 1) == 0) {
    DAT_028cb440 = 1;
    local_40 = param_1;
    if (param_1 <= 15.0) {
      local_40 = 15.0;
    }
    dVar1 = _dispatch_time(0,(long)(local_40 * 1000000000.0));
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_0257dda8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

