// updateHTMLLineNumbers @ 01f0a4f4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::updateHTMLLineNumbers(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  cfstringStruct *local_90;
  ulong local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlLineNumberView_026c80a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_90;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_30 = 1;
    for (local_38 = (cfstringStruct *)0x0; pcVar1 = local_38, pcVar2 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0), pcVar1 < pcVar2;
        local_38 = (cfstringStruct *)((long)&local_38->field0_0x0 + 1)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_characterAtIndex__0269fa18,local_38);
      if ((int)pcVar1 == 10) {
        local_30 = local_30 + 1;
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    for (local_48 = 1; local_48 <= local_30; local_48 = local_48 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendFormat__0269d148,&cf__lu);
    }
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlLineNumberView_026c80a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlLineNumberView_026c80a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

