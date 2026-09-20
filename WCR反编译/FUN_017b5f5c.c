// FUN_017b5f5c @ 017b5f5c

void FUN_017b5f5c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  bVar1 = false;
  local_28 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = 1 < uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_popViewControllerAnimated__0269ede0,1);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

