// FUN_01578b30 @ 01578b30

byte FUN_01578b30(void)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  double in_d3;
  char *local_58;
  char *local_50;
  undefined4 local_44;
  undefined *local_40;
  cfstringStruct *local_38;
  char *local_30;
  char *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = &cf_WCTimeLineViewController;
  _NSClassFromString();
  pcVar2 = "MMPageSheetConfig";
  local_20 = pcVar1;
  _objc_getClass();
  pcVar3 = "MMPageSheetAdapter";
  local_28 = pcVar2;
  _objc_getClass();
  if (((local_20 == (cfstringStruct *)0x0) || (local_28 == (char *)0x0)) || (pcVar3 == (char *)0x0))
  {
    local_11 = 0;
  }
  else {
    pcVar1 = local_20;
    local_30 = pcVar3;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_38 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar4;
    if ((local_38 == (cfstringStruct *)0x0) || (puVar4 == (undefined *)0x0)) {
      local_11 = 0;
      local_44 = 1;
    }
    else {
      pcVar2 = local_28;
      _objc_alloc_init();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setEnableDragToClose__026aa740,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
      pcVar2 = local_30;
      _objc_alloc_init();
      local_58 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setPageSheetConfig__026aa758,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHostViewController__026a58c8,local_40)
      ;
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(in_d3 * 0.7,local_58,PTR_s_setContentHeight__026aa760);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showWithAnimated__0269e5a8,1);
      local_11 = 1;
      local_44 = 1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

