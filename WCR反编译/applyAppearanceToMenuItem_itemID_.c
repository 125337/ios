// applyAppearanceToMenuItem:itemID: @ 01105998

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::applyAppearanceToMenuItem_itemID_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_f0;
  undefined *local_d8;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  undefined *local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  if ((local_40 == 0) ||
     (uVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_4c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_010f4f48();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) &&
       (uVar1 = local_48, _WCRLongPressMenuItemIsCustom(), (uVar1 & 1) != 0)) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_longPressCustomEntryByID__026aedf8,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_010f4f48();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((puVar2 != (undefined *)0x0) &&
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0),
       (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTitle__0269cef0,local_58);
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_010f4f48();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar2 = local_60, _WCRPluginIconValueIsAlbum(), ((ulong)puVar2 & 1) != 0)) {
      uVar1 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      local_4c = 1;
    }
    else {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_d8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_menuItemTitle__026aee28,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_d8;
      }
      else {
        local_d8 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_d8;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      uVar1 = local_40;
      FUN_01105ea0(local_40,local_68,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar1;
      if (uVar1 == 0) {
        local_f0 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_f0;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_4c = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

