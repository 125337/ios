// FUN_017fb0ec @ 017fb0ec

void FUN_017fb0ec(long param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_e8;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  pcVar2 = &cf_WCRefineScreenshotFrameProcessor;
  local_30 = param_1;
  local_28 = param_1;
  _NSClassFromString();
  pcVar3 = &cf_sharedProcessor;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_48 = 0;
  local_40 = pcVar3;
  if ((local_38 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_performSelector__026ca7b8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    if (*(long *)(param_1 + 0x20) == 0) {
      local_e8 = &cf_applyFrameToImage_;
      _NSSelectorFromString();
    }
    else {
      local_e8 = &cf_applyFrameToImage_secondImage_;
      _NSSelectorFromString();
    }
    local_58 = local_e8;
    if ((local_50 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_e8),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_methodSignatureForSelector__0269e190,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      if (pcVar2 != (cfstringStruct *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelector__0269e1b0,local_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setArgument_atIndex__0269eae8,param_1 + 0x28,2);
        if (*(long *)(param_1 + 0x20) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setArgument_atIndex__0269eae8,param_1 + 0x20,3);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_invoke_0269e1b8);
        local_70 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getReturnValue__0269e1c0,&local_70);
        _objc_storeStrong(&local_48,local_70);
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  puVar4 = PTR___dispatch_main_q_02578680;
  if ((local_48 == 0) || (lVar1 = local_48 - *(long *)(param_1 + 0x28), lVar1 == 0)) {
    _objc_retainAutoreleaseReturnValue(0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_017fb584;
    local_80 = &DAT_025814c8;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar5;
    _dispatch_async(puVar4,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_9c = 1;
    _objc_storeStrong(&local_78,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue(lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_017fb5f4;
    local_c0 = &DAT_0257cb48;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_48;
    local_b8 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = uVar5;
    _dispatch_async(puVar4,&local_d8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    local_9c = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

