// FUN_015b8e70 @ 015b8e70

ulong FUN_015b8e70(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  byte local_a0;
  uint local_74;
  long local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_74 = 0;
  if (uVar2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8);
    local_74 = (uint)uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a0 = 0;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    lVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8);
    local_a0 = (byte)uVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (((byte)local_74 & 1) == (local_a0 & 1)) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDirectory_026b0ba0);
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isDirectory_026b0ba0);
    if ((int)uVar1 == (int)lVar3) {
      if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_015b93f0(uVar1,lVar3,*(byte *)(param_2 + 0x29) & 1);
        local_28 = uVar2;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_modificationDate_026a6fc8);
        dVar6 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_modificationDate_026a6fc8);
        if (dVar6 <= param_1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_modificationDate_026a6fc8);
          dVar6 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_modificationDate_026a6fc8);
          if (param_1 <= dVar6) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            FUN_015b93f0(uVar1,lVar3,1);
            local_28 = uVar2;
            (*(code *)PTR__objc_release_02578630)(lVar3);
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          else {
            local_28 = 0xffffffffffffffff;
            if ((*(byte *)(param_2 + 0x29) & 1) != 0) {
              local_28 = 1;
            }
          }
        }
        else {
          local_28 = 1;
          if ((*(byte *)(param_2 + 0x29) & 1) != 0) {
            local_28 = 0xffffffffffffffff;
          }
        }
      }
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDirectory_026b0ba0);
      local_28 = 1;
      if ((uVar1 & 1) != 0) {
        local_28 = 0xffffffffffffffff;
      }
    }
  }
  else {
    local_28 = 1;
    if ((local_74 & 1) != 0) {
      local_28 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

