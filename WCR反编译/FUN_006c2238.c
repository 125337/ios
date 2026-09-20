// FUN_006c2238 @ 006c2238

void FUN_006c2238(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50 [3];
  ulong local_38;
  undefined *local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_006c24ec;
  }
  local_30 = PTR_s_locateToMsg__0269d608;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  while (local_38 != 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_30);
    uVar2 = local_38;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_24 = 1;
      goto LAB_006c24bc;
    }
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getViewController_0269d328);
  if ((uVar2 & 1) == 0) {
LAB_006c24ac:
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getViewController_0269d328);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,local_30);
    uVar2 = local_50[0];
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(local_50,0);
    if (local_24 == 0) goto LAB_006c24ac;
  }
LAB_006c24bc:
  _objc_storeStrong(&local_38,0);
LAB_006c24ec:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

