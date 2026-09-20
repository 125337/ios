// loadHighlightedSourceWithMode: @ 0196faac

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerPreviewViewController::loadHighlightedSourceWithMode_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_readTextContent_026b9f60);
  _objc_retainAutoreleasedReturnValue();
  local_38 = 0x96000;
  local_39 = 0;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (0x96000 < IVar2) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,0x96000);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_39 = 1;
  }
  uVar1 = local_28;
  IVar2 = local_30;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wrapLines_026b9ed8);
  FUN_0196fc6c(IVar2,uVar1,IVar3,local_39 & 1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

