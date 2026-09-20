// FUN_007bbbd8 @ 007bbbd8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007bbbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  char *pcVar8;
  long lVar9;
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
  undefined4 local_50;
  char *local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_40 = pcVar1;
  if (((local_28 == 0) || (pcVar1 == (char *)0x0)) ||
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_50 = 1;
  }
  else {
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_30);
    local_58 = pcVar1;
    for (local_60 = 0; uVar2 = local_60, uVar3 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0), uVar2 < uVar3;
        local_60 = local_60 + 1) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrTGLongPressMenu__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_68;
      local_70 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &local_a8;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_007bcf70;
      local_90 = &DAT_0257ff80;
      local_78 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = uVar2;
      _objc_retainBlock();
      ppuVar7 = ppuVar6;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      lVar9 = local_28;
      local_80 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod(lVar9,local_70,local_80,"v@:@");
      pcVar8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278)
      ;
      pcVar1 = local_58;
      puVar4 = PTR_s_addBtnTitle_target_sel__0269d278;
      if (((ulong)pcVar8 & 1) != 0) {
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4,uVar2,local_28,local_70);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    }
    pcVar8 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar1 = local_58;
    puVar4 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar8 & 1) != 0) {
      lVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4);
      (*(code *)PTR__objc_release_02578630)(lVar9);
    }
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

