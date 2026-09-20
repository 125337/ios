// _WCRChatToolbarAttachmentController @ 00ef2cac

void _WCRChatToolbarAttachmentController(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_60;
  long local_50;
  long local_40;
  long local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    local_30 = lVar2;
    if (lVar2 == 0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _class_getInstanceVariable();
      local_30 = lVar2;
    }
    bVar1 = local_30 == 0;
    local_60 = local_20;
    if (bVar1) {
      FUN_00eee4f4(local_20,&cf_selectAttachmentViewController);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_60;
    }
    else {
      _object_getIvar(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    lVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    local_24 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

