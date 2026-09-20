// clearUnreadMenuItemData @ 0016d160

/* Function Stack Size: 0x10 bytes */

ID WCRefineClearUnreadMsgHook::clearUnreadMenuItemData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar3 = "RightTopMenuItemBtnData";
    _objc_getClass();
    local_30 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = &cf_icons_filled_eyes_on;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_genItemWithID_title_imageName_ac_0269f7d8,
                 &cf_WCRefine_mainFrame_menu_clearUnread,&::cf___,&cf_icons_filled_eyes_on,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

