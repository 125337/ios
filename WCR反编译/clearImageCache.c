// clearImageCache @ 015ce318

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeStore::clearImageCache(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageCache_026b0e70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

