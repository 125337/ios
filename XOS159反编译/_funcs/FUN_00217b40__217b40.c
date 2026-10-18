// FUN_00217b40 @0x217b40


void FUN_00217b40(void)



{

  DAT_003eaed0 = _NSClassFromString(&cf_ThemeBoxSegmentedView);

  DAT_003eaed8 = _NSClassFromString(&cf_MFBannerBtn);

  if (DAT_003eaed8 == 0) {

    DAT_003eaed8 = _NSClassFromString(&cf_MFWebMMBtn);

  }

  return;

}




