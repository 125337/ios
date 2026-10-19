// _WCMStopStalledVideo @0x27844

byte _WCMStopStalledVideo(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  byte local_71;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = _NSSelectorFromString(&cf_StopDownloadVideoWithMediaItem_downloadTaskInfo_);
  uVar2 = _objc_opt_class(local_20);
  local_38 = _class_getInstanceMethod(uVar2,local_30);
  if (local_38 != 0) {
    pcVar3 = (char *)_method_getTypeEncoding(local_38);
    iVar1 = _strcmp(pcVar3,"B32@0:8@16^@24");
    if (iVar1 == 0) {
      uVar2 = _objc_msgSend_methodSignatureForSelector_(local_20,local_a8,local_30);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar4 = _objc_msgSend_invocationWithMethodSignature_(&_OBJC_CLASS___NSInvocation,local_a8);
      local_48 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_setTarget_(local_48,local_a8,local_20);
      _objc_msgSend_setSelector_(local_48,local_a8,local_30);
      local_60[0] = (*(code *)PTR__objc_retain_00110460)(local_28);
      local_70 = &local_68;
      local_68 = 0;
      _objc_msgSend_setArgument_atIndex_(local_48,local_a8,local_60,2);
      _objc_msgSend_setArgument_atIndex_(local_48,local_a8,&local_70,3);
      _objc_msgSend_invoke(local_48,local_a8);
      local_71 = 0;
      _objc_msgSend_getReturnValue_(local_48,local_a8,&local_71);
      local_11 = local_71 & 1;
      local_3c = 1;
      _objc_storeStrong(local_60);
      _objc_storeStrong(&local_48,0);
      goto LAB_00027a94;
    }
  }
  local_11 = 0;
  local_3c = 1;
LAB_00027a94:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

