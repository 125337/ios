// FUN_016002cc @ 016002cc

void FUN_016002cc(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_90;
  ulong local_88;
  ulong local_78;
  ulong local_68;
  ulong local_58;
  ulong local_48;
  ulong local_38;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar7 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar7;
  if (uVar7 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_setPendingListRefresh__026b17b0,0);
    uVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar6 = false;
    local_90 = 1;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((uVar9 & 1) == 0) {
      local_38 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar6 = true;
      local_48 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = 1;
      bVar4 = false;
      bVar5 = true;
      if ((uVar9 & 1) == 0) {
        local_58 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        bVar4 = true;
        local_68 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_90 = 1;
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if ((uVar9 & 1) == 0) {
          local_78 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          local_88 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar9 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_90 = (uint)uVar9;
          bVar3 = true;
          bVar5 = true;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (bVar6) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    if ((local_90 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshSessionList_026b1418);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsSessionListRefresh_026b17b8);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

