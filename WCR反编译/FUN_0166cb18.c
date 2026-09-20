// FUN_0166cb18 @ 0166cb18

void FUN_0166cb18(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long local_a8;
  long local_70;
  long local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
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
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_screenshotWatermarkGestureEnable_026a1ee8),
       ((ulong)puVar2 & 1) == 0)) {
      lVar1 = local_20;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
      local_24 = 1;
    }
    else {
      pcVar3 = &cf_WCRefineScreenshotWatermarkProcessor;
      _NSClassFromString();
      pcVar4 = &cf_sharedProcessor;
      local_38 = pcVar3;
      _NSSelectorFromString();
      local_40 = pcVar4;
      if ((local_38 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4),
         ((ulong)pcVar3 & 1) == 0)) {
        lVar1 = local_20;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar1;
        local_24 = 1;
      }
      else {
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_performSelector__026ca7b8,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_applyWatermarkToImage_;
        local_48 = pcVar4;
        _NSSelectorFromString();
        local_50 = pcVar3;
        if ((local_48 == (cfstringStruct *)0x0) ||
           (pcVar4 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3)
           , ((ulong)pcVar4 & 1) == 0)) {
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
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_invoke_0269e1b8);
            local_70 = 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getReturnValue__0269e1c0,&local_70)
            ;
            if (local_70 == 0) {
              local_a8 = local_20;
            }
            else {
              local_a8 = local_70;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_a8;
            local_24 = 1;
            _objc_storeStrong(&local_68);
            _objc_storeStrong(&local_60,0);
          }
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(&local_48,0);
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

