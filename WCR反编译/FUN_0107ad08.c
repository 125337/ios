// FUN_0107ad08 @ 0107ad08

void FUN_0107ad08(void)

{
  undefined *puVar1;
  
  _objc_storeStrong(&DAT_028e3230);
  _objc_storeStrong(&DAT_028e32a0,0);
  FUN_01099f10();
  puVar1 = PTR___dispatch_main_q_02578680;
  DAT_028e3248 = DAT_028e3248 + 1;
  if (DAT_028e3238 < 1) {
    _objc_retainAutoreleaseReturnValue(DAT_028e3238);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    DAT_028e3240 = 1;
  }
  return;
}

