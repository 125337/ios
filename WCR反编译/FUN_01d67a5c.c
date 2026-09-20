// FUN_01d67a5c @ 01d67a5c

byte FUN_01d67a5c(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  byte local_59;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  pcVar2 = &cf_WCRefineAssistFunctionViewController;
  local_30 = param_1;
  _NSClassFromString();
  local_38 = pcVar2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    _objc_alloc_init();
    pcVar3 = &cf_saveFrameCoordinates_forImage_;
    local_40 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = local_40;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_instanceMethodSignatureForSelect_026a0598,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSelector__0269e1b0,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_28,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,param_1 + 0x20,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_invoke_0269e1b8);
      local_59 = 0;
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_methodReturnLength_026c4a10);
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getReturnValue__0269e1c0,&local_59);
      }
      if ((local_59 & 1) != 0) {
        lVar5 = param_1 + 0x28;
        _objc_loadWeakRetained();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
      local_11 = local_59 & 1;
      bVar1 = true;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40,0);
    if (bVar1) goto LAB_01d67d14;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar5 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_11 = (byte)lVar5 & 1;
  (*(code *)PTR__objc_release_02578630)(param_1);
LAB_01d67d14:
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

