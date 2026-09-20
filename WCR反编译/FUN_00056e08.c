// FUN_00056e08 @ 00056e08

void FUN_00056e08(ulong param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  if ((((DAT_028c7b79 & 1) == 0) && ((DAT_028c7b78 & 1) != 0)) &&
     (FUN_0004c074(), (param_1 & 1) != 0)) {
    FUN_00056ef0();
    if ((param_1 & 1) == 0) {
      if (DAT_028c7c20 < 8) {
        DAT_028c7c20 = DAT_028c7c20 + 1;
        dVar1 = _dispatch_time(0,3000000000);
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_02579790);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    else {
      FUN_0004b060();
    }
  }
  return;
}

