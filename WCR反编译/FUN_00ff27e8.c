// FUN_00ff27e8 @ 00ff27e8

void FUN_00ff27e8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  bVar1 = true;
  local_30 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_contentPages_026ad660);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar3 < 2;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentPageIndex_026ad670);
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentPages_026ad660);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = (uVar3 + 1) / uVar5;
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_applyContentPageAtIndex__026ad678,(uVar3 + 1) - uVar2 * uVar5);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

