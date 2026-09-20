// showIconInputForTab: @ 019b89f4

/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarButtonActionViewController::showIconInputForTab_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  ID local_40;
  ID local_38;
  undefined *local_30;
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
  IVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar2,&DAT_028e442b,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_storedIconForTabIndex_cfg__026ba978,local_28,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_hasPrefix__0269d320,&cf_svg_);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_image_);
    if (((IVar2 & 1) != 0) ||
       (IVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_imagepair_),
       (IVar2 & 1) != 0)) {
      _objc_storeStrong(&local_40,&::cf___);
    }
  }
  else {
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,4);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((IVar2 != 0) &&
       (pcVar4 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,
                  PTR_s_setTextFieldDefaultText__0269fd98), ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelFloatingIconInput__026ba9e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmFloatingIconInput__026ba9f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_iconAlert__026ba9f8,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

