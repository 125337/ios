// FUN_003aba34 @ 003aba34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003aba34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined **local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  char *local_50;
  undefined4 local_44;
  char *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  pcVar4 = "WCUIActionSheet";
  _objc_getClass();
  local_40 = pcVar4;
  if ((local_28 == (cfstringStruct *)0x0) || (pcVar4 == (char *)0x0)) {
    local_44 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar4;
    for (local_58 = (cfstringStruct *)0x0; pcVar11 = local_58, pcVar5 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0), pcVar11 < pcVar5;
        local_58 = (cfstringStruct *)((long)&local_58->field0_0x0 + 1)) {
      pcVar11 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_60 = pcVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrGroupingSheetAction__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar11 = local_60;
      local_68 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar11;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      pcVar11 = local_70;
      ppuVar8 = &local_a0;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_003dff80;
      local_88 = &DAT_0257cdd8;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = pcVar11;
      _objc_retainBlock();
      ppuVar9 = ppuVar8;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar8);
      local_78 = ppuVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      pcVar11 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_destructive_0269fbf8);
      if (((ulong)pcVar11 & 1) == 0) {
        local_150 = &cf_addBtnTitle_target_sel_;
        _NSSelectorFromString();
      }
      else {
        local_150 = &cf_addDestructiveButtonTitle_target_sel_;
        _NSSelectorFromString();
      }
      local_a8 = local_150;
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_150);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar11 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_selected_026a2ec0);
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
        if (((ulong)pcVar11 & 1) == 0) {
          local_168 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_d8 = local_168;
        }
        else {
          local_b8 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          local_160 = local_b8;
          if (local_b8 == (cfstringStruct *)0x0) {
            local_160 = &cf___;
          }
          local_168 = &cf__;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf__,PTR_s_stringByAppendingString__0269d398,local_160);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          local_c8 = local_168;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_168;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
        }
        if (bVar3) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_a8,local_b0,local_28,local_68);
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_60,0);
    }
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    }
    pcVar10 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar4 = local_50;
    puVar6 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar10 & 1) != 0) {
      pcVar11 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar11);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

