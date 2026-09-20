// addOAImageDataAsCustomEmoticon:fromViewController: @ 00f50968

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::addOAImageDataAsCustomEmoticon_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_nsDataFromImageDataOrImage__026ac488,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSVGr);
    local_3c = 1;
  }
  else {
    bVar1 = local_30 == (undefined *)0x0;
    if (bVar1) {
      local_70 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_70;
    }
    else {
      local_70 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isGIFImageData__026ac528,local_38);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__wcr__emoticon_oaadddataLen__lugif__dfromVC___);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addRawImageDataViaWeChatTweakLog_026ac548,local_38,local_48);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mR1Y_);
    }
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

