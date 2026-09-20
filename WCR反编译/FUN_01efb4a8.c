// FUN_01efb4a8 @ 01efb4a8

void FUN_01efb4a8(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveInlineHTMLSilently__026c80e8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0,&cf__nzz);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

