// FUN_017bec00 @ 017bec00

void FUN_017bec00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_78;
  undefined *local_48;
  uint local_3c;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  if ((local_30 == (cfstringStruct *)0x0) &&
     (pcVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar2 != (cfstringStruct *)0x0)) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_48 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_wcr_forwardImage_fromViewControl_026a1850,puVar3);
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_VGr<h_);
    }
    local_3c = (uint)(puVar3 == (undefined *)0x0);
    _objc_storeStrong(&local_48,0);
    if (local_3c == 0) {
      local_3c = 0;
    }
  }
  else {
    puVar1 = PTR_WCRefineHelper_026ce000;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = &cf_VGrV_Nzz;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showWeToastErrorWithText__0269ced8,local_78);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_3c = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

