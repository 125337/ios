// toDoBackgroundUploadStatusText @ 01ec9fb8

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoListSettingsViewController::toDoBackgroundUploadStatusText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardBackgroundMediaPathLight_026c7070);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardBackgroundMediaPathDark_026c7068);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((puVar2 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
    if (puVar2 == (undefined *)0x0) {
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__gn_;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_Y_n_;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_e_n_;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_e_;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

