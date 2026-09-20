// FUN_0070da74 @ 0070da74

void FUN_0070da74(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,local_20);
  if (((*(byte *)(param_1 + 0x30) & 1) != 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    if ((uVar1 & 1) != 0) {
      pcVar2 = &cf_WCRefineScreenshotWatermarkProcessor;
      _NSClassFromString();
      pcVar3 = &cf_sharedProcessor;
      local_48 = pcVar2;
      _NSSelectorFromString();
      local_50 = pcVar3;
      if ((local_48 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_performSelector__026ca7b8,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = &cf_applyWatermarkToImage_;
        local_58 = pcVar3;
        _NSSelectorFromString();
        local_60 = pcVar2;
        if ((local_58 != (cfstringStruct *)0x0) &&
           (pcVar3 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar2)
           , ((ulong)pcVar3 & 1) != 0)) {
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_methodSignatureForSelector__0269e190,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar2;
          if (pcVar2 != (cfstringStruct *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSInvocation_026ce208,
                       PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
            _objc_retainAutoreleasedReturnValue();
            local_70 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_58);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSelector__0269e1b0,local_60);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_setArgument_atIndex__0269eae8,
                       *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_invoke_0269e1b8);
            local_78 = 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getReturnValue__0269e1c0,&local_78)
            ;
            if ((local_78 != 0) &&
               (local_78 != *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28))) {
              _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,local_78);
            }
            _objc_storeStrong(&local_70,0);
          }
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

