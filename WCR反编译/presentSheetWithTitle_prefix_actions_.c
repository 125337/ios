// presentSheetWithTitle:prefix:actions: @ 01940e54

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRefineDoNotDisturbSettingsViewController::presentSheetWithTitle_prefix_actions_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  char *pcVar8;
  ID IVar9;
  cfstringStruct *local_d8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  ulong local_48 [2];
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48[1] = 0;
  _objc_storeStrong(local_48 + 1,param_4);
  local_48[0] = 0;
  _objc_storeStrong(local_48,param_5);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_50 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (uVar2 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_54 = 1;
  }
  else {
    pcVar1 = local_50;
    _objc_alloc();
    if (local_38 == (cfstringStruct *)0x0) {
      local_d8 = &::cf___;
    }
    else {
      local_d8 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_d8);
    local_60 = pcVar1;
    for (local_68 = 0; uVar2 = local_68, uVar3 = local_48[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0), uVar2 < uVar3;
        local_68 = local_68 + 1) {
      uVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_70;
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &local_b0;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_019412e8;
      local_98 = &DAT_0257cdd8;
      local_80 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = uVar2;
      _objc_retainBlock();
      ppuVar7 = ppuVar6;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      local_88 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      pcVar8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278)
      ;
      pcVar1 = local_60;
      puVar4 = PTR_s_addBtnTitle_target_sel__0269d278;
      if (((ulong)pcVar8 & 1) != 0) {
        uVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4,uVar2,local_28,local_78);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
    }
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    }
    pcVar8 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar1 = local_60;
    puVar4 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar8 & 1) != 0) {
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar9);
    }
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(&local_38,0);
  return;
}

