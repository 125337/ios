// FUN_001aacec @ 001aacec

void FUN_001aacec(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_68;
  bool local_39;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((((local_18 == 0) || (FUN_001afc2c(), (uVar1 & 1) == 0)) ||
      (uVar3 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_enableSearchBarButton_0269fec8),
      (uVar3 & 1) == 0)) ||
     (uVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enableSearchBarButton_0269fec8),
     (uVar3 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_menuBarButton_0269fed0);
    local_39 = (uVar3 & 1) == 0;
    if (local_39) {
      local_68 = 0;
    }
    else {
      local_68 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_menuBarButton_0269fed0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_68;
    }
    local_39 = !local_39;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    pcVar4 = &cf_setSearchBtnAlpha_animated_completion_;
    _NSSelectorFromString();
    if ((local_30 == 0) ||
       (uVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4),
       (uVar3 & 1) == 0)) {
      local_28 = 1;
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setSearchBarButtonShown__0269fed8
                );
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSearchBarButtonShown__0269fed8,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_30,pcVar4,0,0);
      local_28 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

