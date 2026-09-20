// wcRefine_searchTextViewDidChangeNotification: @ 01d77c78

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::wcRefine_searchTextViewDidChangeNotification_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&::cf_newline_s_);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_60 != (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcRefine_triggerSearchAndDismiss_026c4ad8,local_30);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

