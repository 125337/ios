// openInSafari @ 01fca500

/* Function Stack Size: 0x10 bytes */

void WebViewController::openInSafari(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_openURL_options_completionHandle_026a6be8,param_1,
               *(undefined8 *)PTR____NSDictionary0___02578288,0);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

