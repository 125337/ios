// wcr_bindAnonymousAtSheetKeyboardBehavior: @ 009d9ec8

/* Function Stack Size: 0x18 bytes */

void WCRefineAnonymousAtHelper::wcr_bindAnonymousAtSheetKeyboardBehavior_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ulong local_60;
  undefined *local_58;
  ID local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    local_48 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_hostViewController_026a5b30);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hostViewController_026a5b30);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    IVar3 = local_28;
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_findTextViewInView__026ab030);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_50 == 0) {
      local_3c = 1;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setContentHeight__026aa760);
      uVar1 = local_38;
      puVar4 = PTR_s_setContentHeight__026aa760;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_anonymousAtInputSheetHeight_026ab038);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,puVar4);
      }
      puVar4 = PTR_WCRAnonAtSheetKeyboardBinder_026ceaf8;
      _objc_alloc_init();
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSheet__026aa770,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextView__026ab040,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_attach_026ab048);
      _objc_setAssociatedObject(local_38,&DAT_028e2818,local_58,1);
      local_60 = 0;
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_didCloseBlock_026ab050);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_didCloseBlock_026ab050);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_60;
        local_60 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setDidCloseBlock__026aabf8);
      if ((uVar1 & 1) != 0) {
        _objc_initWeak(auStack_68,local_38);
        uVar2 = local_38;
        puVar4 = PTR_s_setDidCloseBlock__026aabf8;
        ppuVar5 = &local_98;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_009da30c;
        local_80 = &DAT_025816c8;
        _objc_copyWeak(auStack_70,auStack_68);
        uVar1 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar1;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,puVar4);
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
        _objc_storeStrong(&local_78,0);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

