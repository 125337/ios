// FUN_001ae57c @ 001ae57c

void FUN_001ae57c(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = &cf_MMUICommonUtil;
  _NSClassFromString();
  pcVar3 = &cf_getBarButtonWithImageName_target_action_style_accessibility_;
  local_28 = pcVar2;
  _NSSelectorFromString();
  local_40 = pcVar3;
  if ((local_28 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = 0;
    local_44 = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_methodSignatureForSelector__0269e190,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_18 = 0;
      local_44 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSelector__0269e1b0,local_40);
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_20;
      local_60 = &cf_icons_outlined_search;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar1;
      local_70 = PTR_s_WCRefine_onContactsTopBarSearchB_0269fe48;
      local_78 = 2;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = &cf_d__;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_60,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_68,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_70,4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_78,5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_80,6);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_invoke_0269e1b8);
      local_88 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getReturnValue__0269e1c0,&local_88);
      uVar1 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_44 = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

