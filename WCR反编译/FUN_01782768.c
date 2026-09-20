// FUN_01782768 @ 01782768

void FUN_01782768(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_pageDataDirty_026b4570);
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar5 = false;
  if ((uVar6 & 1) != 0) {
    local_28 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar4 = true;
    local_38 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    bVar5 = false;
    if (local_38 == *(long *)(param_1 + 0x20)) {
      local_48 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewIfLoaded_026a1fc8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_58 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar5 = local_58 != 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if (bVar5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadPageData_026b45a0);
  }
  return;
}

