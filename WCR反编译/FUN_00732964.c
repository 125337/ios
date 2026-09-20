// FUN_00732964 @ 00732964

void FUN_00732964(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_00732db0;
  }
  local_30 = 0;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_cellConfig_026a6398);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cellConfig_026a6398);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar2;
    if ((uVar2 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_leftConfig_026a63a0),
       (uVar2 & 1) != 0)) {
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_leftConfig_026a63a0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(local_48,0);
  }
  if ((local_30 == 0) &&
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_leftConfig_026a63a0),
     (uVar2 & 1) != 0)) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_leftConfig_026a63a0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_30 == 0) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250), (uVar2 & 1) == 0)
     ) {
LAB_00732cac:
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00734788();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_24 = 1;
    }
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00734788();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    uVar2 = local_50;
    bVar1 = uVar3 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_50,0);
    if (local_24 == 0) goto LAB_00732cac;
  }
  _objc_storeStrong(&local_30,0);
LAB_00732db0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

