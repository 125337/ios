// FUN_00fe44c4 @ 00fe44c4

void FUN_00fe44c4(void)

{
  dispatch_source_t pdVar1;
  
  pdVar1 = DAT_028e3088;
  _dispatch_source_set_timer(DAT_028e3088,0xffffffffffffffff,0xffffffffffffffff,0);
  _WCRefineIconNameCaptureIsLiveArmedFast();
  if (((ulong)pdVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_captureCurrentVisiblePage_026ad488)
    ;
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}

