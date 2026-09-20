// FUN_003b5e28 @ 003b5e28

ulong FUN_003b5e28(undefined8 param_1,undefined8 param_2)

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
  ulong local_98;
  ulong local_88;
  ulong local_78;
  ulong local_68;
  ulong local_58;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
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
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
      _objc_retainAutoreleasedReturnValue();
      bVar5 = true;
      bVar6 = false;
      if (local_58 != 0) {
        local_68 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
        _objc_retainAutoreleasedReturnValue();
        bVar4 = true;
        uVar8 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_78 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        uVar9 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar6 = false;
        if (uVar8 == uVar9) {
          local_88 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          uVar8 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_98 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar9 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar6 = uVar8 != uVar9;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_02578630)(local_58);
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
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

