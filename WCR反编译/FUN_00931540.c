// FUN_00931540 @ 00931540

void FUN_00931540(void)

{
  uint uVar1;
  pthread_t p_Var2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  pthread_t p_Var4;
  undefined *local_28 [3];
  
  p_Var2 = _pthread_self();
  DAT_028d23c8 = p_Var2;
  FUN_0092e120();
  FUN_0092f900();
  FUN_00935d4c();
  FUN_00935ecc();
  _objc_retainAutoreleasedReturnValue();
  FUN_00935e24();
  (*(code *)PTR__objc_release_02578630)();
  if (DAT_028cebb0 != '\0') {
    uVar1 = _unlink(&DAT_028cebb0);
    p_Var2 = (pthread_t)(ulong)uVar1;
  }
  FUN_00935f6c();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_009330cc();
  _objc_retainAutoreleasedReturnValue();
  p_Var4 = p_Var2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_session_start__)
  ;
  _objc_retainAutoreleasedReturnValue();
  _WCRefineCrashReporterBreadcrumb();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(p_Var2);
  if (DAT_028ce7b0 != '\0') {
    if (-1 < DAT_026f4c38) {
      _close(DAT_026f4c38);
      DAT_026f4c38 = -1;
    }
    p_Var4 = (pthread_t)&section_00000158.size;
    DAT_026f4c38 = _open(&DAT_028ce7b0,0x601);
  }
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_28[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,
             *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0,0,0,
             &PTR___NSConcreteGlobalBlock_025811d0,in_x6,in_x7,p_Var4);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  puVar3 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28[0],PTR_s_addObserverForName_object_queue__026ca4b0,
             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_025780b8,0,0,
             &PTR___NSConcreteGlobalBlock_025811f0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  puVar3 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28[0],PTR_s_addObserverForName_object_queue__026ca4b0,
             *(undefined8 *)PTR__UIApplicationWillTerminateNotification_025780f8,0,0,
             &PTR___NSConcreteGlobalBlock_02581210);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  _objc_storeStrong(local_28,0);
  return;
}

