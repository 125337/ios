// presentFontListOnHost: @ 019d6404

/* Function Stack Size: 0x18 bytes */

ID WCRefineFontBeautifyViewController::presentFontListOnHost_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_reloadFontItems_026bae90);
    puVar1 = PTR_WCRefineFontListViewController_026cf220;
    _objc_alloc_init();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_20);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fontItems_026bae98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllItems__026a27d0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setSelectedPostScriptName__026baea0,local_68);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_80 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedPath__026baea8,local_80);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8);
    _objc_setAssociatedObject(local_48,&DAT_028e4458,local_20,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1);
    puVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_34 = 1;
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

