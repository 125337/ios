// FUN_002f4a20 @ 002f4a20

void FUN_002f4a20(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long local_78;
  undefined1 local_69;
  long local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  DAT_028c9a20 = 0;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameEnabled_026a1ef0);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameGestureEnabled_026a1ef8),
       ((ulong)puVar2 & 1) == 0)) {
      lVar1 = local_20;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
      local_24 = 1;
    }
    else {
      pcVar3 = &cf_WCRefineScreenshotFrameProcessor;
      _NSClassFromString();
      pcVar4 = &cf_applyFrameToImage_forGestureScreenshot_;
      local_48 = pcVar3;
      _NSSelectorFromString();
      local_50 = pcVar4;
      if ((local_48 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4),
         ((ulong)pcVar3 & 1) == 0)) {
        lVar1 = local_20;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar1;
        local_24 = 1;
      }
      else {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_methodSignatureForSelector__0269e190,local_50);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_20;
        local_58 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = lVar1;
          local_24 = 1;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          local_60 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTarget__0269e1a8,local_48);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSelector__0269e1b0,local_50);
          lVar1 = local_20;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = lVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_68,2);
          local_69 = 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_69,3);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_invoke_0269e1b8);
          local_78 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getReturnValue__0269e1c0,&local_78);
          lVar1 = local_20;
          local_18 = local_78;
          if (local_78 == 0) {
            DAT_028c9a20 = 1;
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = lVar1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
          }
          local_24 = 1;
          _objc_storeStrong(&local_68);
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58,0);
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

