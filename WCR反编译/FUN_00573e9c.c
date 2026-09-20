// FUN_00573e9c @ 00573e9c

void FUN_00573e9c(void)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_38 [3];
  double local_20;
  double local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb5b8,PTR_s_invalidate_026ca758);
  uVar1 = 0;
  _objc_storeStrong(&DAT_028cb5b8,0);
  FUN_00588bf0();
  local_20 = DAT_028cb5f8;
  if ((((uVar1 & 1) != 0) && (local_18 = DAT_028cb5f8, 0.0 < DAT_028cb5f8)) &&
     (DAT_028cb5f8 < 8.988465674311579e+307)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    dVar3 = DAT_028cb5f8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_20 = local_20 - dVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR___dispatch_main_q_02578680;
    if (0.0 < local_20) {
      puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR__OBJC_CLASS___NSTimer_026ce210,
                 PTR_s_timerWithTimeInterval_repeats_bl_026a5498,0,
                 &PTR___NSConcreteGlobalBlock_0257e098);
      _objc_retainAutoreleasedReturnValue();
      local_38[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(0,puVar2,PTR_s_setTolerance__026a4978);
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&DAT_028cb5b8,local_38[0]);
      _objc_storeStrong(local_38,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  return;
}

