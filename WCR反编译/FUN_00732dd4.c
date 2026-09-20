// FUN_00732dd4 @ 00732dd4

void FUN_00732dd4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40 [3];
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_dr_viewId_026a7b60);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dr_viewId_026a7b60);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00734788();
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar3 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
      uVar2 = local_40[0];
      bVar1 = uVar3 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(bVar1,local_40,0);
      if (local_24 != 0) goto LAB_007330cc;
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_pathKey_026a7b68);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathKey_026a7b68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00734788();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      uVar2 = local_48;
      bVar1 = uVar3 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_48,0);
      if (local_24 != 0) goto LAB_007330cc;
    }
    local_18 = 0;
    local_24 = 1;
  }
LAB_007330cc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

