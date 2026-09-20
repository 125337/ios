// applyAppID:name: @ 01bfbfcc

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsTailPickerViewController::applyAppID_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  pcVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onPickNone_026c0be0);
    local_3c = 1;
  }
  else {
    puVar1 = PTR_WCRefineMomentsTailCatalog_026ce7d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_isRegisteredAppID__026a5c78,local_38);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf__glQ,&::cf_format_s_,&cf_wSN,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      local_3c = 1;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_78 = (cfstringStruct *)PTR_WCRefineMomentsTailCatalog_026ce7d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_nameForAppID__026a5c60,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_78;
      }
      else {
        local_78 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_78;
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postSessionMode_026c0b80);
      if ((IVar3 & 1) == 0) {
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      else {
        _WCRMomentsTailSetPostSessionAppID(local_38);
      }
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onPick_026b9b08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar3 != 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onPick_026b9b08);
        _objc_retainAutoreleasedReturnValue();
        if (local_48 == (cfstringStruct *)0x0) {
          local_d8 = local_38;
        }
        else {
          local_d8 = local_48;
        }
        (**(code **)(IVar3 + 0x10))(IVar3,local_38,local_d8);
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      puVar1 = PTR_WCRefineHelper_026ce000;
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_e8 = &cf___u;
      }
      else {
        local_e8 = local_48;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildPresetList_026c0bc8);
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

