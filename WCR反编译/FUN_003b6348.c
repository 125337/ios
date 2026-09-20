// FUN_003b6348 @ 003b6348

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_003b6348(undefined8 param_1,undefined8 param_2)

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
  ulong uVar10;
  ulong uVar11;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  ulong local_c0;
  ulong local_b0;
  ulong local_a0;
  ulong local_90;
  ulong local_80;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar7 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_00396798();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  FUN_00396798();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  FUN_0037a830();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  FUN_0037a830();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  if ((uVar8 == 0) || ((uVar10 & 1) != 0)) {
    local_140 = 0;
    if (uVar8 != 0) {
      local_140 = (uint)uVar10 & 0xff;
    }
    local_13c = 2;
    if ((local_140 & 1) != 0) {
      local_13c = 1;
    }
  }
  else {
    local_13c = 0;
  }
  if ((uVar9 == 0) || ((uVar11 & 1) != 0)) {
    local_148 = 0;
    if (uVar9 != 0) {
      local_148 = (uint)uVar11 & 0xff;
    }
    local_144 = 2;
    if ((local_148 & 1) != 0) {
      local_144 = 1;
    }
  }
  else {
    local_144 = 0;
  }
  if (local_13c == local_144) {
    uVar7 = local_30;
    FUN_003b6b3c();
    uVar8 = local_38;
    FUN_003b6b3c();
    if (uVar7 == uVar8) {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
      _objc_retainAutoreleasedReturnValue();
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      bVar6 = false;
      if (uVar7 != 0) {
        local_80 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
        _objc_retainAutoreleasedReturnValue();
        bVar5 = true;
        bVar6 = false;
        if (local_80 != 0) {
          local_90 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
          _objc_retainAutoreleasedReturnValue();
          bVar4 = true;
          uVar8 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_a0 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          uVar9 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar6 = false;
          if (uVar8 == uVar9) {
            local_b0 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            uVar8 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_c0 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            uVar9 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar6 = uVar8 != uVar9;
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if (bVar4) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if (bVar5) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(uVar7);
      if (bVar6) {
        uVar7 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar9 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_28 = 1;
        if ((long)uVar8 < (long)uVar10) {
          local_28 = 0xffffffffffffffff;
        }
        (*(code *)PTR__objc_release_02578630)(uVar9);
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      else {
        uVar7 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_compare_options__026a2e98,uVar8,1);
        local_28 = uVar9;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
    }
    else {
      local_28 = 1;
      if (uVar8 < uVar7) {
        local_28 = 0xffffffffffffffff;
      }
    }
  }
  else {
    local_28 = 1;
    if (local_13c < local_144) {
      local_28 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

