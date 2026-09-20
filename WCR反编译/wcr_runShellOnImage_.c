// wcr_runShellOnImage: @ 0166baf0

/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatCropViewController::wcr_runShellOnImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_80;
  ID local_78;
  ID local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_WCRefineScreenshotFrameProcessor;
    _NSClassFromString();
    local_40 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_sharedProcessor_026a6d98);
      if (((ulong)pcVar2 & 1) == 0) {
        local_80 = (cfstringStruct *)0x0;
      }
      else {
        local_80 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_performSelector__026ca7b8,PTR_s_sharedProcessor_026a6d98);
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_80;
      pcVar2 = &cf_applyFrameToImage_;
      _NSSelectorFromString();
      local_50 = pcVar2;
      if ((local_48 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2),
         pcVar2 = local_48, ((ulong)pcVar3 & 1) == 0)) {
        local_18 = 0;
        local_34 = 1;
      }
      else {
        local_58 = (cfstringStruct *)0x0;
        pcVar3 = &cf_effectiveFrameTemplateRelativePath;
        _NSSelectorFromString(&cf_effectiveFrameTemplateRelativePath);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
        pcVar3 = local_48;
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = &cf_effectiveFrameTemplateRelativePath;
          _NSSelectorFromString(&cf_effectiveFrameTemplateRelativePath);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_performSelector__026ca7b8,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_58;
          local_58 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar2 = local_58;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((((ulong)pcVar2 & 1) == 0) ||
           (pcVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0)
           , pcVar2 == (cfstringStruct *)0x0)) {
          local_18 = 0;
          local_34 = 1;
        }
        else {
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_methodSignatureForSelector__0269e190,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_18 = 0;
            local_34 = 1;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSInvocation_026ce208,
                       PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
            _objc_retainAutoreleasedReturnValue();
            local_68 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_48);
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelector__0269e1b0,local_50);
            IVar1 = local_30;
            (*(code *)PTR__objc_retain_02578638)();
            local_70 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_70,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_invoke_0269e1b8);
            local_78 = 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getReturnValue__0269e1c0,&local_78)
            ;
            local_18 = local_78;
            if ((local_78 == 0) || (local_78 == local_30)) {
              local_18 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
            }
            local_34 = 1;
            _objc_storeStrong(&local_70);
            _objc_storeStrong(&local_68,0);
          }
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

