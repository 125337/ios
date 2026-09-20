// FUN_01999a34 @ 01999a34

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01999a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *local_228;
  undefined *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1e8;
  undefined *local_108;
  bool local_f9;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined **local_c0;
  cfstringStruct *local_b8;
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
  long local_48;
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
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  local_50 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_54 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar2;
    for (local_68 = 0; uVar4 = local_68, uVar3 = local_38[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0), uVar4 < uVar3;
        local_68 = local_68 + 1) {
      uVar4 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_70 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrFileSheetAct__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar11;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar11);
      uVar4 = local_70;
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &local_b0;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_019b3114;
      local_98 = &DAT_0257cdd8;
      local_80 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = uVar4;
      _objc_retainBlock();
      ppuVar10 = ppuVar9;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar9);
      local_88 = ppuVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      uVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_style_026a2028);
      if ((uVar4 == 1) &&
         (pcVar6 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_60,PTR_s_respondsToSelector__026ca818,
                    PTR_s_addDestructiveButtonTitle_target_0269f800), pcVar2 = local_60,
         ((ulong)pcVar6 & 1) != 0)) {
        uVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addDestructiveButtonTitle_target_0269f800,uVar4,local_28,local_78);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        pcVar2 = local_60;
        uVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,uVar4,local_28,local_78);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
    }
    if (local_48 == 0) {
      local_200 = local_40;
      if (local_40 == (cfstringStruct *)0x0) {
        local_200 = &cf_Sm;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,local_200,0);
    }
    else {
      pcVar7 = &cf_wcrFileSheetCancel_;
      _NSSelectorFromString();
      ppuVar9 = &local_e8;
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_019b319c;
      local_d0 = &DAT_0257cdd8;
      lVar8 = local_48;
      local_b8 = pcVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = lVar8;
      _objc_retainBlock();
      ppuVar10 = ppuVar9;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar9);
      local_c0 = ppuVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      local_1e8 = local_40;
      if (local_40 == (cfstringStruct *)0x0) {
        local_1e8 = &cf_Sm;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,local_1e8,local_28,local_b8);
      _objc_storeStrong(&local_c8,0);
    }
    puVar11 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
    local_f9 = ((ulong)puVar11 & 1) == 0;
    if (local_f9) {
      local_208 = (undefined *)0x0;
    }
    else {
      local_208 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_208;
    }
    local_f9 = !local_f9;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_208;
    if (local_f9) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    pcVar2 = local_60;
    bVar1 = local_f0 == (undefined *)0x0;
    if (bVar1) {
      local_228 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_findTopVCView_026a0f78);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_228;
    }
    else {
      local_228 = local_f0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310,local_228);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

