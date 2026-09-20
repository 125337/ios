// FUN_00016f40 @ 00016f40

void FUN_00016f40(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_138;
  ulong local_100;
  char *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_0001a198(local_30,PTR_s_getChatUsername_0269d2b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  uVar1 = local_38;
  if (uVar2 == 0) {
    uVar2 = local_30;
    FUN_00020d74();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    uVar1 = local_38;
    if (uVar2 == 0) {
      uVar2 = local_30;
      FUN_00017874();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      FUN_00020d74();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      uVar1 = local_38;
      if (uVar2 == 0) {
        local_61 = 0;
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_GetMessagesWrapArray_0269d218);
        if ((uVar1 & 1) == 0) {
          local_100 = 0;
        }
        else {
          local_100 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_GetMessagesWrapArray_0269d218);
          _objc_retainAutoreleasedReturnValue();
          local_61 = 1;
          local_60 = local_100;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_100;
        if ((local_61 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        local_79 = 0;
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = "CMessageWrap";
        _objc_getClass();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar3);
        if ((uVar2 & 1) == 0) {
          local_138 = 0;
        }
        else {
          local_138 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = local_138;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_138;
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        pcVar3 = "SettingUtil";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getLocalUsrName__0269ce98,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_70;
        local_88 = pcVar3;
        FUN_00010240(local_70,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_48 = 1;
        local_28 = uVar1;
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        local_48 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      local_48 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

