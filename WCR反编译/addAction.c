// addAction @ 018d68fc

/* Function Stack Size: 0x10 bytes */

void WCRChatToolbarActionsViewController::addAction(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined *local_80 [3];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRChatToolbarActionPickerViewController_026cf120;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRChatToolbarActionPickerViewController_026cf120,PTR_s_new_0269d288);
  local_38 = puVar1;
  _objc_initWeak(auStack_40,local_28);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_018d6bc0;
  local_50 = &DAT_0258a078;
  _objc_copyWeak(auStack_48,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectionHandler__026b8238,&local_68);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithRootViewController__0269d2a0,local_38);
  local_80[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = 0x4085e00000000000;
  FUN_018c4b98();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d2,uVar3,local_80[0],PTR_s_setPreferredContentSize__026b7e50);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  FUN_018c4bc4(DAT_02324258,local_80[0],&cf_WCRChatToolbarAdd);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_80[0],1,0);
  _objc_storeStrong(local_80);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

