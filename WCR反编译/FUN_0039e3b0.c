// FUN_0039e3b0 @ 0039e3b0

void FUN_0039e3b0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_a0;
  long local_60;
  long local_50;
  long local_40;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar4 = local_20;
  FUN_0039d120(local_20,local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = 0;
    goto LAB_0039e634;
  }
  uVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
  lVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_preservedOriginalRows_026a2ce0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if ((long)(uVar4 - lVar6) < 0) {
LAB_0039e5a0:
    local_a0 = 0;
  }
  else {
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (lVar5 <= (long)(uVar4 - lVar6)) goto LAB_0039e5a0;
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_a0 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_60 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
LAB_0039e634:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

