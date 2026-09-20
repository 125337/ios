// FUN_00022174 @ 00022174

void FUN_00022174(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_138;
  ulong local_108;
  ulong local_f0;
  ulong local_d8;
  ulong local_88;
  ulong local_80;
  undefined4 local_78;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  FUN_0001a4fc(local_28,&cf_m_viewController);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_28;
    FUN_0001a198(local_28,PTR_s_getViewController_0269d328);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_30;
  pcVar3 = "BaseMsgContentViewController";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar3);
  if ((uVar1 & 1) == 0) {
    uVar2 = local_28;
    FUN_00022d10();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_30;
  FUN_0001a198(local_30,PTR_s_toolView_0269d330);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_d8 = uVar1;
  if (uVar1 == 0) {
    local_f0 = local_30;
    FUN_0001a198(local_30,PTR_s_m_inputToolView_0269d0f0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_f0;
    if (local_f0 == 0) {
      local_108 = local_30;
      FUN_0001a198(local_30,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_108;
      if (local_108 == 0) {
        local_108 = local_28;
        FUN_0001a198(local_28,PTR_s_toolView_0269d330);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_108;
      }
      local_f0 = local_108;
    }
    local_d8 = local_f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_d8;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_resetText_0269d338);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_48[0];
    FUN_0001a198(local_48[0],PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar1;
    if (uVar1 == 0) {
      local_88 = local_48[0];
      FUN_0001a198(local_48[0],PTR_s_m_textView_0269d100);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_138;
    if (uVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setText__026caa88,&cf___);
    }
    _objc_storeStrong(&local_80,0);
    local_78 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_resetText_0269d338);
    local_78 = 1;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

