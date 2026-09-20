// showIconSourceSelectorForTab: @ 019b7ee4

/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarButtonActionViewController::showIconSourceSelectorForTab_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  char *pcVar2;
  ID IVar3;
  char *local_38;
  char *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hapticGenerator_026b5f48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar3,&DAT_028e442b,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_30 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_eQVhT,local_18,
               PTR_s_showIconInputFromSheet__026ba9a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NKb_gvQb,local_18,
               PTR_s_showPhotoIconModeFromSheet__026ba9a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_18,
               PTR_s_restoreDefaultIconFromSheet__026ba9b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_38;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

