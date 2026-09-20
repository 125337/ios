// editCapsuleCornerRadius @ 01e51e88

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineTelegramGroupingViewController::editCapsuleCornerRadius
          (WCRefineTelegramGroupingViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ID IVar5;
  double in_d0;
  cfstringStruct *local_118;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  char *local_90;
  undefined1 auStack_88 [8];
  undefined **local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [3];
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
  pcVar2 = "WCUIAlertView";
  local_38 = in_d0;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_40 = pcVar2;
    _objc_initWeak(auStack_48,local_28);
    pcVar2 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_VW,&cf_JSWVb_0YuzzbeQ);
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldPlaceHolder__026b6520);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldPlaceHolder__026b6520,&cf_1);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar2 & 1) != 0) {
      local_71 = false;
      if (local_38 <= 0.0) {
        local_118 = &::cf___;
      }
      else {
        local_118 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_118;
      }
      local_71 = local_38 > 0.0;
      (*(code *)PTR__objc_retain_02578638)();
      local_68[0] = local_118;
      if ((local_71 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_68[0]);
      _objc_storeStrong(local_68,0);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,2);
    }
    pcVar2 = local_50;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    ppuVar3 = &local_b0;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01e52474;
    local_98 = &DAT_02579c60;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = pcVar2;
    _objc_copyWeak(auStack_88,auStack_48);
    _objc_retainBlock();
    ppuVar4 = &local_e0;
    local_e0 = puVar1;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01e52838;
    local_c8 = &DAT_0257cdd8;
    local_80 = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = ppuVar3;
    _objc_retainBlock();
    ppuVar3 = ppuVar4;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    IVar5 = local_28;
    local_b8 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _class_replaceMethod(IVar5,PTR_s_wcrTGConfirmCapsuleCorner__026c68d0,local_b8,"v@:@");
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
                 PTR_s_wcrTGConfirmCapsuleCorner__026c68d0);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_80,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_50,0);
    _objc_destroyWeak(auStack_48);
  }
  return;
}

