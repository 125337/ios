// editMenuInteraction:menuForConfiguration:suggestedActions: @ 00558ce0

/* Function Stack Size: 0x28 bytes */

ID WCRefineMomentsEditMenuDelegateProxy::editMenuInteraction_menuForConfiguration_suggestedActions_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_d8;
  bool local_79;
  undefined *local_78;
  ulong local_68 [3];
  undefined *local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = (undefined *)0x0;
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_originalDelegate_026a4fe8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_respondsToSelector__026ca818,local_28);
  if (((ulong)puVar1 & 1) != 0) {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_editMenuInteraction_menuForConfi_026a4ff8,local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_68[0] = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_68[0];
    local_68[0] = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  FUN_00559078(local_68[0]);
  puVar1 = local_48;
  if (local_48 == (undefined *)0x0) {
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (lVar5 == 0) {
      local_d8 = (undefined *)0x0;
    }
    else {
      local_d8 = PTR__OBJC_CLASS___UIMenu_026ce388;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIMenu_026ce388,PTR_s_menuWithChildren__026a5000,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_d8;
    }
    local_79 = lVar5 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_d8;
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

