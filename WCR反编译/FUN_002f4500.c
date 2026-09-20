// FUN_002f4500 @ 002f4500

void FUN_002f4500(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long local_118;
  long local_90;
  long local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_screenshotWatermarkGestureEnable_026a1ee8),
       ((ulong)puVar2 & 1) == 0)) {
      lVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar1;
      local_34 = 1;
    }
    else {
      pcVar3 = &cf_WCRefineScreenshotWatermarkProcessor;
      _NSClassFromString();
      pcVar4 = &cf_sharedProcessor;
      local_58 = pcVar3;
      _NSSelectorFromString();
      local_60 = pcVar4;
      if ((local_58 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4),
         ((ulong)pcVar3 & 1) == 0)) {
        lVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = lVar1;
        local_34 = 1;
      }
      else {
        pcVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_performSelector__026ca7b8,local_60);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_applyWatermarkToImage_;
        local_68 = pcVar4;
        _NSSelectorFromString();
        local_70 = pcVar3;
        if ((local_68 == (cfstringStruct *)0x0) ||
           (pcVar4 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar3)
           , ((ulong)pcVar4 & 1) == 0)) {
          lVar1 = local_30;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = lVar1;
          local_34 = 1;
        }
        else {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_methodSignatureForSelector__0269e190,local_70);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_30;
          local_78 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = lVar1;
            local_34 = 1;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSInvocation_026ce208,
                       PTR_s_invocationWithMethodSignature__0269e1a0,pcVar3);
            _objc_retainAutoreleasedReturnValue();
            local_80 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTarget__0269e1a8,local_68);
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setSelector__0269e1b0,local_70);
            lVar1 = local_30;
            (*(code *)PTR__objc_retain_02578638)();
            local_88 = lVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_setArgument_atIndex__0269eae8,&local_88,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_invoke_0269e1b8);
            local_90 = 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getReturnValue__0269e1c0,&local_90)
            ;
            if (local_90 == 0) {
              local_118 = local_30;
            }
            else {
              local_118 = local_90;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = local_118;
            local_34 = 1;
            _objc_storeStrong(&local_88);
            _objc_storeStrong(&local_80,0);
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_68,0);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

