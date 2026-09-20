// finishImportURL:fallbackImage: @ 01c793d8

/* Function Stack Size: 0x20 bytes */

void WCRefinePageBackgroundLibraryViewController::finishImportURL_fallbackImage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_c8;
  cfstringStruct *local_b8;
  undefined *local_80;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  local_51 = false;
  bVar1 = local_28 == 0;
  if (bVar1) {
    local_80 = (undefined *)0x0;
  }
  else {
    local_48 = 0;
    local_80 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_importMediaAtURL_error__026c2758,
               local_28,&local_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_38,local_48);
    local_50 = local_80;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_80;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined *)0x0) && (local_30 != 0)) {
    local_60 = local_38;
    puVar3 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_saveImage_error__026c2760,local_30,
               &local_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_38,local_60);
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  bVar1 = false;
  if (puVar3 == (undefined *)0x0) {
    local_68 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_c8 = local_68;
    if (local_68 == (cfstringStruct *)0x0) {
      local_c8 = &cf__eQ1Y_;
    }
    local_b8 = local_c8;
  }
  else {
    local_b8 = &cf___eQofVN_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_b8);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadFiles_026c25e8);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

