// syncEditingProviderModels @ 017ddff8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::syncEditingProviderModels(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined1 *local_108;
  undefined1 local_f9;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined1 auStack_d0 [15];
  undefined1 local_c1;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined1 auStack_98 [15];
  undefined1 local_89;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingProvider_026b5450);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  _objc_initWeak(auStack_48,local_28);
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_supportsChat_026aad10);
  IVar2 = local_28;
  puVar4 = local_40;
  if ((IVar3 & 1) != 0) {
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_017de724;
    local_70 = &DAT_02579c60;
    _objc_copyWeak(auStack_60,auStack_48);
    IVar3 = local_38;
    local_89 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_actionWithTitle_block__026b5340,&cf___jW,&local_88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    local_89 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_60);
  }
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_supportsImage_026aad18);
  IVar2 = local_28;
  puVar4 = local_40;
  if ((IVar3 & 1) != 0) {
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_017de798;
    local_a8 = &DAT_02579c60;
    _objc_copyWeak(auStack_98,auStack_48);
    local_c1 = 1;
    IVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_actionWithTitle_block__026b5340,&cf_euV_jW,&local_c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    local_c1 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_98);
  }
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_supportsVideo_026aad20);
  IVar2 = local_28;
  puVar4 = local_40;
  if ((IVar3 & 1) != 0) {
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_017de80c;
    local_e0 = &DAT_02579c60;
    _objc_copyWeak(auStack_d0,auStack_48);
    local_f9 = 1;
    IVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_actionWithTitle_block__026b5340,&cf__jW,&local_f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    local_f9 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_d8,0);
    _objc_destroyWeak(auStack_d0);
  }
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  IVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_block_026b4f38);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar4 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_108,0);
  }
  else {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_showSheetTitle_actions__026b5348,puVar1,local_40);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

