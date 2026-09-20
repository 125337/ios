// FUN_00217cf8 @ 00217cf8

bool FUN_00217cf8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar2,PTR_s_rangeOfString__0269d838,&cf_WCImageFullScreenViewContainer);
  bVar1 = true;
  if (lVar2 == 0x7fffffffffffffff) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_rangeOfString__0269d838,&cf_WCMediaImageScrollView);
    bVar1 = true;
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_rangeOfString__0269d838,&cf_WCImageFullScreenTagView);
      bVar1 = true;
      if (lVar2 == 0x7fffffffffffffff) {
        lVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_rangeOfString__0269d838,&cf_PageIndicator);
        bVar1 = lVar2 != 0x7fffffffffffffff;
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

