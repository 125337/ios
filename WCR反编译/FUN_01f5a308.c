// FUN_01f5a308 @ 01f5a308

/* WARNING: Type propagation algorithm not settling */

void FUN_01f5a308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined *local_78;
  ulong local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38 [3];
  
  local_38[2] = 0;
  _objc_storeStrong(local_38 + 2,param_1);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_2);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_58 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_5c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = 0;
    local_68 = pcVar1;
    while( true ) {
      uVar10 = local_70;
      uVar2 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0);
      if (uVar2 <= uVar10) break;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrVCListSheetAct__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar5 = local_40;
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &local_b0;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_01f5da10;
      local_98 = &DAT_0257cdd8;
      local_80 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = uVar5;
      _objc_retainBlock();
      ppuVar9 = ppuVar8;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar8);
      local_88 = ppuVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_class_0269cd60);
      _class_replaceMethod();
      pcVar1 = local_68;
      uVar10 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,uVar10,local_38[2],local_78);
      (*(code *)PTR__objc_release_02578630)(uVar10);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_80,0);
      local_70 = local_70 + 1;
    }
    lVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (lVar6 != 0) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addDestructiveButtonTitle_target_0269f800);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar7 = &cf_wcrVCListSheetDestructive_;
        _NSSelectorFromString();
        uVar5 = local_50;
        ppuVar8 = &local_e8;
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_01f5da98;
        local_d0 = &DAT_0257cdd8;
        local_b8 = pcVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar5;
        _objc_retainBlock();
        ppuVar9 = ppuVar8;
        _imp_implementationWithBlock();
        (*(code *)PTR__objc_release_02578630)(ppuVar8);
        local_c0 = ppuVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_class_0269cd60);
        _class_replaceMethod();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_addDestructiveButtonTitle_target_0269f800,local_48,local_38[2],
                   local_b8);
        _objc_storeStrong(&local_c8,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_68;
    uVar10 = local_38[2];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

