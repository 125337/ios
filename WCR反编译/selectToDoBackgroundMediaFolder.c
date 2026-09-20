// selectToDoBackgroundMediaFolder @ 01eca604

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::selectToDoBackgroundMediaFolder(ID param_1,SEL param_2)

{
  ulong uVar1;
  char *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined1 auStack_78 [8];
  undefined **local_70;
  undefined1 auStack_68 [8];
  undefined *local_60;
  ID local_58;
  ulong local_50;
  ID local_48;
  char *local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_38 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_28;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoBackgroundMediaFolders_026c7b88);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    for (local_50 = 0; uVar1 = local_50, IVar3 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0), uVar1 < IVar3;
        local_50 = local_50 + 1) {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectToDoBgFolder_ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_60 = puVar5;
      _objc_initWeak(auStack_68,local_28);
      IVar3 = local_58;
      ppuVar6 = &local_a0;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_01ecaa30;
      local_88 = &DAT_02581a90;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = IVar3;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retainBlock();
      ppuVar7 = ppuVar6;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      IVar3 = local_28;
      local_70 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar3,local_60,local_70,"v@:@");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,local_58,local_28,local_60);
      _objc_destroyWeak(auStack_78);
      _objc_storeStrong(&local_80);
      _objc_destroyWeak(auStack_68);
      _objc_storeStrong(&local_58,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_e__PgeN9Y,local_28,
               PTR_s_createToDoBackgroundMediaFolder_026c7b98);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_40;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

