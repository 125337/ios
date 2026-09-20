// FUN_01d38174 @ 01d38174

void FUN_01d38174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long lVar10;
  cfstringStruct *local_f8;
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
  cfstringStruct *local_58;
  undefined4 local_4c;
  char *local_48;
  ulong local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_48 = pcVar1;
  if ((local_28 == 0) || (pcVar1 == (char *)0x0)) {
    local_4c = 1;
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_d8 = &cf_wcrScheduledTaskSheet;
    }
    else {
      local_d8 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_d8;
    pcVar1 = local_48;
    _objc_alloc();
    if (local_30 == (cfstringStruct *)0x0) {
      local_f8 = &cf___;
    }
    else {
      local_f8 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_f8);
    local_60 = pcVar1;
    for (local_68 = 0; uVar4 = local_68, uVar3 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), uVar4 < uVar3;
        local_68 = local_68 + 1) {
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_70 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar4 = local_70;
      local_78 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &local_b0;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_01d40a4c;
      local_98 = &DAT_0257cdd8;
      local_80 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = uVar4;
      _objc_retainBlock();
      ppuVar8 = ppuVar7;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      local_88 = ppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod();
      pcVar9 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278)
      ;
      pcVar1 = local_60;
      puVar5 = PTR_s_addBtnTitle_target_sel__0269d278;
      if (((ulong)pcVar9 & 1) != 0) {
        uVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar5,uVar4,local_28,local_78);
        (*(code *)PTR__objc_release_02578630)(uVar4);
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
    pcVar9 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar1 = local_60;
    puVar5 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar9 & 1) != 0) {
      lVar10 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar5);
      (*(code *)PTR__objc_release_02578630)(lVar10);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

