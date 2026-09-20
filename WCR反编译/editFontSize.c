// editFontSize @ 01e51500

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineTelegramGroupingViewController::editFontSize
          (WCRefineTelegramGroupingViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ID IVar7;
  double in_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  char *local_78;
  undefined1 auStack_70 [8];
  undefined **local_68 [3];
  char *local_50;
  undefined1 auStack_48 [8];
  char *local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((in_d0 < 12.0) || (local_38 = in_d0, 20.0 < in_d0)) {
    local_38 = 17.0;
  }
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_40 = pcVar2;
    _objc_initWeak(auStack_48,local_28);
    pcVar2 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_h__W_SO_Y_,0);
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldPlaceHolder__026b6520);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldPlaceHolder__026b6520,&cf_1);
    }
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar2 = local_50;
    puVar1 = PTR_s_setTextFieldDefaultText__0269fd98;
    if (((ulong)pcVar3 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,2);
    }
    pcVar2 = local_50;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    ppuVar5 = &local_98;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01e51aa8;
    local_80 = &DAT_02579c60;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = pcVar2;
    _objc_copyWeak(auStack_70,auStack_48);
    _objc_retainBlock();
    ppuVar6 = &local_c8;
    local_c8 = puVar1;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01e51dbc;
    local_b0 = &DAT_0257cdd8;
    local_68[0] = ppuVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = ppuVar5;
    _objc_retainBlock();
    ppuVar5 = ppuVar6;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar6);
    IVar7 = local_28;
    local_a0 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _class_replaceMethod(IVar7,PTR_s_wcrTGConfirmFontSize__026c68c0,local_a0,"v@:@");
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_wcrTGConfirmFontSize__026c68c0);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(local_68,0);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
    _objc_destroyWeak(auStack_48);
  }
  return;
}

