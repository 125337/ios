// showUpdateLogWithVersion: @ 01f45df8

/* Function Stack Size: 0x18 bytes */

void WCRefineUpdateLogView::showUpdateLogWithVersion_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 == 0;
  if (bVar1) {
    local_48 = &cf_fee_;
  }
  else {
    local_48 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_fee_);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showUpdateLogWithTitle__026c8ed8,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

