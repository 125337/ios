// startWithTemplate: @ 016379e0

/* Function Stack Size: 0x18 bytes */

void WCRSFURLSchemeOpener::startWithTemplate_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_60;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancel_0269d1e8);
  puVar1 = local_28;
  FUN_016360a8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_c_Nzz);
    local_34 = 1;
  }
  else {
    puVar1 = local_30;
    _WCRSFURLSchemePlaceholders();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTemplateURL__026b1ad8,local_30);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
    local_60 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_48 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingKeys__026b1ae0,local_60);
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_askNextOrOpen_026b1b20);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

