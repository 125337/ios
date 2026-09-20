// FUN_000f52cc @ 000f52cc

void FUN_000f52cc(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = &cf_MMUICommonUtil;
  _NSClassFromString();
  pcVar3 = &cf_getBarButtonWithImageName_target_action_style_accessibility_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_50 = pcVar3;
  if ((local_38 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar2 & 1) == 0)) {
    local_28 = 0;
    local_54 = 1;
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_methodSignatureForSelector__0269e190,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_28 = 0;
      local_54 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelector__0269e1b0,local_50);
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_30;
      local_70 = &cf_icons_outlined_search;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar1;
      local_80 = PTR_s_WCRefine_onChatTopBarSearchButto_0269e928;
      local_88 = 2;
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_90;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_storeStrong(&local_90,&cf___);
      }
      puVar4 = local_90;
      puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_90;
      local_90 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        _objc_storeStrong(&local_90,&cf_d__J_YU_);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_70,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_78,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_80,4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_88,5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_90,6);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_invoke_0269e1b8);
      local_98 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getReturnValue__0269e1c0,&local_98);
      uVar1 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      local_54 = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

