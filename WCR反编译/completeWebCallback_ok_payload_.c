// completeWebCallback:ok:payload: @ 01f02424

/* Function Stack Size: 0x24 bytes */

void WCRefineToDoListWebSettingsViewController::completeWebCallback_ok_payload_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *local_e0;
  long local_c8;
  undefined *local_90;
  long local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  undefined1 local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (undefined1)param_4;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlPreviewWebView_026c7f38);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (IVar2 != 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    bVar1 = lVar3 == 0;
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    local_4c = 1;
  }
  else {
    local_58 = 0;
    if (local_48 == 0) {
      local_c8 = *(long *)PTR____NSDictionary0___02578288;
    }
    else {
      local_c8 = local_48;
    }
    local_68 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,local_c8,4,&local_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_58,local_68);
    local_79 = false;
    local_60 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_e0 = &cf_null;
    }
    else {
      local_e0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = local_e0;
    }
    local_79 = puVar4 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_e0;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_window_WCRefineToDoNativeCallback__window_WCRefineToDoNativeCallback_____________
              );
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_90 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlPreviewWebView_026c7f38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

