// presentFromViewController:chatName: @ 01f844b0

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackPickerViewController::presentFromViewController_chatName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  double in_d3;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8 [5];
  char *local_90;
  undefined *local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  uint local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_38 == 0)) {
    local_44 = 1;
    goto LAB_01f84bc4;
  }
  puVar2 = PTR_WCRefineVoicePackPickerViewController_026cea10;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = puVar4 + -1;
  local_58 = puVar4;
  if (puVar2 == (undefined *)0x0) {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle__0269cef0,&::cf_S);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_pushViewController_animated__0269d590,local_50,1);
    }
    local_44 = (uint)(lVar1 != 0);
    _objc_storeStrong(&local_60,0);
    if (local_44 == 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_01f84668;
    }
  }
  else {
LAB_01f84668:
    pcVar5 = "MMPageSheetAdapter";
    _objc_getClass(puVar2);
    pcVar6 = "MMPageSheetConfig";
    local_68 = pcVar5;
    _objc_getClass();
    local_70 = pcVar6;
    if ((local_68 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle__0269cef0,&::cf_S);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_e8,1);
      _objc_storeStrong(&local_e8,0);
      local_44 = 0;
    }
    else {
      _objc_alloc_init();
      local_78 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_setTitle__0269cef0,&::cf_S);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setNavLeftStyle__026aa730,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
      pcVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setEnableDragToClose__026aa740);
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setEnableDragToClose__026aa740,1);
      }
      pcVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setIsAllowTapBgMaskToClose__026aa748);
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1)
        ;
      }
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setNavigationBarHidden__026c9b00,1);
      puVar2 = PTR_WCRVPPickerSheetProxy_026cf7d0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRVPPickerSheetProxy_026cf7d0,PTR_s_new_0269d288);
      local_88 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setNav__026c9b08,local_80);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setSelfRef__0269fb58,local_88);
      pcVar5 = local_68;
      _objc_alloc_init();
      local_90 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setPageSheetConfig__026aa758,local_78);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHostViewController__026a58c8,local_80)
      ;
      puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d3 * DAT_02323d60,local_90,PTR_s_setContentHeight__026aa760);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setSheet__026aa770,local_90);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHostSheet__026c8ee0,local_90);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setPageSheetMode__026c9830,1);
      _objc_setAssociatedObject(local_90,DAT_028c6ac8,local_88);
      _objc_setAssociatedObject(local_90,DAT_028c6ad0,local_80,1);
      _objc_setAssociatedObject(local_80,DAT_028c6ad8,local_90,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_showWithAnimated__0269e5a8,1);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_50;
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_01f84bf0;
      local_c8 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_80;
      local_c0 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8[0] = puVar3;
      _dispatch_async(puVar2,&local_e0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_44 = 1;
      _objc_storeStrong(local_b8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_50,0);
LAB_01f84bc4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

