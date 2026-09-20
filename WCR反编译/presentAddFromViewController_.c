// presentAddFromViewController: @ 018c49a8

/* Function Stack Size: 0x18 bytes */

void WCRefineChatToolbarViewController::presentAddFromViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined *local_40;
  undefined *local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 != 0;
  if (bVar1) {
    puVar2 = PTR_WCRChatToolbarActionsViewController_026cf108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRChatToolbarActionsViewController_026cf108,PTR_s_new_0269d288);
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setShowsDismissButton__026b7e48,1);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar4 = 0x4085e00000000000;
    FUN_018c4b98();
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d2,uVar4,local_40,PTR_s_setPreferredContentSize__026b7e50);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    FUN_018c4bc4(DAT_02324258,local_40,&cf_WCRChatToolbarList);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

