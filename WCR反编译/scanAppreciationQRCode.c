// scanAppreciationQRCode @ 01d2d984

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::scanAppreciationQRCode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  cfstringStruct *local_108;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01d2e120;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = pcVar2;
    _dispatch_async(puVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38,0);
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appreciationQRCodeBase64_026a7e70);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_108 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_108;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Ox_gMn_);
      local_70 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithBase64EncodedString_opti_026aaf38,local_60,1);
      local_78 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Ox<h_);
        local_70 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OxVGrR_1Y_);
          local_70 = 1;
        }
        else {
          pcVar4 = "MsgImgFullScreenViewController";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_alloc_026aa370);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_init_026ca6a8);
          local_88 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_animateHideViews__026c4430);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_animateHideViews__026c4430,1);
          }
          _WCRefine_setSponsorMsgImgVC(local_88);
          local_90 = 0x1b;
          local_98 = 2;
          pcVar4 = "ScanQRCodeLogicParams";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_alloc_026aa370);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_initWithCodeType_fromScene__026b49d8,0x1b,2);
          pcVar5 = "NewQRCodeScannerParams";
          local_a0 = pcVar4;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_alloc_026aa370);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_initWithCodeType__026c4438,0x1b);
          pcVar4 = "ScanQRCodeLogicController";
          local_a8 = pcVar5;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_alloc_026aa370);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_initWithViewController_logicPara_026b4a00,local_88,local_a0);
          pcVar5 = "MMServiceCenter";
          local_b0 = pcVar4;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = "ScanQRCodeResultsMgr";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_class_0269cd60);
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_getService__0269d170,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_setScanLogicController__026c4440,local_b0);
          pcVar4 = "NewQRCodeScanner";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_alloc_026aa370);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_initWithDelegate_scannerParams__026c4448,local_b0,local_a8);
          local_c0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_scanOnePicture__026b49f0,local_80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_addChildViewController__026ba198,local_88);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_didMoveToParentViewController__026ba1a0,local_28);
          _objc_storeStrong(&local_c0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_88,0);
          local_70 = 0;
        }
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  return;
}

