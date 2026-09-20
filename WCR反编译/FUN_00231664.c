// FUN_00231664 @ 00231664

void FUN_00231664(double param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  if (((DAT_028c91e0 & 1) == 0) && ((DAT_028c9270 & 1) == 0)) {
    DAT_028c9270 = 1;
    dVar1 = _dispatch_time(0,(long)(param_1 * 1000000000.0));
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_0257af58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

