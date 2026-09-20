// FUN_01f8e354 @ 01f8e354

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01f8e354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *local_1a8;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined *local_d8;
  bool local_c9;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined **local_90;
  undefined *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  cfstringStruct *local_40;
  ulong local_38 [2];
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_2);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  local_48 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar2;
    for (local_60 = 0; uVar4 = local_60, uVar3 = local_38[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0), uVar4 < uVar3;
        local_60 = local_60 + 1) {
      uVar4 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_title)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_70 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_68;
      local_78 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_79 = (byte)uVar3;
      puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrVPPickSheetAct__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar8);
      uVar4 = local_78;
      ppuVar6 = &local_b8;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_01f994d0;
      local_a0 = &DAT_0257cdd8;
      local_88 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = uVar4;
      _objc_retainBlock();
      ppuVar7 = ppuVar6;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      local_90 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      if (((local_79 & 1) == 0) ||
         (pcVar2 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_respondsToSelector__026ca818,
                    PTR_s_addDestructiveButtonTitle_target_0269f800), ((ulong)pcVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_addBtnTitle_target_sel__0269d278,local_70,local_28,local_88);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_addDestructiveButtonTitle_target_0269f800,local_70,local_28,
                   local_88);
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    local_180 = local_40;
    if (local_40 == (cfstringStruct *)0x0) {
      local_180 = &cf_Sm;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,local_180,0);
    puVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
    local_c9 = ((ulong)puVar8 & 1) == 0;
    if (local_c9) {
      local_188 = (undefined *)0x0;
    }
    else {
      local_188 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_188;
    }
    local_c9 = !local_c9;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_188;
    if (local_c9) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    pcVar2 = local_58;
    bVar1 = local_c0 == (undefined *)0x0;
    if (bVar1) {
      local_1a8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_findTopVCView_026a0f78);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1a8;
    }
    else {
      local_1a8 = local_c0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310,local_1a8);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

