// saveQRCodeImage:preferExtension: @ 01f35188

/* Function Stack Size: 0x20 bytes */

void WCRefineUIBeautifyViewController::saveQRCodeImage_preferExtension_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  ID local_58;
  ID local_50;
  ulong local_48;
  ID local_40;
  uint local_34;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrS1Y_);
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureQRCodeBeautifyBasePathExis_026c88e8);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_sanitizedQRCodeFileExtension__026c8920,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
    if (((IVar2 & 1) == 0) &&
       (IVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_jpeg),
       (IVar2 & 1) == 0)) {
      uVar3 = local_28;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      uVar3 = local_28;
      _UIImageJPEGRepresentation(DAT_02323c60);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    if (local_48 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrOX_1Y_);
      local_34 = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_generatedQRCodeFileNameWithExten_026c8928,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_18;
      local_50 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_qrCodeBeautifyBasePath_026c88e0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_writeToFile_atomically__0269f928,local_58,1);
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_activateQRCodeImageAtPath_toast__026c8910,local_58,&cf_N_xNObR);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_xNO1Y_);
      }
      local_34 = (uint)!bVar1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

