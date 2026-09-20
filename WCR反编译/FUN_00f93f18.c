// FUN_00f93f18 @ 00f93f18

void FUN_00f93f18(double param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (0.0 < param_1) {
    _os_unfair_lock_lock(&DAT_028e2ef0);
    if (((DAT_028e2fe2 & 1) == 0) && ((DAT_028e2ef4 & 1) == 0)) {
      DAT_028e2fe2 = 1;
      _os_unfair_lock_unlock(&DAT_028e2ef0);
      dVar1 = _dispatch_time(0,(long)(param_1 * 1000000000.0));
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      puVar2 = puVar3;
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_02583c70);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar1 = _dispatch_time(0,(long)(param_1 * 2.0 * 1000000000.0));
      _objc_retainAutoreleaseReturnValue(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar1,puVar3,&PTR___NSConcreteGlobalBlock_02583c90);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      _os_unfair_lock_unlock(&DAT_028e2ef0);
    }
  }
  return;
}

