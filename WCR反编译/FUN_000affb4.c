// FUN_000affb4 @ 000affb4

void FUN_000affb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  double dVar5;
  double in_d3;
  double local_188;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_configuredActionMenuEntries_0269e540);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineActionMenuViewController_026ce278;
  local_40 = puVar2;
  _objc_alloc_init();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setActionOptions__0269e5d8,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMainTabBarVC__0269e5a0,local_28);
  pcVar4 = "MMPageSheetConfig";
  _objc_getClass();
  local_60 = pcVar4;
  _objc_alloc_init();
  local_68 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setValue_forKey__0269d300,&cf_bR_O,&cf_title);
  pcVar4 = local_68;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_setValue_forKey__0269d300,puVar2,&cf_navLeftStyle);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = local_68;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_setValue_forKey__0269d300,puVar2,&cf_enableEdgeSlideToClose);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = local_68;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_setValue_forKey__0269d300,puVar2,&cf_enableDragToClose);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = local_68;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_setValue_forKey__0269d300,puVar2,&cf_isAllowTapBgMaskToClose);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = "MMPageSheetAdapter";
  _objc_getClass();
  local_70 = pcVar4;
  _objc_alloc_init();
  local_78 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_setValue_forKey__0269d300,local_68,&cf_pageSheetConfig);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setValue_forKey__0269d300,local_48,&cf_hostViewController);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  lVar1 = (long)puVar2 * 0x3c + 100;
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_188 = in_d3 * 0.7;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = local_78;
  dVar5 = (double)NEON_ucvtf(lVar1);
  if (dVar5 < local_188) {
    local_188 = (double)NEON_ucvtf(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_188,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_setValue_forKey__0269d300,puVar2,&cf_contentHeight);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_setAssociatedObject(local_48,&DAT_028c8088,local_78,1);
  pcVar4 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_showWithAnimated__0269e5a8);
  if (((ulong)pcVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_showWithAnimated__0269e5a8,1);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

