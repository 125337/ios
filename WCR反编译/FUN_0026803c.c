// FUN_0026803c @ 0026803c

void FUN_0026803c(void)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  if (((DAT_028c9500 & 1) == 0) && (DAT_028c9528 < 0x3c)) {
    DAT_028c9528 = DAT_028c9528 + 1;
    dVar1 = _dispatch_time(0,500000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_0257b0c8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

