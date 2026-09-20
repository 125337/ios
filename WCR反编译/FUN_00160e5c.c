// FUN_00160e5c @ 00160e5c

void FUN_00160e5c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_88;
  ulong local_68;
  ulong local_50;
  ulong local_48;
  byte local_39;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_39 = 0;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getMsgContentViewController_0269f638)
  ;
  if ((uVar2 & 1) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getMsgContentViewController_0269f638);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_68;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  bVar1 = false;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_toolView_0269d330);
    if ((uVar2 & 1) != 0) {
      local_88 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_toolView_0269d330);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_50 = local_88;
      goto LAB_00160ff8;
    }
  }
  local_88 = 0;
LAB_00160ff8:
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_88;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (local_48 != 0) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_hideToolView__0269f780);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hideToolView__0269f780,1);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

