// FUN_0081d1a0 @ 0081d1a0

void FUN_0081d1a0(void)

{
  undefined *puVar1;
  
  _WCRefineSwitchDiagNote(&cf_beautify_settingsChangedBEGIN);
  FUN_0081994c();
  FUN_00863428(&DAT_026f4858,1,3);
  if ((DAT_028cd1b0 & 1) != 0) {
    FUN_0081ad84();
  }
  FUN_0081ae44();
  FUN_0081ba24();
  FUN_0081c150();
  FUN_0081c9cc();
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _WCRefineSwitchDiagNote(&cf_beautify_settingsChangedEND);
  return;
}

