// FUN_00906f68 @ 00906f68

void FUN_00906f68(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined1 local_49;
  ulong local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_getRootViewController_026aa000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_getTopViewController_026aa008);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  if (uVar4 == 0) {
    _objc_storeStrong(&local_30,local_28);
  }
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_findNavigationController__026aa010,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_40 = uVar5;
    if (uVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      if ((uVar4 & 1) != 0) {
        _objc_storeStrong(&local_40,local_30);
      }
    }
    local_49 = 0;
    bVar2 = false;
    uVar1 = local_40 == 0;
    if ((bool)uVar1) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_navigationController);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar4 != 0;
      local_49 = uVar1;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar1 = local_49;
    }
    local_49 = uVar1;
    if (bVar2) {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_navigationController);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_40;
      local_40 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    pcVar7 = &cf_LogViewerViewController;
    _NSClassFromString();
    local_58 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_34 = 1;
    }
    else {
      _objc_alloc_init();
      local_60 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_setLogType__026aa080);
      if (((ulong)pcVar7 & 1) != 0) {
        local_68 = PTR_s_setLogType__026aa080;
        pcVar7 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setLogType__026aa080);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_methodSignatureForSelector__0269e190,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar7;
          if (pcVar7 != (cfstringStruct *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSInvocation_026ce208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSInvocation_026ce208,
                       PTR_s_invocationWithMethodSignature__0269e1a0,pcVar7);
            _objc_retainAutoreleasedReturnValue();
            local_78 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setSelector__0269e1b0,local_68);
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTarget__0269e1a8,local_60);
            uVar3 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_activeLogType_026aa060);
            local_80 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_setArgument_atIndex__0269eae8,&local_80,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_invoke_0269e1b8);
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(&local_70,0);
        }
      }
      bVar2 = local_40 == 0;
      if (bVar2) {
        puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setModalPresentationStyle__0269d2a8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_88,1);
        _objc_storeStrong(&local_88,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_pushViewController_animated__0269d590,local_60,1);
      }
      local_34 = (uint)!bVar2;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

