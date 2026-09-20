// FUN_005b3a88 @ 005b3a88

void FUN_005b3a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined1 auStack_90 [8];
  undefined **local_88;
  long local_80;
  undefined **local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  char *local_60;
  undefined4 local_58;
  long local_48;
  byte local_39;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  local_39 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tid_026a15d8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  if ((lVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
    local_58 = 1;
  }
  else if ((local_39 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_WCRefine_performDeleteMomentWith_026a5810,local_48);
    local_58 = 1;
  }
  else {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    local_68 = PTR_s_showAlertWithTitle_message_cance_026a5b88;
    local_60 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showAlertWithTitle_message_cance_026a5b88), ((ulong)pcVar2 & 1) != 0)) {
      _objc_initWeak(auStack_70,local_28);
      ppuVar3 = &PTR___NSConcreteGlobalBlock_0257e398;
      _objc_retainBlock();
      lVar1 = local_48;
      local_78 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      ppuVar3 = &local_b8;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_005d1b18;
      local_a0 = &DAT_025797f0;
      local_80 = lVar1;
      _objc_copyWeak(auStack_90,auStack_70);
      lVar1 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = lVar1;
      _objc_retainBlock();
      pcVar2 = local_60;
      local_88 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_methodSignatureForSelector__0269e190,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_c0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_60);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSelector__0269e1b0,local_68);
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = &cf___;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = &cf_nx_RdaggSWT;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = &cf_Sm;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = &cf_nx;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setArgument_atIndex__0269eae8,&local_d0,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setArgument_atIndex__0269eae8,&local_d8,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setArgument_atIndex__0269eae8,&local_e0,4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setArgument_atIndex__0269eae8,&local_78,5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setArgument_atIndex__0269eae8,&local_e8,6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setArgument_atIndex__0269eae8,&local_88,7);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_invoke_0269e1b8);
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_98,0);
      _objc_destroyWeak(auStack_90);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_destroyWeak(auStack_70);
    }
    local_58 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

