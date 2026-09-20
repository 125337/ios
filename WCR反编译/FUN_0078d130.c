// FUN_0078d130 @ 0078d130

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0078d130(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  byte local_a8;
  undefined **local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined *local_40;
  byte local_31;
  undefined8 local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_31 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCUIActionSheet";
  local_40 = puVar1;
  _objc_getClass();
  local_58 = pcVar2;
  if ((local_40 == (undefined *)0x0) || (pcVar2 == (char *)0x0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_bmo_R_O);
    puVar1 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
               PTR_s_configuredEntriesForListKind__0269ea68,2);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar1;
    for (local_78 = (undefined *)0x0; puVar1 = local_78, puVar3 = local_70,
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0), puVar1 < puVar3;
        local_78 = local_78 + 1) {
      puVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar1;
      FUN_0078e704();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_90 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrOppositeActionList__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      ppuVar5 = &local_e0;
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_0078ee98;
      local_c8 = &DAT_0257fd98;
      uVar4 = local_30;
      local_98 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_88;
      local_c0 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = puVar1;
      local_b0 = local_90;
      local_a8 = local_31 & 1;
      _objc_retainBlock();
      ppuVar6 = ppuVar5;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      puVar1 = local_40;
      local_a0 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _class_replaceMethod(puVar1,local_98,local_a0,"v@:@");
      pcVar2 = local_68;
      puVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,puVar1,local_40,local_98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_68;
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_21 = 1;
    local_5c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

