// FUN_0025c224 @ 0025c224

void FUN_0025c224(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_8c;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_WCRefineEmoticonFunctionViewController;
  _NSClassFromString();
  local_18 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_h_n_uNS_u);
  }
  else {
    _objc_alloc_init();
    local_20 = pcVar1;
    FUN_0025c6bc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineHelper_026ce000;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar2;
    if ((local_28 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,
                  PTR_s_PushViewController_animated__0269cd40), ((ulong)pcVar1 & 1) == 0)) {
      if (local_28 == (cfstringStruct *)0x0) {
        while( true ) {
          puVar2 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar2 == (undefined *)0x0) break;
          puVar3 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_40[0];
          local_40[0] = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar3 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_40[0];
        local_8c = 0;
        if (puVar3 != (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIAlertController_026ce178,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_8c = (uint)puVar2;
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((local_8c & 1) != 0) {
          puVar3 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_presentingViewController_026a0db0)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_40[0];
          local_40[0] = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if (local_40[0] == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
          local_44 = 0;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_20);
          local_50 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_presentViewController_animated_c_0269d2b0,puVar2,1,0);
          local_44 = 1;
          _objc_storeStrong(&local_50,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_pushViewController_animated__0269d590,local_20,1);
        local_44 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_PushViewController_animated__0269cd40,local_20,1);
      local_44 = 1;
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    _objc_storeStrong(&local_20,0);
  }
  return;
}

