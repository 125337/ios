// ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke.47 @0x5730

void ___46__WCMAssetHandler_webView_startURLSchemeTask___block_invoke_47(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  
  uVar2 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  _objc_sync_enter();
  uVar3 = _objc_msgSend_activeTasks(*(undefined8 *)(param_1 + 0x20),local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar1 = _objc_msgSend_containsObject_(uVar3,local_48,*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((uVar1 & 1) != 0) {
    uVar3 = _objc_msgSend_activeTasks(*(undefined8 *)(param_1 + 0x20),local_48);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    _objc_msgSend_removeObject_(uVar3,local_48,*(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = _objc_msgSend_accountToken(*(undefined8 *)(param_1 + 0x20),local_48);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar1 = _objc_msgSend_isEqual_(uVar5,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = _objc_msgSend_errorWithDomain_code_userInfo_
                        (&_OBJC_CLASS___NSError,local_48,
                         *(undefined8 *)PTR__NSURLErrorDomain_001101b0,0xfffffffffffffc19,0);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      _objc_msgSend_didFailWithError_(uVar5,local_48);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else if (*(long *)(param_1 + 0x38) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = _objc_msgSend_errorWithDomain_code_userInfo_
                        (&_OBJC_CLASS___NSError,local_48,
                         *(undefined8 *)PTR__NSURLErrorDomain_001101b0,0xfffffffffffffbb4,0);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      _objc_msgSend_didFailWithError_(uVar5,local_48);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = _objc_alloc(&_OBJC_CLASS___NSURLResponse);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x38),local_48);
      uVar3 = _objc_msgSend_initWithURL_MIMEType_expectedContentLength_textEncodingName_
                        (uVar3,local_48,uVar6,uVar7,uVar5,0);
      _objc_msgSend_didReceiveResponse_(uVar4,local_48,uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_didReceiveData_
                (*(undefined8 *)(param_1 + 0x28),local_48,*(undefined8 *)(param_1 + 0x38));
      _objc_msgSend_didFinish(*(undefined8 *)(param_1 + 0x28),local_48);
    }
  }
  _objc_sync_exit(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

