// copyQRCodeImageFromURL: @ 01f354ac

/* Function Stack Size: 0x18 bytes */

void WCRefineUIBeautifyViewController::copyQRCodeImageFromURL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eNS1Y_);
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureQRCodeBeautifyBasePathExis_026c88e8);
    IVar3 = local_18;
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_sanitizedQRCodeFileExtension__026c8920);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_generatedQRCodeFileNameWithExten_026c8928,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_qrCodeBeautifyBasePath_026c88e0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_58 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_59 = (byte)lVar2;
    local_68 = 0;
    local_78 = 0;
    puVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_copyItemAtURL_toURL_error__026a22c8,local_28,local_50,&local_78);
    _objc_storeStrong(&local_68,local_78);
    local_69 = (byte)puVar5;
    if (((ulong)puVar5 & 1) == 0) {
      local_88 = local_68;
      puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_28,1,&local_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_68,local_88);
      local_80 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      if (puVar5 != (undefined *)0x0) {
        local_90 = local_68;
        puVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_writeToURL_options_error__026af080,local_50,1,&local_90);
        _objc_storeStrong(&local_68,local_90);
        local_69 = (byte)puVar5;
      }
      _objc_storeStrong(&local_80,0);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    bVar1 = (local_69 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_activateQRCodeImageAtPath_toast__026c8910,local_48,&cf_N_xNObR);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_xNO1Y_);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

