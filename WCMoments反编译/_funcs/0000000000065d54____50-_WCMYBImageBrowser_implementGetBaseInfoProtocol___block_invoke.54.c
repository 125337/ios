// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.54 @0x65d54

void ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = param_1;
  local_20 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    _objc_msgSend_webImageMediator(local_30,local_50);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar1 == 0) {
      _objc_msgSend_currentHandler(&_OBJC_CLASS___NSAssertionHandler,local_50);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_handleFailureInMethod_object_file_lineNumber_description_
                (uVar2,local_50,*(undefined8 *)(param_1 + 0x28),local_30,&cf_YBImageBrowser_m,0x136,
                 &cf__webImageMediator_shouldnotbenil_);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    _objc_msgSend_webImageMediator(local_30,local_50);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

