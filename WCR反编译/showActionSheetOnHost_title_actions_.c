// showActionSheetOnHost:title:actions: @ 00168a28

/* Function Stack Size: 0x28 bytes */

void WCRefineClearSessionHook::showActionSheetOnHost_title_actions_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *local_b8;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  ID local_50;
  ulong local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presenterFromHost__0269f7f8,local_38);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIActionSheet";
  local_50 = IVar2;
  _objc_getClass();
  local_58 = pcVar3;
  if ((local_50 == 0) || (pcVar3 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_5c = 1;
  }
  else {
    _objc_alloc();
    if (local_40 == (cfstringStruct *)0x0) {
      local_b8 = &::cf___;
    }
    else {
      local_b8 = local_40;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle__0269d2f8,local_b8);
    local_68 = pcVar3;
    for (local_70 = 0; uVar5 = local_70, uVar4 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0), uVar5 < uVar4;
        local_70 = local_70 + 1) {
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_title)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_78;
      local_80 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_sel);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      if ((uVar4 == 0) || (uVar5 == 0)) {
        local_5c = 4;
      }
      else {
        if (((uVar6 & 1) == 0) ||
           (pcVar3 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_68,PTR_s_respondsToSelector__026ca818,
                      PTR_s_addDestructiveButtonTitle_target_0269f800), ((ulong)pcVar3 & 1) == 0)) {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_respondsToSelector__026ca818,
                     PTR_s_addBtnTitle_target_sel__0269d278);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_addBtnTitle_target_sel__0269d278,local_80,local_50,uVar5);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_addDestructiveButtonTitle_target_0269f800,local_80,local_50,
                     uVar5);
        }
        local_5c = 0;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    }
    pcVar7 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar3 = local_68;
    puVar1 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar7 & 1) != 0) {
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

