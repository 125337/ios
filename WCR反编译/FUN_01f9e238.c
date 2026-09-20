// FUN_01f9e238 @ 01f9e238

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01f9e238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *local_1a0;
  undefined *local_180;
  cfstringStruct *local_178;
  undefined *local_c8;
  bool local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined *local_70;
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
      puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrVPSettingsSheetAct__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar9);
      uVar4 = local_68;
      local_70 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &local_a8;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_01f9fa78;
      local_90 = &DAT_0257cdd8;
      local_78 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = uVar4;
      _objc_retainBlock();
      ppuVar7 = ppuVar6;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      local_80 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_style_026a2028);
      if ((uVar4 == 1) &&
         (pcVar8 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_respondsToSelector__026ca818,
                    PTR_s_addDestructiveButtonTitle_target_0269f800), pcVar2 = local_58,
         ((ulong)pcVar8 & 1) != 0)) {
        uVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addDestructiveButtonTitle_target_0269f800,uVar4,local_28,local_70);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        pcVar2 = local_58;
        uVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,uVar4,local_28,local_70);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
    }
    local_178 = local_40;
    if (local_40 == (cfstringStruct *)0x0) {
      local_178 = &cf_Sm;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,local_178,0);
    puVar9 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
    local_b9 = ((ulong)puVar9 & 1) == 0;
    if (local_b9) {
      local_180 = (undefined *)0x0;
    }
    else {
      local_180 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_180;
    }
    local_b9 = !local_b9;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_180;
    if (local_b9) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    pcVar2 = local_58;
    bVar1 = local_b0 == (undefined *)0x0;
    if (bVar1) {
      local_1a0 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_findTopVCView_026a0f78);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_1a0;
    }
    else {
      local_1a0 = local_b0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310,local_1a0);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

