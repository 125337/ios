// chooseSortMode @ 01fc4474

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::chooseSortMode(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  char *local_38;
  undefined1 *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_30 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = local_30;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wechatThemeBeautifySortMode_026b0e48);
    pcVar1 = &cf_Ty;
    if (puVar4 != (undefined1 *)0x0) {
      pcVar1 = &cf_Ty;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_sortByName_026c2748);
    pcVar2 = local_38;
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wechatThemeBeautifySortMode_026b0e48);
    pcVar1 = &cf_e;
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = &cf_e;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_sortByTime_026c2750);
    pcVar2 = local_38;
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wechatThemeBeautifySortAscending_026b0e50);
    pcVar1 = &cf_9e_NM_;
    if (((ulong)puVar4 & 1) == 0) {
      pcVar1 = &cf_9e_NGS_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_toggleSortOrder_026be9d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_38;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

