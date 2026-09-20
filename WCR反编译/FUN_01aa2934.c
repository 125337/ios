// FUN_01aa2934 @ 01aa2934

/* WARNING: Type propagation algorithm not settling */

void FUN_01aa2934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char *pcVar7;
  ulong uVar8;
  cfstringStruct *local_160;
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
  ulong local_38 [3];
  
  local_38[2] = 0;
  _objc_storeStrong(local_38 + 2,param_1);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_2);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_48 = pcVar1;
  if ((local_38[2] == 0) || (pcVar1 == (char *)0x0)) {
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar1;
    for (local_60 = 0; uVar8 = local_60, uVar2 = local_38[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0), uVar8 < uVar2;
        local_60 = local_60 + 1) {
      uVar8 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrGroupSheetAction__lu_);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar8 = local_68;
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_handler_0269fbe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &local_a8;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_01accc3c;
      local_90 = &DAT_0257cdd8;
      local_78 = uVar8;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = uVar8;
      _objc_retainBlock();
      ppuVar6 = ppuVar5;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      local_80 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_class_0269cd60);
      _class_replaceMethod();
      uVar8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_destructive_0269fbf8);
      if (((uVar8 & 1) == 0) ||
         (pcVar7 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_respondsToSelector__026ca818,
                    PTR_s_addDestructiveButtonTitle_target_0269f800), pcVar1 = local_58,
         puVar3 = PTR_s_addDestructiveButtonTitle_target_0269f800, ((ulong)pcVar7 & 1) == 0)) {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addBtnTitle_target_sel__0269d278);
        pcVar1 = local_58;
        puVar3 = PTR_s_addBtnTitle_target_sel__0269d278;
        if (((ulong)pcVar7 & 1) != 0) {
          uVar8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3,uVar8,local_38[2],local_70);
          (*(code *)PTR__objc_release_02578630)(uVar8);
        }
      }
      else {
        uVar8 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3,uVar8,local_38[2],local_70);
        (*(code *)PTR__objc_release_02578630)(uVar8);
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
      if (local_40 == (cfstringStruct *)0x0) {
        local_160 = &cf_Sm;
      }
      else {
        local_160 = local_40;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,local_160,0);
    }
    pcVar7 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar1 = local_58;
    puVar3 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar7 & 1) != 0) {
      uVar8 = local_38[2];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar8);
    }
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

