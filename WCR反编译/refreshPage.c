// refreshPage @ 01fc9854

/* Function Stack Size: 0x10 bytes */

void WebViewController::refreshPage(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

