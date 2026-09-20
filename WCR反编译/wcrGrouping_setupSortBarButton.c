// wcrGrouping_setupSortBarButton @ 0035b624

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_setupSortBarButton(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined *local_60;
  ID local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  pcVar1 = &cf_MMUICommonUtil;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_getBarButtonWithImageName_target_action_style_accessibility_;
  local_30 = pcVar1;
  _NSSelectorFromString();
  local_38 = pcVar2;
  if (local_30 != (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_methodSignatureForSelector__0269e190,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_30);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSelector__0269e1b0,local_38);
        (*(code *)PTR__objc_retain_02578638)();
        IVar5 = local_18;
        local_50 = &cf_dot_3_regular;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = IVar5;
        local_60 = PTR_s_wcrGrouping_onMoreButtonTapped_026a2678;
        local_68 = 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = &cf_fY;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setArgument_atIndex__0269eae8,&local_50,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setArgument_atIndex__0269eae8,&local_58,3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setArgument_atIndex__0269eae8,&local_60,4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setArgument_atIndex__0269eae8,&local_68,5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setArgument_atIndex__0269eae8,&local_70,6);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_invoke_0269e1b8);
        local_78 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getReturnValue__0269e1c0,&local_78);
        _objc_storeStrong(&local_28,local_78);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_58,0);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  if (local_28 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = local_28;
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_setAssociatedObject(local_18,&DAT_028ca0e5,local_28,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_attachMoreButtonLong_026a2680);
  _objc_storeStrong(&local_28,0);
  return;
}

